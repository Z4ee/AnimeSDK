#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_0_16E4307DCC419505_546;
class Class_1_0E94DD4A47F0F315;
namespace RPG::Client { class BaseMonoTriggerRegion; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A696AB4980B3D7B5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112D1FD0)
#define CLASS_1_A696AB4980B3D7B5_DOONENTER_OFFSET UNITYSDK_OFFSET(0x112D3720)
#define CLASS_1_A696AB4980B3D7B5_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x112D37B0)
#define CLASS_1_A696AB4980B3D7B5_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x112D4970)
#define CLASS_1_A696AB4980B3D7B5_GET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x112D4A00)
#define CLASS_1_A696AB4980B3D7B5_GET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x112D49B0)
#define CLASS_1_A696AB4980B3D7B5_GET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x112D4A20)
#define CLASS_1_A696AB4980B3D7B5_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x112D4990)
#define CLASS_1_A696AB4980B3D7B5_GET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x112D49E0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x112D3C40)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_29689D7471055A3F_OFFSET UNITYSDK_OFFSET(0x112D4190)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_2B3EFEA1C6FD0AA4_OFFSET UNITYSDK_OFFSET(0x112D2E40)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x112D4850)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_3993B6742487D922_OFFSET UNITYSDK_OFFSET(0x112D25D0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x112D3B70)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0x112D3E20)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_51BB44919003ED8C_OFFSET UNITYSDK_OFFSET(0x112D4A40)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_5A42C23111EA7B3C_OFFSET UNITYSDK_OFFSET(0x112D2F70)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x112D4570)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_6643AA032101239A_OFFSET UNITYSDK_OFFSET(0x112D2B90)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_68337B7DC92048C0_OFFSET UNITYSDK_OFFSET(0x112D4E10)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x112D2D00)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x112D21A0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_72161A3E817450BF_OFFSET UNITYSDK_OFFSET(0x112D34F0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_75174CC1DC3AB58D_OFFSET UNITYSDK_OFFSET(0x112D1F80)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_77A5BD15625084BD_OFFSET UNITYSDK_OFFSET(0x112D5000)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_795059A0162B7B8D_OFFSET UNITYSDK_OFFSET(0x112D4660)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_7BEDCFDAB5E3F6D3_OFFSET UNITYSDK_OFFSET(0x112D3FB0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_86D9DADC38211793_OFFSET UNITYSDK_OFFSET(0x112D38A0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_8B6F11557B375B74_1_OFFSET UNITYSDK_OFFSET(0x112D2670)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0x112D2610)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x112D20D0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_8E21B63E1A7B6A25_OFFSET UNITYSDK_OFFSET(0x112D2360)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_9816C66A3786670A_OFFSET UNITYSDK_OFFSET(0x112D4600)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x112D2A70)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_A5BBC63CF87EB78F_OFFSET UNITYSDK_OFFSET(0x112D26D0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_A75B4838E132C727_OFFSET UNITYSDK_OFFSET(0x112D2460)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_BCDCE74455CC103E_OFFSET UNITYSDK_OFFSET(0x112D3FA0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x112D2AF0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_C348049DE90BD88C_1_OFFSET UNITYSDK_OFFSET(0x112D44C0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_C348049DE90BD88C_OFFSET UNITYSDK_OFFSET(0x112D4410)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x112D48E0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_D9136EC4788E091A_OFFSET UNITYSDK_OFFSET(0x112D2580)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_E8302C157AFBAD54_OFFSET UNITYSDK_OFFSET(0x112D3840)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_F434B801DC06B848_OFFSET UNITYSDK_OFFSET(0x112D4CF0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_FB7E543833A43955_OFFSET UNITYSDK_OFFSET(0x112D49D0)
#define CLASS_1_A696AB4980B3D7B5_METHOD_1_FC0E494BF9D6301C_OFFSET UNITYSDK_OFFSET(0x112D4BB0)
#define CLASS_1_A696AB4980B3D7B5_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x112D3350)
#define CLASS_1_A696AB4980B3D7B5_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x112D4980)
#define CLASS_1_A696AB4980B3D7B5_SET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x112D4A10)
#define CLASS_1_A696AB4980B3D7B5_SET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x112D49C0)
#define CLASS_1_A696AB4980B3D7B5_SET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x112D4A30)
#define CLASS_1_A696AB4980B3D7B5_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x112D49A0)
#define CLASS_1_A696AB4980B3D7B5_SET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x112D49F0)
#define CLASS_1_A696AB4980B3D7B5_TICK_OFFSET UNITYSDK_OFFSET(0x112D33D0)
#define CLASS_1_A696AB4980B3D7B5__CCTOR_OFFSET UNITYSDK_OFFSET(0x112D5220)
#define CLASS_1_A696AB4980B3D7B5__CTOR_OFFSET UNITYSDK_OFFSET(0x112D1DF0)

inline static constexpr unsigned int Class_1_A696AB4980B3D7B5_TypeDefinitionIndex = 53711;

class Class_1_A696AB4980B3D7B5 : public ::System::Object
{
public:
	static ::RPG::GameCore::TriggerValidGuestConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::TriggerValidGuestConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A696AB4980B3D7B5_TypeDefinitionIndex)->GetStaticField(0x16BE0);
	}
	::UnityEngine::Coroutine* Field_1_1; // 0x10
	::RPG::Client::BaseMonoTriggerRegion* __TriggerRegion_k__BackingField; // 0x18
	::Il2CppArray<::System::UInt32>* Field_1_3; // 0x20
	::RPG::GameCore::PredicateConfig* Field_1_4; // 0x28
	::RPG::GameCore::GameEntity* Field_1_5; // 0x30
	::RPG::GameCore::TriggerValidGuestConfig* Field_1_6; // 0x38
	::RPG::GameCore::ColliderTriggerComponent* Field_1_7; // 0x40
	::System::Action_2<::Class_0_16E4307DCC419505_546*, ::System::Boolean>* Field_1_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_1_9; // 0x50
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* Field_1_10; // 0x58
	::System::Action_3<::Class_1_A696AB4980B3D7B5*, ::RPG::GameCore::GameEntity*, ::System::Boolean>* Field_1_11; // 0x60
	::RPG::GameCore::PredicateConfig* Field_1_12; // 0x68
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_13; // 0x70
	::RPG::GameCore::GameEntity* Field_1_14; // 0x78
	::RPG::GameCore::GameEntity* Field_1_15; // 0x80
	::System::UInt32 Field_1_16; // 0x88
	::System::Boolean Field_1_17; // 0x8C
	::System::Boolean _OnlyTriggerByFakeAvatar_k__BackingField; // 0x8D
	::System::Boolean Field_1_19; // 0x8E
	::System::Boolean Field_1_20; // 0x8F
	::System::Boolean Field_1_21; // 0x90
	::System::Boolean _IsNamedTrigger_k__BackingField; // 0x91
	::System::Boolean _CheckPropInteractMustNotInDanger_k__BackingField; // 0x92
	::System::Boolean _IgnoreFakeAvatar_k__BackingField; // 0x93
	::System::Boolean Field_1_25; // 0x94
	::System::Boolean _ForceTriggerInDangerStatus_k__BackingField; // 0x95

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E21B63E1A7B6A25(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_8E21B63E1A7B6A25_OFFSET))(this, a1);
	}

	::System::Void Method_1_A75B4838E132C727(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_A75B4838E132C727_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9136EC4788E091A(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_D9136EC4788E091A_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_3993B6742487D922()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_3993B6742487D922_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B6F11557B375B74_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_8B6F11557B375B74_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5BBC63CF87EB78F(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_A5BBC63CF87EB78F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_1_5A42C23111EA7B3C(::UnityEngine::Transform* a1, ::Class_1_0E94DD4A47F0F315* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_0E94DD4A47F0F315*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_5A42C23111EA7B3C_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_72161A3E817450BF(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_72161A3E817450BF_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E8302C157AFBAD54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_E8302C157AFBAD54_OFFSET))(this);
	}

	::System::Boolean Method_1_86D9DADC38211793(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_86D9DADC38211793_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_1_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_3FB378AD48E4B10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BEDCFDAB5E3F6D3(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_7BEDCFDAB5E3F6D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C348049DE90BD88C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_C348049DE90BD88C_OFFSET))(this, a1);
	}

	::System::Void Method_1_C348049DE90BD88C_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_C348049DE90BD88C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_29689D7471055A3F(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_29689D7471055A3F_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_6643AA032101239A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_6643AA032101239A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2B3EFEA1C6FD0AA4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_2B3EFEA1C6FD0AA4_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_75174CC1DC3AB58D(::System::UInt32 a1, ::RPG::GameCore::EntityType a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_75174CC1DC3AB58D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9816C66A3786670A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_9816C66A3786670A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_795059A0162B7B8D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_795059A0162B7B8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_BCDCE74455CC103E()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_BCDCE74455CC103E_OFFSET))(this);
	}

	::System::Boolean get_CheckPropInteractMustNotInDanger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this);
	}

	::System::Void set_CheckPropInteractMustNotInDanger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this, a1);
	}

	::System::Boolean get_OnlyTriggerByFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_OnlyTriggerByFakeAvatar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_GET_IGNOREFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_IgnoreFakeAvatar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_SET_IGNOREFAKEAVATAR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Method_1_FB7E543833A43955()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_FB7E543833A43955_OFFSET))(this);
	}

	::RPG::Client::BaseMonoTriggerRegion* get__TriggerRegion()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_GET__TRIGGERREGION_OFFSET))(this);
	}

	::System::Void set__TriggerRegion(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_SET__TRIGGERREGION_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceTriggerInDangerStatus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_GET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this);
	}

	::System::Void set_ForceTriggerInDangerStatus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_SET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsNamedTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_GET_ISNAMEDTRIGGER_OFFSET))(this);
	}

	::System::Void set_IsNamedTrigger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_SET_ISNAMEDTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_51BB44919003ED8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_51BB44919003ED8C_OFFSET))(this, a1);
	}

	::RPG::GameCore::TriggerValidGuestConfig* Method_1_FC0E494BF9D6301C()
	{
		return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_FC0E494BF9D6301C_OFFSET))(this);
	}

	::System::Boolean Method_1_F434B801DC06B848(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_F434B801DC06B848_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68337B7DC92048C0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_68337B7DC92048C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_C0FF32B4D2022F8C_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_77A5BD15625084BD(::RPG::GameCore::TriggerValidGuestConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TriggerValidGuestConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_A696AB4980B3D7B5_METHOD_1_77A5BD15625084BD_OFFSET))(a1, a2);
	}
};
