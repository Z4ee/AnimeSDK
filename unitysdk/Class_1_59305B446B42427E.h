#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_382;
class Class_0_16E4307DCC419505_524;
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

#define CLASS_1_59305B446B42427E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x936EC00)
#define CLASS_1_59305B446B42427E_DOONENTER_OFFSET UNITYSDK_OFFSET(0x93703D0)
#define CLASS_1_59305B446B42427E_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x9370460)
#define CLASS_1_59305B446B42427E_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x9371590)
#define CLASS_1_59305B446B42427E_GET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x9371620)
#define CLASS_1_59305B446B42427E_GET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x93715D0)
#define CLASS_1_59305B446B42427E_GET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x9371640)
#define CLASS_1_59305B446B42427E_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x93715B0)
#define CLASS_1_59305B446B42427E_GET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x9371600)
#define CLASS_1_59305B446B42427E_METHOD_1_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x93707D0)
#define CLASS_1_59305B446B42427E_METHOD_1_05581BC7D6BC7EE5_OFFSET UNITYSDK_OFFSET(0x9370D70)
#define CLASS_1_59305B446B42427E_METHOD_1_0CD862E367545057_1_OFFSET UNITYSDK_OFFSET(0x93710D0)
#define CLASS_1_59305B446B42427E_METHOD_1_0CD862E367545057_OFFSET UNITYSDK_OFFSET(0x9371020)
#define CLASS_1_59305B446B42427E_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x9370880)
#define CLASS_1_59305B446B42427E_METHOD_1_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0x9371470)
#define CLASS_1_59305B446B42427E_METHOD_1_3993B6742487D922_OFFSET UNITYSDK_OFFSET(0x936F180)
#define CLASS_1_59305B446B42427E_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x936ED00)
#define CLASS_1_59305B446B42427E_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x9371180)
#define CLASS_1_59305B446B42427E_METHOD_1_6643AA032101239A_OFFSET UNITYSDK_OFFSET(0x936F750)
#define CLASS_1_59305B446B42427E_METHOD_1_68337B7DC92048C0_OFFSET UNITYSDK_OFFSET(0x9371B30)
#define CLASS_1_59305B446B42427E_METHOD_1_7184890E6D8EC853_OFFSET UNITYSDK_OFFSET(0x93704F0)
#define CLASS_1_59305B446B42427E_METHOD_1_75174CC1DC3AB58D_OFFSET UNITYSDK_OFFSET(0x936EBB0)
#define CLASS_1_59305B446B42427E_METHOD_1_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x9371270)
#define CLASS_1_59305B446B42427E_METHOD_1_86D9DADC38211793_OFFSET UNITYSDK_OFFSET(0x9370550)
#define CLASS_1_59305B446B42427E_METHOD_1_895D40868FC9D7A7_OFFSET UNITYSDK_OFFSET(0x936FBE0)
#define CLASS_1_59305B446B42427E_METHOD_1_8B2D6636BADD098E_OFFSET UNITYSDK_OFFSET(0x9371500)
#define CLASS_1_59305B446B42427E_METHOD_1_8B6F11557B375B74_1_OFFSET UNITYSDK_OFFSET(0x936F220)
#define CLASS_1_59305B446B42427E_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0x936F1C0)
#define CLASS_1_59305B446B42427E_METHOD_1_8E21B63E1A7B6A25_OFFSET UNITYSDK_OFFSET(0x936EF40)
#define CLASS_1_59305B446B42427E_METHOD_1_905E35B129E7BA89_OFFSET UNITYSDK_OFFSET(0x936FA80)
#define CLASS_1_59305B446B42427E_METHOD_1_95F7E440EAAEA376_OFFSET UNITYSDK_OFFSET(0x9371660)
#define CLASS_1_59305B446B42427E_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x936F620)
#define CLASS_1_59305B446B42427E_METHOD_1_A5BBC63CF87EB78F_OFFSET UNITYSDK_OFFSET(0x936F280)
#define CLASS_1_59305B446B42427E_METHOD_1_AC7B4877BB0536F4_OFFSET UNITYSDK_OFFSET(0x9371210)
#define CLASS_1_59305B446B42427E_METHOD_1_B333A26033F1313F_OFFSET UNITYSDK_OFFSET(0x9371D20)
#define CLASS_1_59305B446B42427E_METHOD_1_B4919B17B855CC79_OFFSET UNITYSDK_OFFSET(0x9370A30)
#define CLASS_1_59305B446B42427E_METHOD_1_B4CCC42D866F3519_OFFSET UNITYSDK_OFFSET(0x9370BB0)
#define CLASS_1_59305B446B42427E_METHOD_1_BCDCE74455CC103E_OFFSET UNITYSDK_OFFSET(0x9370BA0)
#define CLASS_1_59305B446B42427E_METHOD_1_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x936F6B0)
#define CLASS_1_59305B446B42427E_METHOD_1_C5532AF0F27C67D6_OFFSET UNITYSDK_OFFSET(0x9370190)
#define CLASS_1_59305B446B42427E_METHOD_1_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0x936F8F0)
#define CLASS_1_59305B446B42427E_METHOD_1_D9136EC4788E091A_OFFSET UNITYSDK_OFFSET(0x936F130)
#define CLASS_1_59305B446B42427E_METHOD_1_DA82497E4594D753_OFFSET UNITYSDK_OFFSET(0x9371780)
#define CLASS_1_59305B446B42427E_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x936EDB0)
#define CLASS_1_59305B446B42427E_METHOD_1_F434B801DC06B848_OFFSET UNITYSDK_OFFSET(0x93719E0)
#define CLASS_1_59305B446B42427E_METHOD_1_FB7E543833A43955_OFFSET UNITYSDK_OFFSET(0x93715F0)
#define CLASS_1_59305B446B42427E_METHOD_1_FE580F6D1D36D984_OFFSET UNITYSDK_OFFSET(0x936F050)
#define CLASS_1_59305B446B42427E_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x9370000)
#define CLASS_1_59305B446B42427E_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x93715A0)
#define CLASS_1_59305B446B42427E_SET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x9371630)
#define CLASS_1_59305B446B42427E_SET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x93715E0)
#define CLASS_1_59305B446B42427E_SET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x9371650)
#define CLASS_1_59305B446B42427E_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x93715C0)
#define CLASS_1_59305B446B42427E_SET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x9371610)
#define CLASS_1_59305B446B42427E_TICK_OFFSET UNITYSDK_OFFSET(0x9370080)
#define CLASS_1_59305B446B42427E__CCTOR_OFFSET UNITYSDK_OFFSET(0x9371F70)
#define CLASS_1_59305B446B42427E__CTOR_OFFSET UNITYSDK_OFFSET(0x936EA20)

inline static constexpr unsigned int Class_1_59305B446B42427E_TypeDefinitionIndex = 53001;

class Class_1_59305B446B42427E : public ::System::Object
{
public:
	static ::RPG::GameCore::TriggerValidGuestConfig** StaticGet_Field_1_26()
	{
		return (::RPG::GameCore::TriggerValidGuestConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_59305B446B42427E_TypeDefinitionIndex)->GetStaticField(0x6ADD0);
	}
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* Field_1_16; // 0x10
	::RPG::GameCore::GameEntity* Field_1_20; // 0x18
	::RPG::GameCore::PredicateConfig* Field_1_1; // 0x20
	::RPG::GameCore::TriggerValidGuestConfig* Field_1_25; // 0x28
	::RPG::GameCore::GameEntity* Field_1_12; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_9; // 0x38
	::RPG::Client::BaseMonoTriggerRegion* __TriggerRegion_k__BackingField; // 0x40
	::System::Action_2<::Class_0_16E4307DCC419505_524*, ::System::Boolean>* Field_1_6; // 0x48
	::RPG::GameCore::ColliderTriggerComponent* Field_1_13; // 0x50
	::System::Action_3<::Class_1_59305B446B42427E*, ::RPG::GameCore::GameEntity*, ::System::Boolean>* Field_1_7; // 0x58
	::RPG::GameCore::GameEntity* Field_1_19; // 0x60
	::RPG::GameCore::PredicateConfig* Field_1_0; // 0x68
	::UnityEngine::Coroutine* Field_1_21; // 0x70
	::Il2CppArray<::System::UInt32>* Field_1_5; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Field_1_10; // 0x80
	::System::Boolean Field_1_18; // 0x88
	::System::Boolean _OnlyTriggerByFakeAvatar_k__BackingField; // 0x89
	::System::Boolean Field_1_17; // 0x8A
	::System::Boolean Field_1_15; // 0x8B
	::System::Boolean _IgnoreFakeAvatar_k__BackingField; // 0x8C
	::System::Boolean Field_1_14; // 0x8D
	::System::Boolean _ForceTriggerInDangerStatus_k__BackingField; // 0x8E
	::System::Boolean Field_1_24; // 0x8F
	::System::UInt32 Field_1_8; // 0x90
	::System::Boolean _IsNamedTrigger_k__BackingField; // 0x94
	::System::Boolean _CheckPropInteractMustNotInDanger_k__BackingField; // 0x95

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E21B63E1A7B6A25(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_8E21B63E1A7B6A25_OFFSET))(this, a1);
	}

	::System::Void Method_1_FE580F6D1D36D984(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_FE580F6D1D36D984_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9136EC4788E091A(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_D9136EC4788E091A_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_3993B6742487D922()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_3993B6742487D922_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B6F11557B375B74_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_8B6F11557B375B74_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5BBC63CF87EB78F(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_A5BBC63CF87EB78F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D78B51BFDA4B8B32()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_D78B51BFDA4B8B32_OFFSET))(this);
	}

	::System::Void Method_1_895D40868FC9D7A7(::UnityEngine::Transform* a1, ::Class_1_0E94DD4A47F0F315* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_0E94DD4A47F0F315*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_895D40868FC9D7A7_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C5532AF0F27C67D6(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_C5532AF0F27C67D6_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7184890E6D8EC853()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_7184890E6D8EC853_OFFSET))(this);
	}

	::System::Boolean Method_1_86D9DADC38211793(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_86D9DADC38211793_OFFSET))(this, a1);
	}

	::System::Void Method_1_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_B4919B17B855CC79(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_B4919B17B855CC79_OFFSET))(this, a1);
	}

	::System::Void Method_1_B4CCC42D866F3519(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_B4CCC42D866F3519_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CD862E367545057(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_0CD862E367545057_OFFSET))(this, a1);
	}

	::System::Void Method_1_0CD862E367545057_1(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_0CD862E367545057_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_05581BC7D6BC7EE5(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_05581BC7D6BC7EE5_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_6643AA032101239A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_6643AA032101239A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_905E35B129E7BA89(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_905E35B129E7BA89_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_75174CC1DC3AB58D(::System::UInt32 a1, ::RPG::GameCore::EntityType a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_75174CC1DC3AB58D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_AC7B4877BB0536F4(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_AC7B4877BB0536F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Void Method_1_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_8B2D6636BADD098E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_8B2D6636BADD098E_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_BCDCE74455CC103E()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_BCDCE74455CC103E_OFFSET))(this);
	}

	::System::Boolean get_CheckPropInteractMustNotInDanger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this);
	}

	::System::Void set_CheckPropInteractMustNotInDanger(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this, value);
	}

	::System::Boolean get_OnlyTriggerByFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_OnlyTriggerByFakeAvatar(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this, value);
	}

	::System::Boolean get_IgnoreFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_GET_IGNOREFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_IgnoreFakeAvatar(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_SET_IGNOREFAKEAVATAR_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Method_1_FB7E543833A43955()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_FB7E543833A43955_OFFSET))(this);
	}

	::RPG::Client::BaseMonoTriggerRegion* get__TriggerRegion()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_GET__TRIGGERREGION_OFFSET))(this);
	}

	::System::Void set__TriggerRegion(::RPG::Client::BaseMonoTriggerRegion* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_SET__TRIGGERREGION_OFFSET))(this, value);
	}

	::System::Boolean get_ForceTriggerInDangerStatus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_GET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this);
	}

	::System::Void set_ForceTriggerInDangerStatus(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_SET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this, value);
	}

	::System::Boolean get_IsNamedTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_GET_ISNAMEDTRIGGER_OFFSET))(this);
	}

	::System::Void set_IsNamedTrigger(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_SET_ISNAMEDTRIGGER_OFFSET))(this, value);
	}

	::System::Boolean Method_1_95F7E440EAAEA376(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_95F7E440EAAEA376_OFFSET))(this, a1);
	}

	::RPG::GameCore::TriggerValidGuestConfig* Method_1_DA82497E4594D753()
	{
		return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_DA82497E4594D753_OFFSET))(this);
	}

	::System::Boolean Method_1_F434B801DC06B848(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_F434B801DC06B848_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68337B7DC92048C0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_68337B7DC92048C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_C0FF32B4D2022F8C_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_B333A26033F1313F(::RPG::GameCore::TriggerValidGuestConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TriggerValidGuestConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_59305B446B42427E_METHOD_1_B333A26033F1313F_OFFSET))(a1, a2);
	}
};
