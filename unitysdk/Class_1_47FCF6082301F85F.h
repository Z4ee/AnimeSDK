#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_47FCF6082301F85F_TriggerDisableReason.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_1_A696AB4980B3D7B5;
class Class_2_B905FCDC65EE337C;
class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonUnitGlobalConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_47FCF6082301F85F_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13AA95A0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x13AA6870)
#define CLASS_1_47FCF6082301F85F_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13AA95D0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_356B1F730B77CE14_OFFSET UNITYSDK_OFFSET(0x13AA7D80)
#define CLASS_1_47FCF6082301F85F_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x13AA8840)
#define CLASS_1_47FCF6082301F85F_METHOD_1_53FE75B00F3A21BF_OFFSET UNITYSDK_OFFSET(0x13AA6570)
#define CLASS_1_47FCF6082301F85F_METHOD_1_700971FD483F8D08_OFFSET UNITYSDK_OFFSET(0x13AA95C0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x13AA95E0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_75F06AA2B167CAB6_OFFSET UNITYSDK_OFFSET(0x13AA94E0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x13AA6BE0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_8B46F22B23243F6D_1_OFFSET UNITYSDK_OFFSET(0x13AA8010)
#define CLASS_1_47FCF6082301F85F_METHOD_1_8B46F22B23243F6D_2_OFFSET UNITYSDK_OFFSET(0x13AA9310)
#define CLASS_1_47FCF6082301F85F_METHOD_1_8B46F22B23243F6D_OFFSET UNITYSDK_OFFSET(0x13AA81E0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_9089E5D98E54D006_OFFSET UNITYSDK_OFFSET(0x13AA5840)
#define CLASS_1_47FCF6082301F85F_METHOD_1_AA2C0B4005734BA0_OFFSET UNITYSDK_OFFSET(0x13AA6B10)
#define CLASS_1_47FCF6082301F85F_METHOD_1_D865CAC190D8B092_OFFSET UNITYSDK_OFFSET(0x13AA6CC0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_DD8942C8727C64E1_OFFSET UNITYSDK_OFFSET(0x13AA6FA0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x13AA83B0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13AA95B0)
#define CLASS_1_47FCF6082301F85F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13AA6B00)
#define CLASS_1_47FCF6082301F85F_METHOD_1_F77BBFBC56288301_OFFSET UNITYSDK_OFFSET(0x13AA6A10)
#define CLASS_1_47FCF6082301F85F_METHOD_1_FA2B1D07C223AE82_OFFSET UNITYSDK_OFFSET(0x13AA6610)
#define CLASS_1_47FCF6082301F85F_METHOD_1_FD7491A53D5F5FC6_OFFSET UNITYSDK_OFFSET(0x13AA88D0)
#define CLASS_1_47FCF6082301F85F__CTOR_OFFSET UNITYSDK_OFFSET(0x13AA95F0)

inline static constexpr unsigned int Class_1_47FCF6082301F85F_TypeDefinitionIndex = 53672;

class Class_1_47FCF6082301F85F : public ::System::Object
{
public:
	::Class_1_A696AB4980B3D7B5* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::RPG::GameCore::ColliderTriggerComponent* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_3; // 0x28
	::Class_3_07C3C4D2990C49EE* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_5; // 0x38
	::System::String* Field_1_6; // 0x40
	::RPG::GameCore::SummonUnitGlobalConfig* Field_1_7; // 0x48
	::Class_3_07C3C4D2990C49EE* Field_1_8; // 0x50
	::RPG::GameCore::UnitCustomTriggerConfig* Field_1_9; // 0x58
	::Class_2_B905FCDC65EE337C* Field_1_10; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_1_11; // 0x68
	::RPG::GameCore::TaskContext* Field_1_12; // 0x70
	::Class_1_47FCF6082301F85F_TriggerDisableReason Field_1_13; // 0x78
	::System::Single Field_1_14; // 0x7C
	::System::Single Field_1_15; // 0x80
	::System::Boolean Field_1_16; // 0x84
	::System::Boolean Field_1_17; // 0x85
	::System::Boolean Field_1_18; // 0x86
	::System::Boolean Field_1_19; // 0x87
	::System::Boolean Field_1_20; // 0x88
	::System::Boolean Field_1_21; // 0x89
	::System::Single Field_1_22; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9089E5D98E54D006(::Class_2_B905FCDC65EE337C* a1, ::RPG::GameCore::ColliderTriggerComponent* a2, ::RPG::GameCore::UnitCustomTriggerConfig* a3, ::System::Int32 a4, ::RPG::GameCore::TaskContext* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B905FCDC65EE337C*, ::RPG::GameCore::ColliderTriggerComponent*, ::RPG::GameCore::UnitCustomTriggerConfig*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_9089E5D98E54D006_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_FA2B1D07C223AE82(::System::Boolean a1, ::Class_1_47FCF6082301F85F_TriggerDisableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_47FCF6082301F85F_TriggerDisableReason))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_FA2B1D07C223AE82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA2C0B4005734BA0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_AA2C0B4005734BA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D865CAC190D8B092(::Class_1_A696AB4980B3D7B5* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A696AB4980B3D7B5*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_D865CAC190D8B092_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_356B1F730B77CE14(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_356B1F730B77CE14_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD7491A53D5F5FC6(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_FD7491A53D5F5FC6_OFFSET))(this, a1);
	}

	::System::Void Method_1_F77BBFBC56288301()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_F77BBFBC56288301_OFFSET))(this);
	}

	::System::Boolean Method_1_DD8942C8727C64E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_DD8942C8727C64E1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_75F06AA2B167CAB6(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_75F06AA2B167CAB6_OFFSET))(a1, a2);
	}

	::System::Void Method_1_8B46F22B23243F6D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_8B46F22B23243F6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B46F22B23243F6D_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_8B46F22B23243F6D_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B46F22B23243F6D_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_8B46F22B23243F6D_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_53FE75B00F3A21BF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_53FE75B00F3A21BF_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::GameCore::UnitCustomTriggerConfig* Method_1_700971FD483F8D08()
	{
		return ((::RPG::GameCore::UnitCustomTriggerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_700971FD483F8D08_OFFSET))(this);
	}

	::Class_1_A696AB4980B3D7B5* Method_1_24748FC20F375725()
	{
		return ((::Class_1_A696AB4980B3D7B5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_70ABAF7F0B6E54DF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47FCF6082301F85F_METHOD_1_70ABAF7F0B6E54DF_OFFSET))(this);
	}
};
