#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_D523FB777622F603.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_961AF441B82A290C_COLLECT_OFFSET UNITYSDK_OFFSET(0xA6CEE30)
#define CLASS_2_961AF441B82A290C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6CEDB0)
#define CLASS_2_961AF441B82A290C_FLUSH_OFFSET UNITYSDK_OFFSET(0xA6CF110)
#define CLASS_2_961AF441B82A290C_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA6CF2F0)
#define CLASS_2_961AF441B82A290C_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA6CED50)
#define CLASS_2_961AF441B82A290C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA6CEDF0)
#define CLASS_2_961AF441B82A290C_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA6CF2B0)
#define CLASS_2_961AF441B82A290C_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6CF270)
#define CLASS_2_961AF441B82A290C_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xA6CF300)
#define CLASS_2_961AF441B82A290C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6CECD0)
#define CLASS_2_961AF441B82A290C___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xA6CF350)
#define CLASS_2_961AF441B82A290C___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6CF310)
#define CLASS_2_961AF441B82A290C___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xA6CF360)
#define CLASS_2_961AF441B82A290C___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xA6CF3B0)
#define CLASS_2_961AF441B82A290C___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xA6CF370)

inline static constexpr unsigned int Class_2_961AF441B82A290C_TypeDefinitionIndex = 66464;

class Class_2_961AF441B82A290C : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_D523FB777622F603>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_961AF441B82A290C___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
