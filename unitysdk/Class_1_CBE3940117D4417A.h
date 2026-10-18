#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_547;
class Class_0_16E4307DCC419505_706;
class Class_1_0E94DD4A47F0F315;
class Class_1_5ABFA23960A770CB;
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

#define CLASS_1_CBE3940117D4417A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13321A20)
#define CLASS_1_CBE3940117D4417A_DOONENTER_OFFSET UNITYSDK_OFFSET(0x133236F0)
#define CLASS_1_CBE3940117D4417A_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x13323780)
#define CLASS_1_CBE3940117D4417A_GET_ALLOWSEACHENTITYINPARENT_OFFSET UNITYSDK_OFFSET(0x13324AA0)
#define CLASS_1_CBE3940117D4417A_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x13324AE0)
#define CLASS_1_CBE3940117D4417A_GET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x13324B70)
#define CLASS_1_CBE3940117D4417A_GET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13324B20)
#define CLASS_1_CBE3940117D4417A_GET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x13324B90)
#define CLASS_1_CBE3940117D4417A_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13324B00)
#define CLASS_1_CBE3940117D4417A_GET_TARGETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x13324AC0)
#define CLASS_1_CBE3940117D4417A_GET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x13324B50)
#define CLASS_1_CBE3940117D4417A_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x13323C10)
#define CLASS_1_CBE3940117D4417A_METHOD_1_01C504FCECDF1A71_OFFSET UNITYSDK_OFFSET(0x13324B40)
#define CLASS_1_CBE3940117D4417A_METHOD_1_18B261EEED99E5C6_OFFSET UNITYSDK_OFFSET(0x13322760)
#define CLASS_1_CBE3940117D4417A_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x13324980)
#define CLASS_1_CBE3940117D4417A_METHOD_1_3993B6742487D922_OFFSET UNITYSDK_OFFSET(0x13321F90)
#define CLASS_1_CBE3940117D4417A_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x13323B40)
#define CLASS_1_CBE3940117D4417A_METHOD_1_51BB44919003ED8C_OFFSET UNITYSDK_OFFSET(0x13324BB0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_57BCB69D9004DAE8_OFFSET UNITYSDK_OFFSET(0x13324D20)
#define CLASS_1_CBE3940117D4417A_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x13324390)
#define CLASS_1_CBE3940117D4417A_METHOD_1_68337B7DC92048C0_OFFSET UNITYSDK_OFFSET(0x13325020)
#define CLASS_1_CBE3940117D4417A_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x13321B60)
#define CLASS_1_CBE3940117D4417A_METHOD_1_71C78A74F0957B12_OFFSET UNITYSDK_OFFSET(0x13322AA0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_72161A3E817450BF_OFFSET UNITYSDK_OFFSET(0x13323460)
#define CLASS_1_CBE3940117D4417A_METHOD_1_75174CC1DC3AB58D_OFFSET UNITYSDK_OFFSET(0x133219D0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_78A316BA9A84C308_OFFSET UNITYSDK_OFFSET(0x13325210)
#define CLASS_1_CBE3940117D4417A_METHOD_1_791E2E44FCCE0018_1_OFFSET UNITYSDK_OFFSET(0x13324670)
#define CLASS_1_CBE3940117D4417A_METHOD_1_791E2E44FCCE0018_OFFSET UNITYSDK_OFFSET(0x13324410)
#define CLASS_1_CBE3940117D4417A_METHOD_1_795059A0162B7B8D_OFFSET UNITYSDK_OFFSET(0x13324790)
#define CLASS_1_CBE3940117D4417A_METHOD_1_86D9DADC38211793_OFFSET UNITYSDK_OFFSET(0x13323870)
#define CLASS_1_CBE3940117D4417A_METHOD_1_8B6F11557B375B74_1_OFFSET UNITYSDK_OFFSET(0x13322030)
#define CLASS_1_CBE3940117D4417A_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0x13321FD0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x13321A90)
#define CLASS_1_CBE3940117D4417A_METHOD_1_8E21B63E1A7B6A25_OFFSET UNITYSDK_OFFSET(0x13321D20)
#define CLASS_1_CBE3940117D4417A_METHOD_1_9816C66A3786670A_OFFSET UNITYSDK_OFFSET(0x13324730)
#define CLASS_1_CBE3940117D4417A_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x13322640)
#define CLASS_1_CBE3940117D4417A_METHOD_1_A75B4838E132C727_OFFSET UNITYSDK_OFFSET(0x13321E20)
#define CLASS_1_CBE3940117D4417A_METHOD_1_BCDCE74455CC103E_OFFSET UNITYSDK_OFFSET(0x13324060)
#define CLASS_1_CBE3940117D4417A_METHOD_1_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x133226C0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x13324A10)
#define CLASS_1_CBE3940117D4417A_METHOD_1_D3A81A7BB1CF8274_OFFSET UNITYSDK_OFFSET(0x13322CA0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_D9136EC4788E091A_OFFSET UNITYSDK_OFFSET(0x13321F40)
#define CLASS_1_CBE3940117D4417A_METHOD_1_E52817D5DECB3A42_OFFSET UNITYSDK_OFFSET(0x13324070)
#define CLASS_1_CBE3940117D4417A_METHOD_1_E5483F3236C81FFC_OFFSET UNITYSDK_OFFSET(0x133244C0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_E55A3AEC00D042E7_OFFSET UNITYSDK_OFFSET(0x13322090)
#define CLASS_1_CBE3940117D4417A_METHOD_1_E8302C157AFBAD54_OFFSET UNITYSDK_OFFSET(0x13323810)
#define CLASS_1_CBE3940117D4417A_METHOD_1_E9A65FEB3BB1873E_OFFSET UNITYSDK_OFFSET(0x13323DF0)
#define CLASS_1_CBE3940117D4417A_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x13322950)
#define CLASS_1_CBE3940117D4417A_METHOD_1_F434B801DC06B848_OFFSET UNITYSDK_OFFSET(0x13324F00)
#define CLASS_1_CBE3940117D4417A_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x13323270)
#define CLASS_1_CBE3940117D4417A_SET_ALLOWSEACHENTITYINPARENT_OFFSET UNITYSDK_OFFSET(0x13324AB0)
#define CLASS_1_CBE3940117D4417A_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x13324AF0)
#define CLASS_1_CBE3940117D4417A_SET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x13324B80)
#define CLASS_1_CBE3940117D4417A_SET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13324B30)
#define CLASS_1_CBE3940117D4417A_SET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x13324BA0)
#define CLASS_1_CBE3940117D4417A_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x13324B10)
#define CLASS_1_CBE3940117D4417A_SET_TARGETLAYERMASK_OFFSET UNITYSDK_OFFSET(0x13324AD0)
#define CLASS_1_CBE3940117D4417A_SET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x13324B60)
#define CLASS_1_CBE3940117D4417A_TICK_OFFSET UNITYSDK_OFFSET(0x133232F0)
#define CLASS_1_CBE3940117D4417A__CCTOR_OFFSET UNITYSDK_OFFSET(0x133254B0)
#define CLASS_1_CBE3940117D4417A__CTOR_OFFSET UNITYSDK_OFFSET(0x13321810)

inline static constexpr unsigned int Class_1_CBE3940117D4417A_TypeDefinitionIndex = 57499;

class Class_1_CBE3940117D4417A : public ::System::Object
{
public:
	static ::RPG::GameCore::TriggerValidGuestConfig** StaticGet_GJIGIDEOEIP()
	{
		return (::RPG::GameCore::TriggerValidGuestConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CBE3940117D4417A_TypeDefinitionIndex)->GetStaticField(0x6FDE0);
	}
	::RPG::GameCore::PredicateConfig* NJGDADPNBAA; // 0x10
	::System::Action_3<::Class_1_CBE3940117D4417A*, ::RPG::GameCore::GameEntity*, ::System::Boolean>* DPOLBPPPNGO; // 0x18
	::RPG::GameCore::TriggerValidGuestConfig* KDHGNHDCCCL; // 0x20
	::Il2CppArray<::System::UInt32>* AEDAOGFLEDF; // 0x28
	::RPG::GameCore::GameEntity* NMPAPJAHAAD; // 0x30
	::RPG::GameCore::PredicateConfig* FCEDCJIGLBB; // 0x38
	::System::Action_2<::Class_0_16E4307DCC419505_706*, ::System::Boolean>* ANIBJDMJNGK; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* HCMPJJHDCKI; // 0x48
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x50
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* KGGCMFMFBLH; // 0x58
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5ABFA23960A770CB*>* LLCFBCFLKGO; // 0x60
	::RPG::Client::BaseMonoTriggerRegion* __TriggerRegion_k__BackingField; // 0x68
	::RPG::GameCore::GameEntity* HDIONGLKHCI; // 0x70
	::RPG::GameCore::ColliderTriggerComponent* ODBBIEJFGAO; // 0x78
	::UnityEngine::Coroutine* MOIKONHOCJO; // 0x80
	::System::Boolean _CheckPropInteractMustNotInDanger_k__BackingField; // 0x88
	::System::Boolean _AllowSeachEntityInParent_k__BackingField; // 0x89
	::System::Boolean ILEKKOCDECK; // 0x8A
	::System::Boolean IEFNFMKDFPE; // 0x8B
	::System::Int32 _TargetLayerMask_k__BackingField; // 0x8C
	::System::Boolean JPPLHJHEFDA; // 0x90
	::System::Boolean _IsNamedTrigger_k__BackingField; // 0x91
	::System::Boolean _IgnoreFakeAvatar_k__BackingField; // 0x92
	::System::Boolean _OnlyTriggerByFakeAvatar_k__BackingField; // 0x93
	::System::UInt32 OMOGDIKAFJJ; // 0x94
	::System::Boolean BBMBJCGMOJL; // 0x98
	::System::Boolean _ForceTriggerInDangerStatus_k__BackingField; // 0x99
	::System::Boolean LPNLCDIBJOG; // 0x9A

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E21B63E1A7B6A25(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_8E21B63E1A7B6A25_OFFSET))(this, a1);
	}

	::System::Void Method_1_A75B4838E132C727(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_A75B4838E132C727_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9136EC4788E091A(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_D9136EC4788E091A_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_3993B6742487D922()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_3993B6742487D922_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B6F11557B375B74_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_8B6F11557B375B74_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E55A3AEC00D042E7(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_E55A3AEC00D042E7_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_1_D3A81A7BB1CF8274(::UnityEngine::Transform* a1, ::Class_1_0E94DD4A47F0F315* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_0E94DD4A47F0F315*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_D3A81A7BB1CF8274_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_72161A3E817450BF(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_72161A3E817450BF_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E8302C157AFBAD54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_E8302C157AFBAD54_OFFSET))(this);
	}

	::System::Boolean Method_1_86D9DADC38211793(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_86D9DADC38211793_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_1_E9A65FEB3BB1873E(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_E9A65FEB3BB1873E_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52817D5DECB3A42(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_E52817D5DECB3A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_791E2E44FCCE0018(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_791E2E44FCCE0018_OFFSET))(this, a1);
	}

	::System::Void Method_1_791E2E44FCCE0018_1(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_791E2E44FCCE0018_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E5483F3236C81FFC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_E5483F3236C81FFC_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_18B261EEED99E5C6(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_18B261EEED99E5C6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_71C78A74F0957B12(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_71C78A74F0957B12_OFFSET))(this, a1, a2);
	}

	static ::System::UInt32 Method_1_75174CC1DC3AB58D(::System::UInt32 a1, ::RPG::GameCore::EntityType a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_75174CC1DC3AB58D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9816C66A3786670A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_9816C66A3786670A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_795059A0162B7B8D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_795059A0162B7B8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_BCDCE74455CC103E()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_BCDCE74455CC103E_OFFSET))(this);
	}

	::System::Boolean get_AllowSeachEntityInParent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_ALLOWSEACHENTITYINPARENT_OFFSET))(this);
	}

	::System::Void set_AllowSeachEntityInParent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_ALLOWSEACHENTITYINPARENT_OFFSET))(this, a1);
	}

	::System::Int32 get_TargetLayerMask()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_TARGETLAYERMASK_OFFSET))(this);
	}

	::System::Void set_TargetLayerMask(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_TARGETLAYERMASK_OFFSET))(this, a1);
	}

	::System::Boolean get_CheckPropInteractMustNotInDanger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this);
	}

	::System::Void set_CheckPropInteractMustNotInDanger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this, a1);
	}

	::System::Boolean get_OnlyTriggerByFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_OnlyTriggerByFakeAvatar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_IGNOREFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_IgnoreFakeAvatar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_IGNOREFAKEAVATAR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5ABFA23960A770CB*>* Method_1_01C504FCECDF1A71()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_5ABFA23960A770CB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_01C504FCECDF1A71_OFFSET))(this);
	}

	::RPG::Client::BaseMonoTriggerRegion* get__TriggerRegion()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET__TRIGGERREGION_OFFSET))(this);
	}

	::System::Void set__TriggerRegion(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET__TRIGGERREGION_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceTriggerInDangerStatus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this);
	}

	::System::Void set_ForceTriggerInDangerStatus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsNamedTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_GET_ISNAMEDTRIGGER_OFFSET))(this);
	}

	::System::Void set_IsNamedTrigger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_SET_ISNAMEDTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_51BB44919003ED8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_51BB44919003ED8C_OFFSET))(this, a1);
	}

	::RPG::GameCore::TriggerValidGuestConfig* Method_1_57BCB69D9004DAE8()
	{
		return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_57BCB69D9004DAE8_OFFSET))(this);
	}

	::System::Boolean Method_1_F434B801DC06B848(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_F434B801DC06B848_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68337B7DC92048C0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_68337B7DC92048C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_C0FF32B4D2022F8C_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_78A316BA9A84C308(::RPG::GameCore::TriggerValidGuestConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TriggerValidGuestConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_CBE3940117D4417A_METHOD_1_78A316BA9A84C308_OFFSET))(a1, a2);
	}
};
