#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_71F960E6AB5A20A7.h"

class Class_1_45EB26448208D929;
class Class_2_81CCE365F952E97C;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2FE2076DA950FCCD_COLLECT_OFFSET UNITYSDK_OFFSET(0xD7EBA70)
#define CLASS_2_2FE2076DA950FCCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7EB9E0)
#define CLASS_2_2FE2076DA950FCCD_FLUSH_OFFSET UNITYSDK_OFFSET(0xD7EBB00)
#define CLASS_2_2FE2076DA950FCCD_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD7EBBF0)
#define CLASS_2_2FE2076DA950FCCD_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xD7EB7A0)
#define CLASS_2_2FE2076DA950FCCD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD7EB6E0)
#define CLASS_2_2FE2076DA950FCCD_METHOD_2_C1147233BD4D68FB_OFFSET UNITYSDK_OFFSET(0xD7EB740)
#define CLASS_2_2FE2076DA950FCCD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7EBA30)
#define CLASS_2_2FE2076DA950FCCD_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD7EBBB0)
#define CLASS_2_2FE2076DA950FCCD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7EBB70)
#define CLASS_2_2FE2076DA950FCCD_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xD7EBC00)
#define CLASS_2_2FE2076DA950FCCD__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EB660)
#define CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0xD7EBC60)
#define CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD7EBC10)
#define CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0xD7EBC70)
#define CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD7EBD40)
#define CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD7EBD00)

inline static constexpr unsigned int Class_2_2FE2076DA950FCCD_TypeDefinitionIndex = 66447;

class Class_2_2FE2076DA950FCCD : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_71F960E6AB5A20A7>
{
public:
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x30
	::UnityChan::SpringManager* Field_2_1; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_2; // 0x40
	::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* Field_2_3; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_4; // 0x50
	::Class_2_81CCE365F952E97C* Field_2_5; // 0x58
	::Class_1_45EB26448208D929* Field_2_6; // 0x60
	::RPG::GameCore::ThreadTaskType Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_C1147233BD4D68FB(::UnityChan::SpringManager* a1, ::Class_2_81CCE365F952E97C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::Class_2_81CCE365F952E97C*))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_METHOD_2_C1147233BD4D68FB_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD_SET_CONFIG_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FE2076DA950FCCD___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
