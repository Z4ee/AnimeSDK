#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/ModifiableContactPair.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

class Class_1_3002D7CF5FEE9D3A;
class Class_1_98236523318AE319;
class Class_1_E4EF4C3BF95147F3;
class Class_2_CD42631606067E6B;
class CrowdModuleMonoListener;
class MonoEntityPostSimulationUpdateListener;
namespace MoleMole { class MonoEntityIKUpdateListener; }
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }
template <typename T1, typename T2> class Class_1_4BBF2D747CC2DDFA;

#define MOLEMOLE_GAMEENGINE_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x107E1F10)
#define MOLEMOLE_GAMEENGINE_ADD_ONFRAMESTART_OFFSET UNITYSDK_OFFSET(0x107E1970)
#define MOLEMOLE_GAMEENGINE_AFTERLOCALSTORAGELOADED_OFFSET UNITYSDK_OFFSET(0x107E3F70)
#define MOLEMOLE_GAMEENGINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x107E1FA0)
#define MOLEMOLE_GAMEENGINE_BINDEXTRAUPDATEPHASECALLBACK_OFFSET UNITYSDK_OFFSET(0x107E29E0)
#define MOLEMOLE_GAMEENGINE_CLAMPDOUBLE_OFFSET UNITYSDK_OFFSET(0x107E1760)
#define MOLEMOLE_GAMEENGINE_CREATEWHENRESTART_OFFSET UNITYSDK_OFFSET(0x107EAD90)
#define MOLEMOLE_GAMEENGINE_DISPOSEWHENRESTART_OFFSET UNITYSDK_OFFSET(0x107EAFB0)
#define MOLEMOLE_GAMEENGINE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x107E4070)
#define MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION2_OFFSET UNITYSDK_OFFSET(0x107EA310)
#define MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION_OFFSET UNITYSDK_OFFSET(0x107EA090)
#define MOLEMOLE_GAMEENGINE_GETCURGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x107EAA70)
#define MOLEMOLE_GAMEENGINE_GETCURGAMETYPE_OFFSET UNITYSDK_OFFSET(0x107EA9D0)
#define MOLEMOLE_GAMEENGINE_GETLASTGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x107EAAC0)
#define MOLEMOLE_GAMEENGINE_GETLASTGAMETYPE_OFFSET UNITYSDK_OFFSET(0x107EAA20)
#define MOLEMOLE_GAMEENGINE_GETNAPSEED_OFFSET UNITYSDK_OFFSET(0x107E1A70)
#define MOLEMOLE_GAMEENGINE_GET_APPLICATIONTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x107E1680)
#define MOLEMOLE_GAMEENGINE_GET_BUDGETSEC_OFFSET UNITYSDK_OFFSET(0x107E1690)
#define MOLEMOLE_GAMEENGINE_GET_CURGAME_OFFSET UNITYSDK_OFFSET(0x107E18A0)
#define MOLEMOLE_GAMEENGINE_GET_CURRENTRUNSEED_OFFSET UNITYSDK_OFFSET(0x107E1EF0)
#define MOLEMOLE_GAMEENGINE_GET_CURUISCENE_OFFSET UNITYSDK_OFFSET(0x107E18B0)
#define MOLEMOLE_GAMEENGINE_GET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x107E1800)
#define MOLEMOLE_GAMEENGINE_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x107E1910)
#define MOLEMOLE_GAMEENGINE_GET_ISRESTART_OFFSET UNITYSDK_OFFSET(0x107E1890)
#define MOLEMOLE_GAMEENGINE_GET_ISSEEDED_OFFSET UNITYSDK_OFFSET(0x107E1F00)
#define MOLEMOLE_GAMEENGINE_GET_USEFULLTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x107E1660)
#define MOLEMOLE_GAMEENGINE_GET_USETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x107E1640)
#define MOLEMOLE_GAMEENGINE_GOTOLOGINGAME_OFFSET UNITYSDK_OFFSET(0x107EAB10)
#define MOLEMOLE_GAMEENGINE_INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x107E9E90)
#define MOLEMOLE_GAMEENGINE_INITWHENRESTART_OFFSET UNITYSDK_OFFSET(0x107EADE0)
#define MOLEMOLE_GAMEENGINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x107E7710)
#define MOLEMOLE_GAMEENGINE_LAUNCHERGAME_OFFSET UNITYSDK_OFFSET(0x107EA5B0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x107EE7D0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x107EAE30)
#define MOLEMOLE_GAMEENGINE_METHOD_5_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x107EDD10)
#define MOLEMOLE_GAMEENGINE_METHOD_5_0AAA07F08640B711_OFFSET UNITYSDK_OFFSET(0x107EA6E0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x107E8460)
#define MOLEMOLE_GAMEENGINE_METHOD_5_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x107EE070)
#define MOLEMOLE_GAMEENGINE_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x107EDEE0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x107ECAB0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_2ED901FDC3D52029_1_OFFSET UNITYSDK_OFFSET(0x107ED220)
#define MOLEMOLE_GAMEENGINE_METHOD_5_2ED901FDC3D52029_OFFSET UNITYSDK_OFFSET(0x107EBF90)
#define MOLEMOLE_GAMEENGINE_METHOD_5_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0x107EE180)
#define MOLEMOLE_GAMEENGINE_METHOD_5_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x107EFA70)
#define MOLEMOLE_GAMEENGINE_METHOD_5_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x107EB620)
#define MOLEMOLE_GAMEENGINE_METHOD_5_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x107ECA70)
#define MOLEMOLE_GAMEENGINE_METHOD_5_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x107E6FD0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x107ED1A0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x107EB5A0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_763B70E1B527E566_OFFSET UNITYSDK_OFFSET(0x107E2F40)
#define MOLEMOLE_GAMEENGINE_METHOD_5_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x107E3AC0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_7DBE4BF81A0D0238_OFFSET UNITYSDK_OFFSET(0x107E20D0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x107E4940)
#define MOLEMOLE_GAMEENGINE_METHOD_5_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x107EE330)
#define MOLEMOLE_GAMEENGINE_METHOD_5_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x107EBCA0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_99B422901E548512_OFFSET UNITYSDK_OFFSET(0x107E7240)
#define MOLEMOLE_GAMEENGINE_METHOD_5_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x107EB440)
#define MOLEMOLE_GAMEENGINE_METHOD_5_A074CB615A9C54E1_OFFSET UNITYSDK_OFFSET(0x107E31F0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x107E8100)
#define MOLEMOLE_GAMEENGINE_METHOD_5_A7B0EF5061C2B565_OFFSET UNITYSDK_OFFSET(0x107E84D0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x107E2090)
#define MOLEMOLE_GAMEENGINE_METHOD_5_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x107EE5B0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x107EFF60)
#define MOLEMOLE_GAMEENGINE_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x107EE4A0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_DF3BCB639F0C02DF_OFFSET UNITYSDK_OFFSET(0x107ECB40)
#define MOLEMOLE_GAMEENGINE_METHOD_5_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x107E4670)
#define MOLEMOLE_GAMEENGINE_METHOD_5_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x107EB2D0)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x107E9C90)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x107E9800)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x107E94E0)
#define MOLEMOLE_GAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x107E8240)
#define MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENTCCD_OFFSET UNITYSDK_OFFSET(0x107E4EA0)
#define MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENT_OFFSET UNITYSDK_OFFSET(0x107E4BD0)
#define MOLEMOLE_GAMEENGINE_REMOVE_ONFRAMESTART_OFFSET UNITYSDK_OFFSET(0x107E19F0)
#define MOLEMOLE_GAMEENGINE_SETLOADINGSTAGE_OFFSET UNITYSDK_OFFSET(0x107EA970)
#define MOLEMOLE_GAMEENGINE_SETUPCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x107E3B10)
#define MOLEMOLE_GAMEENGINE_SET_BUDGETSEC_OFFSET UNITYSDK_OFFSET(0x107E16A0)
#define MOLEMOLE_GAMEENGINE_SET_CURRENTRUNSEED_OFFSET UNITYSDK_OFFSET(0x107E1E20)
#define MOLEMOLE_GAMEENGINE_SET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x107E1810)
#define MOLEMOLE_GAMEENGINE_SET_USEFULLTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x107E1670)
#define MOLEMOLE_GAMEENGINE_SET_USETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x107E1650)
#define MOLEMOLE_GAMEENGINE_START_OFFSET UNITYSDK_OFFSET(0x107E2D50)
#define MOLEMOLE_GAMEENGINE_TESTANDINFORMFRAMESTART_OFFSET UNITYSDK_OFFSET(0x107E3F00)
#define MOLEMOLE_GAMEENGINE_UNBINDEXTRAUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x107E2BC0)
#define MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENTCCD_OFFSET UNITYSDK_OFFSET(0x107E5060)
#define MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENT_OFFSET UNITYSDK_OFFSET(0x107E4D90)
#define MOLEMOLE_GAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x107E5170)
#define MOLEMOLE_GAMEENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x107EB430)
#define MOLEMOLE_GAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x107EB370)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine_TypeDefinitionIndex = 72834;

	class GameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Action** StaticGet_OnUpdateRawInputPreAction()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x2D5C0);
		}
		static ::MoleMole::GameEngine** StaticGet_instance()
		{
			return (::MoleMole::GameEngine**)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x2D5C8);
		}
		static ::System::Boolean* StaticGet_HalfFrameFixedUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9A70);
		}
		static ::System::Boolean* StaticGet_Field_5_42()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9A71);
		}
		static ::System::Boolean* StaticGet_enableEarlyUpdateDeepProfile()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9A72);
		}
		static ::System::Boolean* StaticGet_QuitApplication()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9A73);
		}
		static ::System::Boolean* StaticGet_Field_5_8()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9A74);
		}
		// static const ::System::Double Field_5_4; // 0x0
		// static const ::System::Double Field_5_11; // 0x0
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean Field_5_7; // 0x19
		::System::Int32 Field_5_6; // 0x1C
		::System::Double Field_5_5; // 0x20
		::UnityEngine::WaitForEndOfFrame* endOfFrame; // 0x28
		::System::Boolean Field_5_13; // 0x30
		::System::UInt32 Field_5_12; // 0x34
		::CrowdModuleMonoListener* Field_5_18; // 0x38
		::MoleMole::MonoEntityIKUpdateListener* Field_5_17; // 0x40
		::MonoEntityPostSimulationUpdateListener* Field_5_16; // 0x48
		::Class_1_98236523318AE319* GameSceneSwitch; // 0x50
		::System::Boolean isDevLevel; // 0x58
		::System::Boolean isSceneDirectlyOpen; // 0x59
		::System::Action_1<::System::Single>* OnBeforeUpdate; // 0x60
		::System::Action_1<::System::Single>* OnAfterUpdate; // 0x68
		::System::Action_1<::System::Boolean>* ApplicationFocus; // 0x70
		::System::Action_1<::System::Single>* OnBeforeLateUpdate; // 0x78
		::System::Action_1<::System::Single>* OnAfterLateUpdate; // 0x80
		::System::Action_1<::System::Single>* OnAfterWaitForFixedUpdate; // 0x88
		::System::Action* Field_5_30; // 0x90
		::System::Int32 Field_5_29; // 0x98
		::System::Int32 Field_5_28; // 0x9C
		::System::Int32 Field_5_35; // 0xA0
		::Class_1_4BBF2D747CC2DDFA<::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*>* Field_5_34; // 0xA8
		::Class_1_4BBF2D747CC2DDFA<::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*>* Field_5_33; // 0xB0
		::UnityEngine::WaitForFixedUpdate* Field_5_32; // 0xB8
		::UnityEngine::Coroutine* Field_5_39; // 0xC0
		::UnityEngine::WaitForEndOfFrame* Field_5_38; // 0xC8
		::UnityEngine::Coroutine* Field_5_37; // 0xD0
		::Unity::Jobs::JobHandle Field_5_36; // 0xD8
		::System::Boolean Field_5_43; // 0xE8
		::System::Type* Field_5_40; // 0xF0
		::System::Type* Field_5_47; // 0xF8
		::Class_2_CD42631606067E6B* Field_5_46; // 0x100
		::Class_1_3002D7CF5FEE9D3A* Field_5_45; // 0x108
		::Class_1_3002D7CF5FEE9D3A* Field_5_44; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE__CCTOR_OFFSET))();
		}

		::System::Boolean get_UseTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_USETIMELIMIT_OFFSET))(this);
		}

		::System::Void set_UseTimeLimit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_USETIMELIMIT_OFFSET))(this, a1);
		}

		::System::Boolean get_UseFullTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_USEFULLTIMELIMIT_OFFSET))(this);
		}

		::System::Void set_UseFullTimeLimit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_USEFULLTIMELIMIT_OFFSET))(this, a1);
		}

		::System::Int32 get_ApplicationTargetFrameRate()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_APPLICATIONTARGETFRAMERATE_OFFSET))(this);
		}

		::System::Double get_BudgetSec()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_BUDGETSEC_OFFSET))(this);
		}

		::System::Void set_BudgetSec(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_BUDGETSEC_OFFSET))(this, a1);
		}

		static ::System::Double ClampDouble(::System::Double a1, ::System::Double a2, ::System::Double a3)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CLAMPDOUBLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean get_HandleInputInEarlyUpdate()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_HANDLEINPUTINEARLYUPDATE_OFFSET))();
		}

		static ::System::Void set_HandleInputInEarlyUpdate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_HANDLEINPUTINEARLYUPDATE_OFFSET))(a1);
		}

		::System::Boolean get_IsRestart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISRESTART_OFFSET))(this);
		}

		::Class_2_CD42631606067E6B* get_CurGame()
		{
			return ((::Class_2_CD42631606067E6B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_CURGAME_OFFSET))(this);
		}

		::Class_1_E4EF4C3BF95147F3* get_CurUIScene()
		{
			return ((::Class_1_E4EF4C3BF95147F3*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_CURUISCENE_OFFSET))(this);
		}

		::System::Boolean get_IsLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISLOADING_OFFSET))(this);
		}

		::System::Void add_OnFrameStart(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ADD_ONFRAMESTART_OFFSET))(this, a1);
		}

		::System::Void remove_OnFrameStart(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_REMOVE_ONFRAMESTART_OFFSET))(this, a1);
		}

		static ::System::Int32 GetNapSeed()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETNAPSEED_OFFSET))();
		}

		::System::Int32 get_CurrentRunSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_CURRENTRUNSEED_OFFSET))(this);
		}

		::System::Void set_CurrentRunSeed(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SET_CURRENTRUNSEED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSeeded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GET_ISSEEDED_OFFSET))(this);
		}

		::System::Void AddDependency(::Unity::Jobs::JobHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ADDDEPENDENCY_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AWAKE_OFFSET))(this);
		}

		::System::Void BindExtraUpdatePhaseCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_BINDEXTRAUPDATEPHASECALLBACK_OFFSET))(this);
		}

		::System::Void UnbindExtraUpdateCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UNBINDEXTRAUPDATECALLBACK_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_START_OFFSET))(this);
		}

		static ::System::Void SetupCurrentCulture()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SETUPCURRENTCULTURE_OFFSET))();
		}

		::System::Void TestAndInformFrameStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_TESTANDINFORMFRAMESTART_OFFSET))(this);
		}

		::System::Void AfterLocalStorageLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_AFTERLOCALSTORAGELOADED_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void RegisterContactModifyEvent(::System::Int32 a1, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterContactModifyEvent(::System::Int32 a1, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void RegisterContactModifyEventCCD(::System::Int32 a1, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_REGISTERCONTACTMODIFYEVENTCCD_OFFSET))(this, a1, a2);
		}

		::System::Void UnregisterContactModifyEventCCD(::System::Int32 a1, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_3<::UnityEngine::PhysicsScene, ::System::Int32, ::UnityEngine::ModifiableContactPair>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UNREGISTERCONTACTMODIFYEVENTCCD_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnApplicationQuit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONAPPLICATIONQUIT_OFFSET))(this);
		}

		::System::Void OnApplicationPause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONAPPLICATIONPAUSE_OFFSET))(this, a1);
		}

		::System::Void OnApplicationFocus(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_ONAPPLICATIONFOCUS_OFFSET))(this, a1);
		}

		::System::Void InitConfigData(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_INITCONFIGDATA_OFFSET))(this, a1);
		}

		static ::System::Void ForceQuitApplication()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION_OFFSET))();
		}

		static ::System::Void ForceQuitApplication2()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION2_OFFSET))();
		}

		::System::Void LauncherGame(::System::Type* a1, ::Class_1_3002D7CF5FEE9D3A* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_LAUNCHERGAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetLoadingStage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_SETLOADINGSTAGE_OFFSET))(this, a1);
		}

		::System::Type* GetCurGameType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETCURGAMETYPE_OFFSET))(this);
		}

		::System::Type* GetLastGameType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETLASTGAMETYPE_OFFSET))(this);
		}

		::Class_1_3002D7CF5FEE9D3A* GetCurGameContext()
		{
			return ((::Class_1_3002D7CF5FEE9D3A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETCURGAMECONTEXT_OFFSET))(this);
		}

		::Class_1_3002D7CF5FEE9D3A* GetLastGameContext()
		{
			return ((::Class_1_3002D7CF5FEE9D3A*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GETLASTGAMECONTEXT_OFFSET))(this);
		}

		::System::Void GoToLoginGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_GOTOLOGINGAME_OFFSET))(this);
		}

		::System::Void CreateWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_CREATEWHENRESTART_OFFSET))(this);
		}

		::System::Void InitWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_INITWHENRESTART_OFFSET))(this);
		}

		::System::Void DisposeWhenRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_DISPOSEWHENRESTART_OFFSET))(this);
		}

		::System::Void Method_5_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_763B70E1B527E566()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_763B70E1B527E566_OFFSET))(this);
		}

		::System::Void Method_5_998E122F46014853()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_998E122F46014853_OFFSET))(this);
		}

		::System::Void Method_5_2ED901FDC3D52029(::UnityEngine::PhysicsScene a1, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair> a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_2ED901FDC3D52029_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_5_5790A55946AA509D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_5790A55946AA509D_OFFSET))();
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_5_460F8AE6EF9687FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_460F8AE6EF9687FD_OFFSET))(this);
		}

		::System::Void Method_5_7DBE4BF81A0D0238(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_7DBE4BF81A0D0238_OFFSET))(this, a1);
		}

		::System::Void Method_5_2ED901FDC3D52029_1(::UnityEngine::PhysicsScene a1, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair> a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_2ED901FDC3D52029_1_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_1_OFFSET))(this);
		}

		::System::Void Method_5_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_5_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_0865E94460F11643_OFFSET))(this);
		}

		static ::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_151E25A63D14DDB0_OFFSET))();
		}

		::System::Void Method_5_10054BB010E03EDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_10054BB010E03EDD_OFFSET))(this);
		}

		::System::Void Method_5_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_C561FF611C07A44C_OFFSET))(this);
		}

		::System::Void Method_5_063ADB01C44981A7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_063ADB01C44981A7_OFFSET))(this, a1);
		}

		::System::Void Method_5_FCB175EE4400634C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_FCB175EE4400634C_OFFSET))(this);
		}

		::System::Void Method_5_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_9765352E01408D38_OFFSET))(this);
		}

		::System::Void Method_5_A074CB615A9C54E1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_A074CB615A9C54E1_OFFSET))(this, a1);
		}

		::System::Void Method_5_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_5_A7B0EF5061C2B565(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_A7B0EF5061C2B565_OFFSET))(this, a1);
		}

		::System::Void Method_5_A5B6063FFC26FC8F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_A5B6063FFC26FC8F_OFFSET))(this);
		}

		::System::Void Method_5_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_5_045F1AAB54606068()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_045F1AAB54606068_OFFSET))(this);
		}

		::System::Void Method_5_99B422901E548512(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_99B422901E548512_OFFSET))(this, a1);
		}

		::System::Void Method_5_0E142E3463F30350()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_0E142E3463F30350_OFFSET))(this);
		}

		::System::Void Method_5_3D2B77EBCAE390AB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_3D2B77EBCAE390AB_OFFSET))(this);
		}

		::System::Void Method_5_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_7A73F165001BC325_OFFSET))(this);
		}

		::Class_2_CD42631606067E6B* Method_5_0AAA07F08640B711(::Class_2_CD42631606067E6B* a1, ::Class_1_3002D7CF5FEE9D3A* a2)
		{
			return ((::Class_2_CD42631606067E6B*(*)(::PVOID, ::Class_2_CD42631606067E6B*, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_0AAA07F08640B711_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_CF8BA38996D09531_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_585F9C6EF5BC90C0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_585F9C6EF5BC90C0_OFFSET))(this, a1);
		}

		::System::Void Method_5_DF3BCB639F0C02DF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_DF3BCB639F0C02DF_OFFSET))(this, a1);
		}

		::System::Void Method_5_3E23A2EE3F65066B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_3E23A2EE3F65066B_OFFSET))(this);
		}
	};
}
