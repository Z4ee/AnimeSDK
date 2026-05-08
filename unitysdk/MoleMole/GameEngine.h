#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1D0F14FBEE98E5ED;
class Class_1_3002D7CF5FEE9D3A;
class Class_1_E4EF4C3BF95147F3;
class Class_2_CD42631606067E6B;
class CrowdModuleMonoListener;
class MonoEntityPostSimulationUpdateListener;
namespace MoleMole { class MonoEntityIKUpdateListener; }
namespace System { class Action; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class WaitForEndOfFrame; }
namespace UnityEngine { class WaitForFixedUpdate; }

#define MOLEMOLE_GAMEENGINE_ADDDEPENDENCY_OFFSET UNITYSDK_OFFSET(0x149A7970)
#define MOLEMOLE_GAMEENGINE_ADD_ONFRAMESTART_OFFSET UNITYSDK_OFFSET(0x149A73D0)
#define MOLEMOLE_GAMEENGINE_AFTERLOCALSTORAGELOADED_OFFSET UNITYSDK_OFFSET(0x149A8500)
#define MOLEMOLE_GAMEENGINE_AWAKE_OFFSET UNITYSDK_OFFSET(0x149A7A00)
#define MOLEMOLE_GAMEENGINE_BINDEXTRAUPDATEPHASECALLBACK_OFFSET UNITYSDK_OFFSET(0x149A7AF0)
#define MOLEMOLE_GAMEENGINE_CLAMPDOUBLE_OFFSET UNITYSDK_OFFSET(0x149A71C0)
#define MOLEMOLE_GAMEENGINE_CREATEWHENRESTART_OFFSET UNITYSDK_OFFSET(0x149ACFB0)
#define MOLEMOLE_GAMEENGINE_DISPOSEWHENRESTART_OFFSET UNITYSDK_OFFSET(0x149AD050)
#define MOLEMOLE_GAMEENGINE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x149A8600)
#define MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION2_OFFSET UNITYSDK_OFFSET(0x149AC7C0)
#define MOLEMOLE_GAMEENGINE_FORCEQUITAPPLICATION_OFFSET UNITYSDK_OFFSET(0x149AC540)
#define MOLEMOLE_GAMEENGINE_GETCURGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x149ACC90)
#define MOLEMOLE_GAMEENGINE_GETCURGAMETYPE_OFFSET UNITYSDK_OFFSET(0x149ACBF0)
#define MOLEMOLE_GAMEENGINE_GETLASTGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x149ACCE0)
#define MOLEMOLE_GAMEENGINE_GETLASTGAMETYPE_OFFSET UNITYSDK_OFFSET(0x149ACC40)
#define MOLEMOLE_GAMEENGINE_GETNAPSEED_OFFSET UNITYSDK_OFFSET(0x149A74D0)
#define MOLEMOLE_GAMEENGINE_GET_APPLICATIONTARGETFRAMERATE_OFFSET UNITYSDK_OFFSET(0x149A70E0)
#define MOLEMOLE_GAMEENGINE_GET_BUDGETSEC_OFFSET UNITYSDK_OFFSET(0x149A70F0)
#define MOLEMOLE_GAMEENGINE_GET_CURGAME_OFFSET UNITYSDK_OFFSET(0x149A7300)
#define MOLEMOLE_GAMEENGINE_GET_CURRENTRUNSEED_OFFSET UNITYSDK_OFFSET(0x149A7950)
#define MOLEMOLE_GAMEENGINE_GET_CURUISCENE_OFFSET UNITYSDK_OFFSET(0x149A7310)
#define MOLEMOLE_GAMEENGINE_GET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x149A7260)
#define MOLEMOLE_GAMEENGINE_GET_ISLOADING_OFFSET UNITYSDK_OFFSET(0x149A7370)
#define MOLEMOLE_GAMEENGINE_GET_ISRESTART_OFFSET UNITYSDK_OFFSET(0x149A72F0)
#define MOLEMOLE_GAMEENGINE_GET_ISSEEDED_OFFSET UNITYSDK_OFFSET(0x149A7960)
#define MOLEMOLE_GAMEENGINE_GET_USEFULLTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x149A70C0)
#define MOLEMOLE_GAMEENGINE_GET_USETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x149A70A0)
#define MOLEMOLE_GAMEENGINE_GOTOLOGINGAME_OFFSET UNITYSDK_OFFSET(0x149ACD30)
#define MOLEMOLE_GAMEENGINE_INITCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x149AC340)
#define MOLEMOLE_GAMEENGINE_INITWHENRESTART_OFFSET UNITYSDK_OFFSET(0x149AD000)
#define MOLEMOLE_GAMEENGINE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x149AA970)
#define MOLEMOLE_GAMEENGINE_LAUNCHERGAME_OFFSET UNITYSDK_OFFSET(0x149ACA60)
#define MOLEMOLE_GAMEENGINE_METHOD_5_045F1AAB54606068_OFFSET UNITYSDK_OFFSET(0x12F889F0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_063ADB01C44981A7_OFFSET UNITYSDK_OFFSET(0x12F86DE0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x149AD2B0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_0AAA07F08640B711_OFFSET UNITYSDK_OFFSET(0x12F86B50)
#define MOLEMOLE_GAMEENGINE_METHOD_5_0E142E3463F30350_OFFSET UNITYSDK_OFFSET(0x149AB920)
#define MOLEMOLE_GAMEENGINE_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x12F87D90)
#define MOLEMOLE_GAMEENGINE_METHOD_5_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x12F86890)
#define MOLEMOLE_GAMEENGINE_METHOD_5_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x12F85740)
#define MOLEMOLE_GAMEENGINE_METHOD_5_3E23A2EE3F65066B_OFFSET UNITYSDK_OFFSET(0x12F85F40)
#define MOLEMOLE_GAMEENGINE_METHOD_5_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x12F850C0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_1_OFFSET UNITYSDK_OFFSET(0x12F85040)
#define MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x149AD780)
#define MOLEMOLE_GAMEENGINE_METHOD_5_676E831338583C9D_OFFSET UNITYSDK_OFFSET(0x12F86680)
#define MOLEMOLE_GAMEENGINE_METHOD_5_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x149AD800)
#define MOLEMOLE_GAMEENGINE_METHOD_5_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x149A8050)
#define MOLEMOLE_GAMEENGINE_METHOD_5_7DBE4BF81A0D0238_1_OFFSET UNITYSDK_OFFSET(0x12F87E20)
#define MOLEMOLE_GAMEENGINE_METHOD_5_7DBE4BF81A0D0238_OFFSET UNITYSDK_OFFSET(0x12F84890)
#define MOLEMOLE_GAMEENGINE_METHOD_5_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0x149A8A40)
#define MOLEMOLE_GAMEENGINE_METHOD_5_93E6B8A6D29521ED_OFFSET UNITYSDK_OFFSET(0x12F88750)
#define MOLEMOLE_GAMEENGINE_METHOD_5_9765352E01408D38_OFFSET UNITYSDK_OFFSET(0x12F85CD0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x149AD480)
#define MOLEMOLE_GAMEENGINE_METHOD_5_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x12F85E80)
#define MOLEMOLE_GAMEENGINE_METHOD_5_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x12F86430)
#define MOLEMOLE_GAMEENGINE_METHOD_5_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x12F85C90)
#define MOLEMOLE_GAMEENGINE_METHOD_5_C7BF9C1E6A78DCAB_OFFSET UNITYSDK_OFFSET(0x12F858C0)
#define MOLEMOLE_GAMEENGINE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12F85E40)
#define MOLEMOLE_GAMEENGINE_METHOD_5_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x12F86570)
#define MOLEMOLE_GAMEENGINE_METHOD_5_DF3BCB639F0C02DF_OFFSET UNITYSDK_OFFSET(0x12F86F60)
#define MOLEMOLE_GAMEENGINE_METHOD_5_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x12F886B0)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x149AC140)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x149ABCB0)
#define MOLEMOLE_GAMEENGINE_ONAPPLICATIONQUIT_OFFSET UNITYSDK_OFFSET(0x149AB990)
#define MOLEMOLE_GAMEENGINE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x149AB7D0)
#define MOLEMOLE_GAMEENGINE_REMOVE_ONFRAMESTART_OFFSET UNITYSDK_OFFSET(0x149A7450)
#define MOLEMOLE_GAMEENGINE_SETLOADINGSTAGE_OFFSET UNITYSDK_OFFSET(0x149ACB90)
#define MOLEMOLE_GAMEENGINE_SETUPCURRENTCULTURE_OFFSET UNITYSDK_OFFSET(0x149A80A0)
#define MOLEMOLE_GAMEENGINE_SET_BUDGETSEC_OFFSET UNITYSDK_OFFSET(0x149A7100)
#define MOLEMOLE_GAMEENGINE_SET_CURRENTRUNSEED_OFFSET UNITYSDK_OFFSET(0x149A7880)
#define MOLEMOLE_GAMEENGINE_SET_HANDLEINPUTINEARLYUPDATE_OFFSET UNITYSDK_OFFSET(0x149A7270)
#define MOLEMOLE_GAMEENGINE_SET_USEFULLTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x149A70D0)
#define MOLEMOLE_GAMEENGINE_SET_USETIMELIMIT_OFFSET UNITYSDK_OFFSET(0x149A70B0)
#define MOLEMOLE_GAMEENGINE_START_OFFSET UNITYSDK_OFFSET(0x149A7E60)
#define MOLEMOLE_GAMEENGINE_TESTANDINFORMFRAMESTART_OFFSET UNITYSDK_OFFSET(0x149A8490)
#define MOLEMOLE_GAMEENGINE_UNBINDEXTRAUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x149A7CD0)
#define MOLEMOLE_GAMEENGINE_UPDATE_OFFSET UNITYSDK_OFFSET(0x149A8C30)
#define MOLEMOLE_GAMEENGINE__CCTOR_OFFSET UNITYSDK_OFFSET(0x149AD2A0)
#define MOLEMOLE_GAMEENGINE__CTOR_OFFSET UNITYSDK_OFFSET(0x149AD1E0)

namespace MoleMole
{
	inline static constexpr unsigned int GameEngine_TypeDefinitionIndex = 59747;

	class GameEngine : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::MoleMole::GameEngine** StaticGet_instance()
		{
			return (::MoleMole::GameEngine**)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x293D0);
		}
		static ::System::Boolean* StaticGet_QuitApplication()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9410);
		}
		static ::System::Boolean* StaticGet_HalfFrameFixedUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9411);
		}
		static ::System::Boolean* StaticGet_Field_5_7()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameEngine_TypeDefinitionIndex)->GetStaticField(0x9412);
		}
		// static const ::System::Double Field_5_4; // 0x0
		// static const ::System::Double Field_5_5; // 0x0
		::System::Boolean Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x19
		::System::Int32 Field_5_2; // 0x1C
		::System::Double Field_5_3; // 0x20
		::UnityEngine::WaitForEndOfFrame* endOfFrame; // 0x28
		::System::Boolean Field_5_10; // 0x30
		::System::UInt32 Field_5_11; // 0x34
		::CrowdModuleMonoListener* Field_5_13; // 0x38
		::MoleMole::MonoEntityIKUpdateListener* Field_5_14; // 0x40
		::MonoEntityPostSimulationUpdateListener* Field_5_15; // 0x48
		::Class_1_1D0F14FBEE98E5ED* GameSceneSwitch; // 0x50
		::System::Boolean isDevLevel; // 0x58
		::System::Boolean isSceneDirectlyOpen; // 0x59
		::System::Action_1<::System::Single>* OnBeforeUpdate; // 0x60
		::System::Action_1<::System::Single>* OnAfterUpdate; // 0x68
		::System::Action_1<::System::Boolean>* ApplicationFocus; // 0x70
		::System::Action_1<::System::Single>* OnBeforeLateUpdate; // 0x78
		::System::Action_1<::System::Single>* OnAfterLateUpdate; // 0x80
		::System::Action* Field_5_24; // 0x88
		::System::Int32 Field_5_25; // 0x90
		::System::Int32 Field_5_26; // 0x94
		::System::Int32 Field_5_27; // 0x98
		::UnityEngine::WaitForFixedUpdate* Field_5_28; // 0xA0
		::UnityEngine::Coroutine* Field_5_29; // 0xA8
		::UnityEngine::WaitForEndOfFrame* Field_5_30; // 0xB0
		::UnityEngine::Coroutine* Field_5_31; // 0xB8
		::Unity::Jobs::JobHandle Field_5_32; // 0xC0
		::System::Boolean Field_5_33; // 0xD0
		::System::Type* Field_5_34; // 0xD8
		::System::Type* Field_5_35; // 0xE0
		::Class_2_CD42631606067E6B* Field_5_36; // 0xE8
		::Class_1_3002D7CF5FEE9D3A* Field_5_37; // 0xF0
		::Class_1_3002D7CF5FEE9D3A* Field_5_38; // 0xF8

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

		::System::Void Method_5_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_7A73F165001BC325_OFFSET))(this);
		}

		::System::Void Method_5_0865E94460F11643()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_0865E94460F11643_OFFSET))(this);
		}

		::System::Void Method_5_0E142E3463F30350()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_0E142E3463F30350_OFFSET))(this);
		}

		::System::Void Method_5_998E122F46014853()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_998E122F46014853_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_5_8327FEEFBF3EC917()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_8327FEEFBF3EC917_OFFSET))(this);
		}

		::System::Void Method_5_705FFC79B57F4953(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_705FFC79B57F4953_OFFSET))(this, a1);
		}

		::System::Void Method_5_7DBE4BF81A0D0238(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_7DBE4BF81A0D0238_OFFSET))(this, a1);
		}

		::System::Void Method_5_460F8AE6EF9687FD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_460F8AE6EF9687FD_OFFSET))(this);
		}

		::System::Void Method_5_3CF43707BF2E9BBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_3CF43707BF2E9BBA_OFFSET))(this);
		}

		::System::Void Method_5_C7BF9C1E6A78DCAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_C7BF9C1E6A78DCAB_OFFSET))(this);
		}

		::System::Void Method_5_C561FF611C07A44C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_C561FF611C07A44C_OFFSET))(this);
		}

		::System::Void Method_5_9765352E01408D38()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_9765352E01408D38_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_A1781348F0A89177_OFFSET))(this);
		}

		::System::Void Method_5_3E23A2EE3F65066B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_3E23A2EE3F65066B_OFFSET))(this);
		}

		::System::Void Method_5_A5B6063FFC26FC8F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_A5B6063FFC26FC8F_OFFSET))(this);
		}

		::System::Void Method_5_676E831338583C9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_676E831338583C9D_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_5_627C7524E98F4AC5_1()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_627C7524E98F4AC5_1_OFFSET))(this);
		}

		::System::Void Method_5_367B9590522079D1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_367B9590522079D1_OFFSET))(this);
		}

		::Class_2_CD42631606067E6B* Method_5_0AAA07F08640B711(::Class_2_CD42631606067E6B* a1, ::Class_1_3002D7CF5FEE9D3A* a2)
		{
			return ((::Class_2_CD42631606067E6B*(*)(::PVOID, ::Class_2_CD42631606067E6B*, ::Class_1_3002D7CF5FEE9D3A*))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_0AAA07F08640B711_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_063ADB01C44981A7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_063ADB01C44981A7_OFFSET))(this, a1);
		}

		::System::Void Method_5_DF3BCB639F0C02DF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_DF3BCB639F0C02DF_OFFSET))(this, a1);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_5_7DBE4BF81A0D0238_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_7DBE4BF81A0D0238_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_FCB175EE4400634C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_FCB175EE4400634C_OFFSET))(this);
		}

		::System::Void Method_5_93E6B8A6D29521ED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_93E6B8A6D29521ED_OFFSET))(this);
		}

		::System::Void Method_5_045F1AAB54606068()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_045F1AAB54606068_OFFSET))(this);
		}

		::System::Boolean Method_5_CF8BA38996D09531()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEENGINE_METHOD_5_CF8BA38996D09531_OFFSET))(this);
		}
	};
}
