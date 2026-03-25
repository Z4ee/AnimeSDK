#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_D523FB777622F603.h"

namespace RPG::GameCore { class ThreadTaskConfig; }

#define CLASS_2_81A4CCAF8860A4C5_COLLECT_OFFSET UNITYSDK_OFFSET(0x10C59AA0)
#define CLASS_2_81A4CCAF8860A4C5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C59A20)
#define CLASS_2_81A4CCAF8860A4C5_FLUSH_OFFSET UNITYSDK_OFFSET(0x10C59D80)
#define CLASS_2_81A4CCAF8860A4C5_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10C59F60)
#define CLASS_2_81A4CCAF8860A4C5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10C599C0)
#define CLASS_2_81A4CCAF8860A4C5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C59A60)
#define CLASS_2_81A4CCAF8860A4C5_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10C59F20)
#define CLASS_2_81A4CCAF8860A4C5_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10C59EE0)
#define CLASS_2_81A4CCAF8860A4C5_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10C59F70)
#define CLASS_2_81A4CCAF8860A4C5__CTOR_OFFSET UNITYSDK_OFFSET(0x10C59940)
#define CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x10C59FC0)
#define CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C59F80)
#define CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x10C59FD0)
#define CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10C5A020)
#define CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10C59FE0)

inline static constexpr unsigned int Class_2_81A4CCAF8860A4C5_TypeDefinitionIndex = 58247;

class Class_2_81A4CCAF8860A4C5 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_D523FB777622F603>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x38
	::RPG::GameCore::ThreadTaskType Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_81A4CCAF8860A4C5___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
