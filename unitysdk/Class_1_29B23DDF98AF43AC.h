#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_0_16E4307DCC419505_616;
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

#define CLASS_1_29B23DDF98AF43AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12E9C5E0)
#define CLASS_1_29B23DDF98AF43AC_DOONENTER_OFFSET UNITYSDK_OFFSET(0x12E9E050)
#define CLASS_1_29B23DDF98AF43AC_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x12E9E0E0)
#define CLASS_1_29B23DDF98AF43AC_GET_ALLOWSEACHENTITYINPARENT_OFFSET UNITYSDK_OFFSET(0x12E9F440)
#define CLASS_1_29B23DDF98AF43AC_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x12E9F460)
#define CLASS_1_29B23DDF98AF43AC_GET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x12E9F4F0)
#define CLASS_1_29B23DDF98AF43AC_GET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x12E9F4A0)
#define CLASS_1_29B23DDF98AF43AC_GET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x12E9F510)
#define CLASS_1_29B23DDF98AF43AC_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x12E9F480)
#define CLASS_1_29B23DDF98AF43AC_GET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x12E9F4D0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x12E9E570)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_2B3EFEA1C6FD0AA4_OFFSET UNITYSDK_OFFSET(0x12E9D5B0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x12E9F320)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_3993B6742487D922_OFFSET UNITYSDK_OFFSET(0x12E9CBF0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x12E9E4A0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_51BB44919003ED8C_OFFSET UNITYSDK_OFFSET(0x12E9F530)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_57BCB69D9004DAE8_OFFSET UNITYSDK_OFFSET(0x12E9F6A0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x12E9F060)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_6643AA032101239A_OFFSET UNITYSDK_OFFSET(0x12E9D300)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_68337B7DC92048C0_OFFSET UNITYSDK_OFFSET(0x12E9F9A0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x12E9D470)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_6FE6E0587E8D1F5C_OFFSET UNITYSDK_OFFSET(0x12E9C7B0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_72161A3E817450BF_OFFSET UNITYSDK_OFFSET(0x12E9DDC0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_75174CC1DC3AB58D_OFFSET UNITYSDK_OFFSET(0x12E9C590)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_78A316BA9A84C308_OFFSET UNITYSDK_OFFSET(0x12E9FB90)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_795059A0162B7B8D_OFFSET UNITYSDK_OFFSET(0x12E9F130)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_7BEDCFDAB5E3F6D3_OFFSET UNITYSDK_OFFSET(0x12E9E9C0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_7CA5AE26E20D7156_OFFSET UNITYSDK_OFFSET(0x12E9ECD0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_86D9DADC38211793_OFFSET UNITYSDK_OFFSET(0x12E9E1D0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_8B6F11557B375B74_1_OFFSET UNITYSDK_OFFSET(0x12E9CC90)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0x12E9CC30)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_8C688CD7781A7FA0_OFFSET UNITYSDK_OFFSET(0x12E9CCF0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x12E9C6E0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_8E21B63E1A7B6A25_OFFSET UNITYSDK_OFFSET(0x12E9C980)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_9816C66A3786670A_OFFSET UNITYSDK_OFFSET(0x12E9F0D0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x12E9D1D0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_A75B4838E132C727_OFFSET UNITYSDK_OFFSET(0x12E9CA80)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_BCDCE74455CC103E_OFFSET UNITYSDK_OFFSET(0x12E9E9B0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_BF36CA78EE3B5455_1_OFFSET UNITYSDK_OFFSET(0x12E9EFB0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_BF36CA78EE3B5455_OFFSET UNITYSDK_OFFSET(0x12E9EF20)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_C0FF32B4D2022F8C_OFFSET UNITYSDK_OFFSET(0x12E9D260)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_C7C8E8CA7C1063A4_OFFSET UNITYSDK_OFFSET(0x12E9F3B0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_D9136EC4788E091A_OFFSET UNITYSDK_OFFSET(0x12E9CBA0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_E8302C157AFBAD54_OFFSET UNITYSDK_OFFSET(0x12E9E170)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_E9A65FEB3BB1873E_OFFSET UNITYSDK_OFFSET(0x12E9E750)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_F0F60CD7DCCE42EE_OFFSET UNITYSDK_OFFSET(0x12E9D6E0)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_F434B801DC06B848_OFFSET UNITYSDK_OFFSET(0x12E9F880)
#define CLASS_1_29B23DDF98AF43AC_METHOD_1_FB7E543833A43955_OFFSET UNITYSDK_OFFSET(0x12E9F4C0)
#define CLASS_1_29B23DDF98AF43AC_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x12E9DBD0)
#define CLASS_1_29B23DDF98AF43AC_SET_ALLOWSEACHENTITYINPARENT_OFFSET UNITYSDK_OFFSET(0x12E9F450)
#define CLASS_1_29B23DDF98AF43AC_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET UNITYSDK_OFFSET(0x12E9F470)
#define CLASS_1_29B23DDF98AF43AC_SET_FORCETRIGGERINDANGERSTATUS_OFFSET UNITYSDK_OFFSET(0x12E9F500)
#define CLASS_1_29B23DDF98AF43AC_SET_IGNOREFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x12E9F4B0)
#define CLASS_1_29B23DDF98AF43AC_SET_ISNAMEDTRIGGER_OFFSET UNITYSDK_OFFSET(0x12E9F520)
#define CLASS_1_29B23DDF98AF43AC_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0x12E9F490)
#define CLASS_1_29B23DDF98AF43AC_SET__TRIGGERREGION_OFFSET UNITYSDK_OFFSET(0x12E9F4E0)
#define CLASS_1_29B23DDF98AF43AC_TICK_OFFSET UNITYSDK_OFFSET(0x12E9DC50)
#define CLASS_1_29B23DDF98AF43AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12E9FE30)
#define CLASS_1_29B23DDF98AF43AC__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9C400)

inline static constexpr unsigned int Class_1_29B23DDF98AF43AC_TypeDefinitionIndex = 57654;

class Class_1_29B23DDF98AF43AC : public ::System::Object
{
public:
	static ::RPG::GameCore::TriggerValidGuestConfig** StaticGet_GJIGIDEOEIP()
	{
		return (::RPG::GameCore::TriggerValidGuestConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_29B23DDF98AF43AC_TypeDefinitionIndex)->GetStaticField(0x5D110);
	}
	::Il2CppArray<::System::UInt32>* AEDAOGFLEDF; // 0x10
	::RPG::GameCore::GameEntity* NMPAPJAHAAD; // 0x18
	::RPG::GameCore::PredicateConfig* FCEDCJIGLBB; // 0x20
	::UnityEngine::Coroutine* MOIKONHOCJO; // 0x28
	::System::Action_3<::Class_1_29B23DDF98AF43AC*, ::RPG::GameCore::GameEntity*, ::System::Boolean>* DPOLBPPPNGO; // 0x30
	::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x38
	::RPG::GameCore::PredicateConfig* NJGDADPNBAA; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* LLCFBCFLKGO; // 0x48
	::RPG::Client::BaseMonoTriggerRegion* __TriggerRegion_k__BackingField; // 0x50
	::System::Predicate_1<::RPG::GameCore::GameEntity*>* KGGCMFMFBLH; // 0x58
	::RPG::GameCore::ColliderTriggerComponent* ODBBIEJFGAO; // 0x60
	::RPG::GameCore::GameEntity* HDIONGLKHCI; // 0x68
	::System::Action_2<::Class_0_16E4307DCC419505_616*, ::System::Boolean>* ANIBJDMJNGK; // 0x70
	::System::Collections::Generic::List_1<::System::UInt32>* HCMPJJHDCKI; // 0x78
	::RPG::GameCore::TriggerValidGuestConfig* KDHGNHDCCCL; // 0x80
	::System::UInt32 OMOGDIKAFJJ; // 0x88
	::System::Boolean IEFNFMKDFPE; // 0x8C
	::System::Boolean _ForceTriggerInDangerStatus_k__BackingField; // 0x8D
	::System::Boolean LPNLCDIBJOG; // 0x8E
	::System::Boolean BBMBJCGMOJL; // 0x8F
	::System::Boolean _AllowSeachEntityInParent_k__BackingField; // 0x90
	::System::Boolean ILEKKOCDECK; // 0x91
	::System::Boolean _IgnoreFakeAvatar_k__BackingField; // 0x92
	::System::Boolean JPPLHJHEFDA; // 0x93
	::System::Boolean _IsNamedTrigger_k__BackingField; // 0x94
	::System::Boolean _CheckPropInteractMustNotInDanger_k__BackingField; // 0x95
	::System::Boolean _OnlyTriggerByFakeAvatar_k__BackingField; // 0x96

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8E21B63E1A7B6A25(::Il2CppArray<::RPG::GameCore::EntityType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityType>*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_8E21B63E1A7B6A25_OFFSET))(this, a1);
	}

	::System::Void Method_1_A75B4838E132C727(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_A75B4838E132C727_OFFSET))(this, a1);
	}

	::System::Void Method_1_D9136EC4788E091A(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_D9136EC4788E091A_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_3993B6742487D922()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_3993B6742487D922_OFFSET))(this);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B6F11557B375B74_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_8B6F11557B375B74_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C688CD7781A7FA0(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_8C688CD7781A7FA0_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_1_F0F60CD7DCCE42EE(::UnityEngine::Transform* a1, ::Class_1_0E94DD4A47F0F315* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::Class_1_0E94DD4A47F0F315*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_F0F60CD7DCCE42EE_OFFSET))(this, a1, a2);
	}

	::System::Void OnTriggeredLogicFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_72161A3E817450BF(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_72161A3E817450BF_OFFSET))(this, a1);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E8302C157AFBAD54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_E8302C157AFBAD54_OFFSET))(this);
	}

	::System::Boolean Method_1_86D9DADC38211793(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_86D9DADC38211793_OFFSET))(this, a1);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_8CA05BCD86E125DF_OFFSET))(this);
	}

	::System::Void Method_1_6FE6E0587E8D1F5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_6FE6E0587E8D1F5C_OFFSET))(this);
	}

	::System::Void Method_1_E9A65FEB3BB1873E(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_E9A65FEB3BB1873E_OFFSET))(this, a1);
	}

	::System::Void Method_1_7BEDCFDAB5E3F6D3(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_7BEDCFDAB5E3F6D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF36CA78EE3B5455(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_BF36CA78EE3B5455_OFFSET))(this, a1);
	}

	::System::Void Method_1_BF36CA78EE3B5455_1(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_BF36CA78EE3B5455_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7CA5AE26E20D7156(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_7CA5AE26E20D7156_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Void Method_1_6643AA032101239A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_6643AA032101239A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2B3EFEA1C6FD0AA4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_2B3EFEA1C6FD0AA4_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_75174CC1DC3AB58D(::System::UInt32 a1, ::RPG::GameCore::EntityType a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EntityType))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_75174CC1DC3AB58D_OFFSET))(a1, a2);
	}

	::System::Void Method_1_9816C66A3786670A(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_9816C66A3786670A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Void Method_1_795059A0162B7B8D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_795059A0162B7B8D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_1_C7C8E8CA7C1063A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_C7C8E8CA7C1063A4_OFFSET))(this, a1);
	}

	::RPG::Client::BaseMonoTriggerRegion* Method_1_BCDCE74455CC103E()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_BCDCE74455CC103E_OFFSET))(this);
	}

	::System::Boolean get_AllowSeachEntityInParent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET_ALLOWSEACHENTITYINPARENT_OFFSET))(this);
	}

	::System::Void set_AllowSeachEntityInParent(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET_ALLOWSEACHENTITYINPARENT_OFFSET))(this, a1);
	}

	::System::Boolean get_CheckPropInteractMustNotInDanger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this);
	}

	::System::Void set_CheckPropInteractMustNotInDanger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET_CHECKPROPINTERACTMUSTNOTINDANGER_OFFSET))(this, a1);
	}

	::System::Boolean get_OnlyTriggerByFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_OnlyTriggerByFakeAvatar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET_ONLYTRIGGERBYFAKEAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean get_IgnoreFakeAvatar()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET_IGNOREFAKEAVATAR_OFFSET))(this);
	}

	::System::Void set_IgnoreFakeAvatar(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET_IGNOREFAKEAVATAR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* Method_1_FB7E543833A43955()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_FB7E543833A43955_OFFSET))(this);
	}

	::RPG::Client::BaseMonoTriggerRegion* get__TriggerRegion()
	{
		return ((::RPG::Client::BaseMonoTriggerRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET__TRIGGERREGION_OFFSET))(this);
	}

	::System::Void set__TriggerRegion(::RPG::Client::BaseMonoTriggerRegion* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseMonoTriggerRegion*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET__TRIGGERREGION_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceTriggerInDangerStatus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this);
	}

	::System::Void set_ForceTriggerInDangerStatus(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET_FORCETRIGGERINDANGERSTATUS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsNamedTrigger()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_GET_ISNAMEDTRIGGER_OFFSET))(this);
	}

	::System::Void set_IsNamedTrigger(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_SET_ISNAMEDTRIGGER_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_51BB44919003ED8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_51BB44919003ED8C_OFFSET))(this, a1);
	}

	::RPG::GameCore::TriggerValidGuestConfig* Method_1_57BCB69D9004DAE8()
	{
		return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_57BCB69D9004DAE8_OFFSET))(this);
	}

	::System::Boolean Method_1_F434B801DC06B848(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_F434B801DC06B848_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_68337B7DC92048C0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_68337B7DC92048C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C0FF32B4D2022F8C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_C0FF32B4D2022F8C_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_78A316BA9A84C308(::RPG::GameCore::TriggerValidGuestConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TriggerValidGuestConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_29B23DDF98AF43AC_METHOD_1_78A316BA9A84C308_OFFSET))(a1, a2);
	}
};
