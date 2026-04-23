#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BD17C4A29F1E4223_TriggerDisableReason.h"
#include "unitysdk/RPG/GameCore/AliveState.h"
#include "unitysdk/System/Object.h"

class Class_1_59305B446B42427E;
class Class_1_5F51D4049EA87B7B;
class Class_2_B905FCDC65EE337C;
class Class_3_E21F6DE9B7FA4D05;
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SummonUnitGlobalConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnitCustomTriggerConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_BD17C4A29F1E4223_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x117BD000)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x117BA840)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_20A12F44BE2B3267_OFFSET UNITYSDK_OFFSET(0x117B98F0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x117BD030)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_334241B7253414E6_OFFSET UNITYSDK_OFFSET(0x117BA9D0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x117BA530)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x117BC4F0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_51D5922F0344F738_OFFSET UNITYSDK_OFFSET(0x117BC580)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_700971FD483F8D08_OFFSET UNITYSDK_OFFSET(0x117BD020)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_70ABAF7F0B6E54DF_OFFSET UNITYSDK_OFFSET(0x117BD040)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_75F06AA2B167CAB6_OFFSET UNITYSDK_OFFSET(0x117BCF40)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x117BAB70)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_87228966056CB632_1_OFFSET UNITYSDK_OFFSET(0x117BBD20)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_87228966056CB632_2_OFFSET UNITYSDK_OFFSET(0x117BCD70)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_87228966056CB632_OFFSET UNITYSDK_OFFSET(0x117BBEF0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_924A91FB31F1BDFA_OFFSET UNITYSDK_OFFSET(0x117BAC50)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_AA2C0B4005734BA0_OFFSET UNITYSDK_OFFSET(0x117BAAA0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_B58984781C172663_OFFSET UNITYSDK_OFFSET(0x117BBBC0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x117BC0C0)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x117BD010)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x117BAA90)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_F44C933722F13965_OFFSET UNITYSDK_OFFSET(0x117BAE40)
#define CLASS_1_BD17C4A29F1E4223_METHOD_1_FA2B1D07C223AE82_OFFSET UNITYSDK_OFFSET(0x117BA5D0)
#define CLASS_1_BD17C4A29F1E4223__CTOR_OFFSET UNITYSDK_OFFSET(0x117BD050)

inline static constexpr unsigned int Class_1_BD17C4A29F1E4223_TypeDefinitionIndex = 52962;

class Class_1_BD17C4A29F1E4223 : public ::System::Object
{
public:
	::RPG::GameCore::ColliderTriggerComponent* Field_1_5; // 0x10
	::RPG::GameCore::UnitCustomTriggerConfig* Field_1_6; // 0x18
	::Class_2_B905FCDC65EE337C* Field_1_4; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_22; // 0x28
	::RPG::GameCore::SummonUnitGlobalConfig* Field_1_7; // 0x30
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_21; // 0x38
	::System::String* Field_1_2; // 0x40
	::Class_3_E21F6DE9B7FA4D05* Field_1_15; // 0x48
	::RPG::GameCore::TaskContext* Field_1_9; // 0x50
	::Class_3_E21F6DE9B7FA4D05* Field_1_14; // 0x58
	::Class_1_59305B446B42427E* Field_1_10; // 0x60
	::Class_1_5F51D4049EA87B7B* Field_1_19; // 0x68
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_20; // 0x70
	::System::Boolean Field_1_11; // 0x78
	::System::Boolean Field_1_18; // 0x79
	::System::Single Field_1_17; // 0x7C
	::System::Single Field_1_16; // 0x80
	::Class_1_BD17C4A29F1E4223_TriggerDisableReason Field_1_3; // 0x84
	::System::Boolean Field_1_12; // 0x88
	::System::Boolean Field_1_1; // 0x89
	::System::Boolean Field_1_13; // 0x8A
	::System::Boolean Field_1_0; // 0x8B
	::System::Single Field_1_8; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_20A12F44BE2B3267(::Class_2_B905FCDC65EE337C* a1, ::RPG::GameCore::ColliderTriggerComponent* a2, ::RPG::GameCore::UnitCustomTriggerConfig* a3, ::System::Int32 a4, ::RPG::GameCore::TaskContext* a5, ::System::Boolean a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B905FCDC65EE337C*, ::RPG::GameCore::ColliderTriggerComponent*, ::RPG::GameCore::UnitCustomTriggerConfig*, ::System::Int32, ::RPG::GameCore::TaskContext*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_20A12F44BE2B3267_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_1_FA2B1D07C223AE82(::System::Boolean a1, ::Class_1_BD17C4A29F1E4223_TriggerDisableReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_1_BD17C4A29F1E4223_TriggerDisableReason))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_FA2B1D07C223AE82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA2C0B4005734BA0(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AliveState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AliveState))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_AA2C0B4005734BA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_924A91FB31F1BDFA(::Class_1_59305B446B42427E* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_59305B446B42427E*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_924A91FB31F1BDFA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B58984781C172663(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_B58984781C172663_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_51D5922F0344F738(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_51D5922F0344F738_OFFSET))(this, a1);
	}

	::System::Void Method_1_334241B7253414E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_334241B7253414E6_OFFSET))(this);
	}

	::System::Boolean Method_1_F44C933722F13965(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_F44C933722F13965_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_75F06AA2B167CAB6(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_75F06AA2B167CAB6_OFFSET))(a1, a2);
	}

	::System::Void Method_1_87228966056CB632(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_87228966056CB632_OFFSET))(this, a1);
	}

	::System::Void Method_1_87228966056CB632_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_87228966056CB632_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_87228966056CB632_2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_87228966056CB632_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::GameCore::UnitCustomTriggerConfig* Method_1_700971FD483F8D08()
	{
		return ((::RPG::GameCore::UnitCustomTriggerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_700971FD483F8D08_OFFSET))(this);
	}

	::Class_1_59305B446B42427E* Method_1_24748FC20F375725()
	{
		return ((::Class_1_59305B446B42427E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_70ABAF7F0B6E54DF()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD17C4A29F1E4223_METHOD_1_70ABAF7F0B6E54DF_OFFSET))(this);
	}
};
