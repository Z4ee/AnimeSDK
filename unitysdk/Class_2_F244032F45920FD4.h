#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Multithread/JobParallelForThreadTask_1.h"
#include "unitysdk/RPG/GameCore/ThreadTaskType.h"
#include "unitysdk/Struct_2_71F960E6AB5A20A7.h"

class Class_1_45EB26448208D929;
class Class_2_29B773FE7D0D2D8D;
namespace RPG::GameCore { class ThreadTaskConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityChan { class SpringCollider; }
namespace UnityChan { class SpringManager; }
namespace UnityEngine { class Transform; }

#define CLASS_2_F244032F45920FD4_COLLECT_OFFSET UNITYSDK_OFFSET(0x100365C0)
#define CLASS_2_F244032F45920FD4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10036530)
#define CLASS_2_F244032F45920FD4_FLUSH_OFFSET UNITYSDK_OFFSET(0x10036650)
#define CLASS_2_F244032F45920FD4_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10036740)
#define CLASS_2_F244032F45920FD4_METHOD_2_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x10036350)
#define CLASS_2_F244032F45920FD4_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10036290)
#define CLASS_2_F244032F45920FD4_METHOD_2_BABD5391CA1B0A93_OFFSET UNITYSDK_OFFSET(0x100362F0)
#define CLASS_2_F244032F45920FD4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10036580)
#define CLASS_2_F244032F45920FD4_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10036700)
#define CLASS_2_F244032F45920FD4_ONENABLE_OFFSET UNITYSDK_OFFSET(0x100366C0)
#define CLASS_2_F244032F45920FD4_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x10036750)
#define CLASS_2_F244032F45920FD4__CTOR_OFFSET UNITYSDK_OFFSET(0x10036210)
#define CLASS_2_F244032F45920FD4___IFIXBASEPROXY_COLLECT_OFFSET UNITYSDK_OFFSET(0x100367B0)
#define CLASS_2_F244032F45920FD4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10036760)
#define CLASS_2_F244032F45920FD4___IFIXBASEPROXY_FLUSH_OFFSET UNITYSDK_OFFSET(0x100367C0)
#define CLASS_2_F244032F45920FD4___IFIXBASEPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x10036870)
#define CLASS_2_F244032F45920FD4___IFIXBASEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10036830)

inline static constexpr unsigned int Class_2_F244032F45920FD4_TypeDefinitionIndex = 65517;

class Class_2_F244032F45920FD4 : public ::RPG::Client::Multithread::JobParallelForThreadTask_1<::Struct_2_71F960E6AB5A20A7>
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::UnityChan::SpringCollider*>* Field_2_0; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_2; // 0x40
	::UnityChan::SpringManager* Field_2_4; // 0x48
	::RPG::GameCore::ThreadTaskConfig* _Config_k__BackingField; // 0x50
	::Class_1_45EB26448208D929* Field_2_3; // 0x58
	::Class_2_29B773FE7D0D2D8D* Field_2_5; // 0x60
	::RPG::GameCore::ThreadTaskType Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BABD5391CA1B0A93(::UnityChan::SpringManager* a1, ::Class_2_29B773FE7D0D2D8D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityChan::SpringManager*, ::Class_2_29B773FE7D0D2D8D*))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_METHOD_2_BABD5391CA1B0A93_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_COLLECT_OFFSET))(this);
	}

	::System::Void Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_FLUSH_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_ONDISABLE_OFFSET))(this);
	}

	::System::Void Method_2_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_METHOD_2_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::ThreadTaskConfig* get_Config()
	{
		return ((::RPG::GameCore::ThreadTaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::ThreadTaskConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ThreadTaskConfig*))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Collect()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4___IFIXBASEPROXY_COLLECT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Flush()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4___IFIXBASEPROXY_FLUSH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4___IFIXBASEPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F244032F45920FD4___IFIXBASEPROXY_ONDISABLE_OFFSET))(this);
	}
};
