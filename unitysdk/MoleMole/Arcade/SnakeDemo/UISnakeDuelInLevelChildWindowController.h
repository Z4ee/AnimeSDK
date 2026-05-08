#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_45F17E7011968B0C.h"
#include "unitysdk/Enum_3_B4D6240DD85F617A.h"
#include "unitysdk/Enum_3_D6975E78EC694A05.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_06AF9B854C9B5A46;
class Class_1_163D707FB4753028;
class Class_1_C504EE57A5080FE1;
class Class_2_1663C87C07AC42DA;
class Class_2_1A39E1B51756BF41;
class Class_2_79F6D62CE30E3F8E_186;
class Class_2_9CE3D9AFC0601365_1;
class Class_2_A2F3E9148C4D7095;
class Class_2_DD0812B7B232D3F6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole::Arcade::SnakeDemo { class SnakeScoreFillBarParam; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CALENEMYFACETYPE_OFFSET UNITYSDK_OFFSET(0x1BCE8CF0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CALFACETYPE_OFFSET UNITYSDK_OFFSET(0x1BCE8D50)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CALTIPSPOS_OFFSET UNITYSDK_OFFSET(0x1BCE99B0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CONVERTTIME_OFFSET UNITYSDK_OFFSET(0x1BCE94E0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CREATESCORETIP_OFFSET UNITYSDK_OFFSET(0x1BCEA180)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ENDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCE8EA0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ENDREDCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCE95C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_GETIMAGE_OFFSET UNITYSDK_OFFSET(0x1BCE8DD0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1BCE4240)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_INITADDSCORE_OFFSET UNITYSDK_OFFSET(0x1BCEA900)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_INITREDUCESCORE_OFFSET UNITYSDK_OFFSET(0x1BCEAA40)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_LOADFUNC_OFFSET UNITYSDK_OFFSET(0x1BCE4A30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_LOAD_OFFSET UNITYSDK_OFFSET(0x1BCE5560)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONADDSCORE_OFFSET UNITYSDK_OFFSET(0x1BCE9FF0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONALLPLAYERREADY_OFFSET UNITYSDK_OFFSET(0x1BCE4AB0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONCREATEITEM_OFFSET UNITYSDK_OFFSET(0x1BCEA670)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1BCE4E60)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONDESTROYITEM_OFFSET UNITYSDK_OFFSET(0x1BCEA540)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONINITLOGIC_OFFSET UNITYSDK_OFFSET(0x1BCE55E0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONKILLNUM_OFFSET UNITYSDK_OFFSET(0x1BCE9830)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONPLAYERINPUTTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1BCE4640)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONSNAKEDEADBOMB_OFFSET UNITYSDK_OFFSET(0x1BCEA7F0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONSNAKEEATSOMETHING_OFFSET UNITYSDK_OFFSET(0x1BCEA320)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONSNAKEHITBACK_OFFSET UNITYSDK_OFFSET(0x1BCEA410)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1BCE4F20)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1BCE4250)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1BCE4DE0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_PLAYSCORETIPS_OFFSET UNITYSDK_OFFSET(0x1BCE9AC0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHFACEANIM_OFFSET UNITYSDK_OFFSET(0x1BCE83B0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHFILLBAR_OFFSET UNITYSDK_OFFSET(0x1BCE7B10)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x1BCE7550)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHSTARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCE7AA0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHTIMER_OFFSET UNITYSDK_OFFSET(0x1BCE66D0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_SHOWGAMEOVERTIP_OFFSET UNITYSDK_OFFSET(0x1BCE6B30)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_STARTCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1BCE9570)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_UPDATEADDSCORE_OFFSET UNITYSDK_OFFSET(0x1BCEAB80)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_UPDATEREDUCESCORE_OFFSET UNITYSDK_OFFSET(0x1BCEB6D0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1BCE71D0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCEC370)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCEC170)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__ONINITLOGIC_B__54_0_OFFSET UNITYSDK_OFFSET(0x1BCEC680)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__ONINITLOGIC_B__54_3_OFFSET UNITYSDK_OFFSET(0x1BCEC8D0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__ONPLAYERINPUTTIMEOUT_B__45_0_OFFSET UNITYSDK_OFFSET(0x1BCEC470)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1BCECA10)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1BCECAA0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1BCECAB0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1BCECAC0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex = 85454;

	class UISnakeDuelInLevelChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Int32* StaticGet_TeamARatio()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F40);
		}
		static ::System::Int32* StaticGet_RightOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F44);
		}
		static ::System::Int32* StaticGet_LeftOverrideColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F48);
		}
		static ::System::Int32* StaticGet_LeftBurst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F4C);
		}
		static ::System::Int32* StaticGet_RightDamageLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F50);
		}
		static ::System::Int32* StaticGet_LeftDamageLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F54);
		}
		static ::UnityEngine::Color* StaticGet_InitOverrideColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F58);
		}
		static ::System::Int32* StaticGet_RightDamageColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F68);
		}
		static ::UnityEngine::Color* StaticGet_TargetOverrideColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F6C);
		}
		static ::System::Int32* StaticGet_LeftDamageColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F7C);
		}
		static ::System::Int32* StaticGet_RightBurst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UISnakeDuelInLevelChildWindowController_TypeDefinitionIndex)->GetStaticField(0x11F80);
		}
		// static const ::System::UInt32 TEAM1 = 0x1; // 0x0
		// static const ::System::UInt32 TEAM2 = 0x2; // 0x0
		// static const ::System::String* _scoreTipAnim; // 0x0
		// static const ::System::String* _scoreTipAnim2; // 0x0
		// static const ::System::String* _scoreTipAnim3; // 0x0
		// static const ::System::String* SnakeCountdownTimer; // 0x0
		::Class_2_79F6D62CE30E3F8E_186* _view; // 0x310
		::Class_2_A2F3E9148C4D7095* _gameLogic; // 0x318
		::System::Boolean _isSingle; // 0x320
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* _loadSprite; // 0x328
		::UnityEngine::Transform* _scoreRoot; // 0x330
		::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* _scoreQueue; // 0x338
		::System::String* _numRedAnim; // 0x340
		::System::Int32 _endBgCountDown; // 0x348
		::System::Int32 _endRedCountDown; // 0x34C
		::Class_2_9CE3D9AFC0601365_1* _configTemplateManager; // 0x350
		::System::UInt64 _startBgCountDown; // 0x358
		::System::Single _startBgCountDownTimer; // 0x360
		::System::Int32 _curStartCountDown; // 0x364
		::System::Boolean _isRealStart; // 0x368
		::System::Boolean _isGameOver; // 0x369
		::System::Single _reviveTime; // 0x36C
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* reviveDict; // 0x370
		::Class_2_DD0812B7B232D3F6* _arcadeModel; // 0x378
		::Class_1_C504EE57A5080FE1* _snakeFaceFrame; // 0x380
		::Enum_3_D6975E78EC694A05 hostTeamType; // 0x388
		::Class_1_163D707FB4753028* _mapEffectFrameAnim; // 0x390
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* itemAnimsStore; // 0x398
		::Class_1_06AF9B854C9B5A46* _snakeDeadBombMapAnim; // 0x3A0
		::Class_2_1663C87C07AC42DA* modelHelper; // 0x3A8
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* _coroutineHandles; // 0x3B0
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x3B8
		::System::Boolean _endRedCountDownSound; // 0x3C0
		::System::Boolean _endBgCountDownSound; // 0x3C1
		::System::Int32 countdown1; // 0x3C4
		::System::Int32 countdown2; // 0x3C8
		::MoleMole::Arcade::SnakeDemo::SnakeScoreFillBarParam* _scoreFillBarParam; // 0x3D0
		::System::Single _curRatio; // 0x3D8
		::System::Single _normalChangeTime; // 0x3DC
		::System::Single _bigBlinkTime; // 0x3E0
		::System::Single _blinkSpeed; // 0x3E4
		::System::Single _bigChangeWitheTime; // 0x3E8
		::System::Single lerpTime; // 0x3EC
		::System::Single lerpTimer; // 0x3F0
		::System::Single _whiteSpace; // 0x3F4
		::System::Boolean _needChangeScore; // 0x3F8
		::System::Single _targetRatio; // 0x3FC
		::System::Single _curDiff; // 0x400
		::System::Boolean _isBigChange; // 0x404
		::System::Boolean _isFirstChange; // 0x405
		::System::Single _bigChangeRatio; // 0x408
		::System::Single _tempCurRatio; // 0x40C
		::System::Single _tempWithe; // 0x410
		::System::Boolean _isScoreAdd; // 0x414
		::System::Single _isScoreFightingTimer; // 0x418
		::UnityEngine::Color _overrideColor; // 0x41C
		::System::Boolean playSnakeDeathEffect; // 0x42C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnPlayerInputTimeOut(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONPLAYERINPUTTIMEOUT_OFFSET))(this, arg);
		}

		::UnityEngine::Texture2D* loadFunc(::System::String* url)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_LOADFUNC_OFFSET))(this, url);
		}

		::System::Void OnAllPlayerReady(::System::Int32 playerCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONALLPLAYERREADY_OFFSET))(this, playerCount);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::Texture2D* Load(::System::String* path)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_LOAD_OFFSET))(this, path);
		}

		::System::Void OnInitLogic(::Class_2_A2F3E9148C4D7095* snakeGameLogic)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A2F3E9148C4D7095*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONINITLOGIC_OFFSET))(this, snakeGameLogic);
		}

		::System::Void ShowGameOverTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_SHOWGAMEOVERTIP_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::Enum_3_D6975E78EC694A05 CalEnemyFaceType(::Enum_3_D6975E78EC694A05 hostTeamType)
		{
			return ((::Enum_3_D6975E78EC694A05(*)(::PVOID, ::Enum_3_D6975E78EC694A05))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CALENEMYFACETYPE_OFFSET))(this, hostTeamType);
		}

		::System::Void RefreshFaceAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHFACEANIM_OFFSET))(this);
		}

		::Class_2_1A39E1B51756BF41* GetImage(::Enum_3_45F17E7011968B0C type)
		{
			return ((::Class_2_1A39E1B51756BF41*(*)(::PVOID, ::Enum_3_45F17E7011968B0C))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_GETIMAGE_OFFSET))(this, type);
		}

		::System::Void RefreshScore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHSCORE_OFFSET))(this);
		}

		::System::Void RefreshStartCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHSTARTCOUNTDOWN_OFFSET))(this);
		}

		::System::Void RefreshTimer(::System::UInt64 delayStartTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHTIMER_OFFSET))(this, delayStartTime);
		}

		::System::Int32 ConvertTime(::System::UInt64 leftTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CONVERTTIME_OFFSET))(this, leftTime);
		}

		::System::Void StartCountDown(::System::Int32 remainSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_STARTCOUNTDOWN_OFFSET))(this, remainSeconds);
		}

		::System::Void EndCountDown(::System::Int32 remainSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ENDCOUNTDOWN_OFFSET))(this, remainSeconds);
		}

		::System::Void EndRedCountDown(::System::Int32 remainSeconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ENDREDCOUNTDOWN_OFFSET))(this, remainSeconds);
		}

		::System::Void OnKillNum(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONKILLNUM_OFFSET))(this, args);
		}

		::System::Void OnAddScore(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONADDSCORE_OFFSET))(this, args);
		}

		static ::UnityEngine::Vector3 CalTipsPos(::System::Single posx, ::System::Single posy, ::System::Boolean hitBack)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CALTIPSPOS_OFFSET))(posx, posy, hitBack);
		}

		::System::Void PlayScoreTips(::System::Int32 value, ::System::String* anim, ::UnityEngine::Vector3 pos, ::Enum_3_B4D6240DD85F617A uiSpriteNumSymbol)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::UnityEngine::Vector3, ::Enum_3_B4D6240DD85F617A))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_PLAYSCORETIPS_OFFSET))(this, value, anim, pos, uiSpriteNumSymbol);
		}

		::UnityEngine::GameObject* CreateScoreTip()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CREATESCORETIP_OFFSET))(this);
		}

		::System::Void OnSnakeEatSomething(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONSNAKEEATSOMETHING_OFFSET))(this, args);
		}

		::System::Void OnSnakeHitBack(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONSNAKEHITBACK_OFFSET))(this, args);
		}

		::System::Void OnDestroyItem(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONDESTROYITEM_OFFSET))(this, args);
		}

		::System::Void OnCreateItem(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONCREATEITEM_OFFSET))(this, args);
		}

		::System::Void OnSnakeDeadBomb(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_ONSNAKEDEADBOMB_OFFSET))(this, args);
		}

		::System::Void RefreshFillBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_REFRESHFILLBAR_OFFSET))(this);
		}

		::Enum_3_D6975E78EC694A05 CalFaceType()
		{
			return ((::Enum_3_D6975E78EC694A05(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_CALFACETYPE_OFFSET))(this);
		}

		::System::Void InitAddScore(::System::Boolean isBigChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_INITADDSCORE_OFFSET))(this, isBigChange);
		}

		::System::Void UpdateAddScore(::System::Single timer, ::System::Boolean isBigChange, ::System::Single lerpTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_UPDATEADDSCORE_OFFSET))(this, timer, isBigChange, lerpTime);
		}

		::System::Void InitReduceScore(::System::Boolean isBigChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_INITREDUCESCORE_OFFSET))(this, isBigChange);
		}

		::System::Void UpdateReduceScore(::System::Single timer, ::System::Boolean isBigChange, ::System::Single lerpTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER_UPDATEREDUCESCORE_OFFSET))(this, timer, isBigChange, lerpTime);
		}

		::System::Void _OnPlayerInputTimeOut_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__ONPLAYERINPUTTIMEOUT_B__45_0_OFFSET))(this);
		}

		::System::Void _OnInitLogic_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__ONINITLOGIC_B__54_0_OFFSET))(this);
		}

		::System::Void _OnInitLogic_b__54_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER__ONINITLOGIC_B__54_3_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEDUELINLEVELCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
