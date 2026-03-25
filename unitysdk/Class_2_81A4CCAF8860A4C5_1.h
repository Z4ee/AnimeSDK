#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_5FCD74E65BDE6F9E.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_81A4CCAF8860A4C5_1_COLLECT_OFFSET UNITYSDK_OFFSET(0x10B73640)
#define CLASS_2_81A4CCAF8860A4C5_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B735B0)
#define CLASS_2_81A4CCAF8860A4C5_1_FLUSH_OFFSET UNITYSDK_OFFSET(0x10B736C0)
#define CLASS_2_81A4CCAF8860A4C5_1_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10B737A0)
#define CLASS_2_81A4CCAF8860A4C5_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10B73550)
#define CLASS_2_81A4CCAF8860A4C5_1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10B734F0)
#define CLASS_2_81A4CCAF8860A4C5_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B73600)
#define CLASS_2_81A4CCAF8860A4C5_1_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10B73760)
#define CLASS_2_81A4CCAF8860A4C5_1_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10B73720)
#define CLASS_2_81A4CCAF8860A4C5_1_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10B737B0)
#define CLASS_2_81A4CCAF8860A4C5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10B73440)
#define CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x10B73810)
#define CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B737C0)
#define CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x10B73820)
#define CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10B738C0)
#define CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10B73880)

inline static constexpr unsigned int Class_2_81A4CCAF8860A4C5_1_TypeDefinitionIndex = 58220;

class Class_2_81A4CCAF8860A4C5_1 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_5FCD74E65BDE6F9E>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_1___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
