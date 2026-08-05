#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F80BFD5B986D5503_1.h"
#include "unitysdk/MoleMole/MiniGame/MiniGameContext.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_267;
class Class_2_208CC9941471731A_51;
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class RTHandle; }

#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_CREATERT_OFFSET UNITYSDK_OFFSET(0x107FD240)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GETARCADEGAMEID_OFFSET UNITYSDK_OFFSET(0x107FD650)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_ARCADEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x107FCA60)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_MINIGAMERT_OFFSET UNITYSDK_OFFSET(0x107FD220)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ISGAMEENDSTATE_OFFSET UNITYSDK_OFFSET(0x107FCF60)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONCREATE_OFFSET UNITYSDK_OFFSET(0x107FCB20)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x107FCEA0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONENTER_OFFSET UNITYSDK_OFFSET(0x107FCC20)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x107FCD60)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONLOADFINISH_OFFSET UNITYSDK_OFFSET(0x107FCF20)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONMULTIPLAYERINFOBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x107FD6F0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONTITLEVIDEOPLAYSTART_OFFSET UNITYSDK_OFFSET(0x107FCEE0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTCONNECTSUCCESS_OFFSET UNITYSDK_OFFSET(0x107FCFF0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTDISCONNECT_OFFSET UNITYSDK_OFFSET(0x107FD030)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTRECONNECTSUCCESS_OFFSET UNITYSDK_OFFSET(0x107FD0B0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTSTARTRECONNECT_OFFSET UNITYSDK_OFFSET(0x107FD070)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONWILLEXIT_OFFSET UNITYSDK_OFFSET(0x107FCD20)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_PAUSE_OFFSET UNITYSDK_OFFSET(0x107FD6A0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERLOADFINISHCALLBACK_OFFSET UNITYSDK_OFFSET(0x107FCFA0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERSWITCHARCADEUISHOWSTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x107FD0F0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_RELEASERT_OFFSET UNITYSDK_OFFSET(0x107FD420)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETARCADEGAMEID_OFFSET UNITYSDK_OFFSET(0x107FD5D0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEFINISHACTION_OFFSET UNITYSDK_OFFSET(0x107FCAD0)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEOVERACTION_OFFSET UNITYSDK_OFFSET(0x107FCA80)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_ARCADEGAMECONFIG_OFFSET UNITYSDK_OFFSET(0x107FCA70)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_MINIGAMERT_OFFSET UNITYSDK_OFFSET(0x107FD230)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SWITCHARCADEUISHOWSTAGE_OFFSET UNITYSDK_OFFSET(0x107FD140)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x107FDA90)
#define MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x107FDA80)

namespace MoleMole::MiniGame
{
	inline static constexpr unsigned int MiniGameWorldBase_TypeDefinitionIndex = 74069;

	class MiniGameWorldBase : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_267*>** StaticGet_logicDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_267*>**)Il2CppClass::FromTypeDefinitionIndex(MiniGameWorldBase_TypeDefinitionIndex)->GetStaticField(0x4E9E0);
		}
		::System::Action* gameFinishAction; // 0x10
		::Class_0_16E4307DCC419505_267* gameLogic; // 0x18
		::System::Action_3<::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>* _onSwitchArcadeUIShowStageCB; // 0x20
		::UnityEngine::RenderTexture* _MiniGameRT_k__BackingField; // 0x28
		::System::Action_1<::System::Boolean>* gameOverAction; // 0x30
		::MoleMole::MiniGame::MiniGameContext gameContext; // 0x38
		::Class_2_208CC9941471731A_51* _ArcadeGameConfig_k__BackingField; // 0x78
		::System::Boolean oriPause; // 0x80
		::System::Boolean pauseStatus; // 0x81
		::System::UInt32 arcadeGameID; // 0x84

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE__CCTOR_OFFSET))();
		}

		::Class_2_208CC9941471731A_51* get_ArcadeGameConfig()
		{
			return ((::Class_2_208CC9941471731A_51*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_ARCADEGAMECONFIG_OFFSET))(this);
		}

		::System::Void set_ArcadeGameConfig(::Class_2_208CC9941471731A_51* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_51*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_ARCADEGAMECONFIG_OFFSET))(this, value);
		}

		::System::Void SetGameOverAction(::System::Action_1<::System::Boolean>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEOVERACTION_OFFSET))(this, action);
		}

		::System::Void SetGameFinishAction(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETGAMEFINISHACTION_OFFSET))(this, action);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONCREATE_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONENTER_OFFSET))(this);
		}

		::System::Void OnWillExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONWILLEXIT_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONEXIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTitleVideoPlayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONTITLEVIDEOPLAYSTART_OFFSET))(this);
		}

		::System::Void OnLoadFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONLOADFINISH_OFFSET))(this);
		}

		::System::Boolean IsGameEndState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ISGAMEENDSTATE_OFFSET))(this);
		}

		::System::Void RegisterLoadFinishCallback(::System::Action* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERLOADFINISHCALLBACK_OFFSET))(this, cb);
		}

		::System::Void OnUFightConnectSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTCONNECTSUCCESS_OFFSET))(this);
		}

		::System::Void OnUFightDisconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTDISCONNECT_OFFSET))(this);
		}

		::System::Void OnUFightStartReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTSTARTRECONNECT_OFFSET))(this);
		}

		::System::Void OnUFightReconnectSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONUFIGHTRECONNECTSUCCESS_OFFSET))(this);
		}

		::System::Void RegisterSwitchArcadeUIShowStageCallback(::System::Action_3<::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_REGISTERSWITCHARCADEUISHOWSTAGECALLBACK_OFFSET))(this, callback);
		}

		::System::Void SwitchArcadeUIShowStage(::System::Boolean isShowUI, ::System::Action_1<::System::Boolean>* blackScreenCB, ::System::Action_1<::System::Boolean>* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SWITCHARCADEUISHOWSTAGE_OFFSET))(this, isShowUI, blackScreenCB, finishCB);
		}

		::UnityEngine::RenderTexture* get_MiniGameRT()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GET_MINIGAMERT_OFFSET))(this);
		}

		::System::Void set_MiniGameRT(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SET_MINIGAMERT_OFFSET))(this, value);
		}

		::UnityEngine::NAPRenderPipeline0::RTHandle* CreateRT(::System::Boolean useAlpha, ::System::Int32 width, ::System::Int32 height, ::System::String* name)
		{
			return ((::UnityEngine::NAPRenderPipeline0::RTHandle*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_CREATERT_OFFSET))(this, useAlpha, width, height, name);
		}

		::System::Void ReleaseRT()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_RELEASERT_OFFSET))(this);
		}

		::System::Void SetArcadeGameID(::System::UInt32 arcadeGameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_SETARCADEGAMEID_OFFSET))(this, arcadeGameID);
		}

		::System::UInt32 GetArcadeGameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_GETARCADEGAMEID_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean pauseState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_PAUSE_OFFSET))(this, pauseState);
		}

		::System::Void OnMultiPlayerInfoBtnClicked(::Enum_3_F80BFD5B986D5503_1 gameType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_F80BFD5B986D5503_1))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_MINIGAMEWORLDBASE_ONMULTIPLAYERINFOBTNCLICKED_OFFSET))(this, gameType);
		}
	};
}
