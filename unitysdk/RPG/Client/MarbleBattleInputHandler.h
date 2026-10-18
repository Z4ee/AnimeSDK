#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_FCB9A1A95B2AB574;
namespace RPG::Client { class MarbleBattleInputHandler_MarbleForceLaunchConfig; }
namespace RPG::Client { class MarbleBattleSealData; }
namespace RPG::Client { class MarbleModule; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD56E810)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_BLOCKGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xD56BFA0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CANCELCHARGE_OFFSET UNITYSDK_OFFSET(0xD56BFF0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARFORCELAUNCHCONFIG_OFFSET UNITYSDK_OFFSET(0xD56D660)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARMARBLELAUNCHCALLBACK_OFFSET UNITYSDK_OFFSET(0xD56D9C0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARREMOTEOPERATION_OFFSET UNITYSDK_OFFSET(0xD571430)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_FINDNEARESTALLYENTITYID_OFFSET UNITYSDK_OFFSET(0xD569990)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCANLAUNCHALLYCOUNT_OFFSET UNITYSDK_OFFSET(0xD570280)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCURINPUTINSTANCE_OFFSET UNITYSDK_OFFSET(0xD56DA10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETPROPERALLYENTITYID_OFFSET UNITYSDK_OFFSET(0xD569430)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_CHARGEBARANIM_OFFSET UNITYSDK_OFFSET(0xD56DFF0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_CHARGEBARMAXCIRCLE_OFFSET UNITYSDK_OFFSET(0xD56E0D0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_FIRSTBOUNCECIRCLE_OFFSET UNITYSDK_OFFSET(0xD56E370)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD569850)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_GAMEROOT_OFFSET UNITYSDK_OFFSET(0xD56DBE0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_LASTSELECTEDALLYENTITYID_OFFSET UNITYSDK_OFFSET(0xD56DFD0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_MODULE_OFFSET UNITYSDK_OFFSET(0xD5697C0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_PREDICTIONLINE_OFFSET UNITYSDK_OFFSET(0xD56E180)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_SECONDBOUNCECIRCLE_OFFSET UNITYSDK_OFFSET(0xD56E5C0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_SELECTEDENTITYID_OFFSET UNITYSDK_OFFSET(0xD56DFB0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_LAUNCH_OFFSET UNITYSDK_OFFSET(0xD56BC40)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xD56CA10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD56E910)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD56CAC0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD56D030)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0xD56C950)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD56C0B0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_REGISTERMARBLELAUNCHCALLBACK_OFFSET UNITYSDK_OFFSET(0xD56D970)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SELECTPROPERALLYENTITY_OFFSET UNITYSDK_OFFSET(0xD5704B0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETCHARGECIRCLEMINY_OFFSET UNITYSDK_OFFSET(0xD56DA90)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETFORCELAUNCHCONFIG_OFFSET UNITYSDK_OFFSET(0xD56D450)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETPREDICTIONLINEMINY_OFFSET UNITYSDK_OFFSET(0xD56DB00)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETSEALENTITYPANELMINY_OFFSET UNITYSDK_OFFSET(0xD56DB70)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_LASTSELECTEDALLYENTITYID_OFFSET UNITYSDK_OFFSET(0xD56DFE0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_SELECTEDENTITYID_OFFSET UNITYSDK_OFFSET(0xD56DFC0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SHOWENEMYOPERATION_OFFSET UNITYSDK_OFFSET(0xD5710D0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SHOWREMOTEOPERATION_OFFSET UNITYSDK_OFFSET(0xD571290)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_START_OFFSET UNITYSDK_OFFSET(0xD56EB40)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_TICKCHARGEACTION_OFFSET UNITYSDK_OFFSET(0xD56ABB0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_TICKSELECTACTION_OFFSET UNITYSDK_OFFSET(0xD56A2A0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_UNBLOCKGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0xD56C070)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD56FDB0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__AWAKE_B__80_0_OFFSET UNITYSDK_OFFSET(0xD571A80)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0xD5719E0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CHECKLAUNCHVECTOR_OFFSET UNITYSDK_OFFSET(0xD56DE10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CLEARCHARGEUI_OFFSET UNITYSDK_OFFSET(0xD56C5F0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CLEARFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0xD56C5A0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD5718E0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__DRAGVECTOR2CHARGEVECTOR_OFFSET UNITYSDK_OFFSET(0xD56CE50)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GAMEPADVECTOR2CHARGEVECTOR_OFFSET UNITYSDK_OFFSET(0xD56B100)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETCANLAUNCHALLYCOUNT_B__84_0_OFFSET UNITYSDK_OFFSET(0xD571B00)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETPROPERALLYENTITYID_B__0_1_OFFSET UNITYSDK_OFFSET(0xD571A00)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD56A100)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISALLOWSHOOT_OFFSET UNITYSDK_OFFSET(0xD56D360)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISCANCELAREACONTAINS_OFFSET UNITYSDK_OFFSET(0xD56D0D0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISENTITYALLOWOPERATE_OFFSET UNITYSDK_OFFSET(0xD56C310)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SCREENPOS2WORLDPOS_OFFSET UNITYSDK_OFFSET(0xD56CC50)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SELECTENTITY_OFFSET UNITYSDK_OFFSET(0xD56A670)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0xD570530)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETLINECOLOR_OFFSET UNITYSDK_OFFSET(0xD56D6C0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCANCELAREA_OFFSET UNITYSDK_OFFSET(0xD56B9A0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEBAR_OFFSET UNITYSDK_OFFSET(0xD570610)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEUI_OFFSET UNITYSDK_OFFSET(0xD56B280)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWMAXCHARGEEFFECT_OFFSET UNITYSDK_OFFSET(0xD571040)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWPREDICTIONLINE_OFFSET UNITYSDK_OFFSET(0xD5707A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleInputHandler_TypeDefinitionIndex = 65802;

	class MarbleBattleInputHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::MarbleBattleInputHandler** StaticGet__Instance()
		{
			return (::RPG::Client::MarbleBattleInputHandler**)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleInputHandler_TypeDefinitionIndex)->GetStaticField(0x4D750);
		}
		static ::System::Int32* StaticGet__Main_Color_Prop_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleInputHandler_TypeDefinitionIndex)->GetStaticField(0x11CD0);
		}
		// static const ::System::Int32 _PREDICTION_LINE_POINT_LIMIT = 0x3; // 0x0
		// static const ::System::Single _OPERATION_SYNC_INTERVAL; // 0x0
		::System::Boolean _IsGamePadBlocked; // 0x18
		::System::Single ChargeDeadZone; // 0x1C
		::System::Single ChargeMaxDistance; // 0x20
		::UnityEngine::RectTransform* LeftCancelArea; // 0x28
		::UnityEngine::RectTransform* RightCancelArea; // 0x30
		::UnityEngine::UI::Button* LeftCancelButton; // 0x38
		::UnityEngine::UI::Button* RightCancelButton; // 0x40
		::UnityEngine::Color LineNormalColor; // 0x48
		::UnityEngine::Color LineHintColor; // 0x58
		::System::UInt32 _SelectedEntityID_k__BackingField; // 0x68
		::System::UInt32 _LastSelectedAllyEntityID_k__BackingField; // 0x6C
		::System::Boolean _LaunchMax; // 0x70
		::RPG::MVector2 _FactorVector; // 0x74
		::RPG::Client::MarbleBattleInputHandler_MarbleForceLaunchConfig* _ForceLaunchConfig; // 0x80
		::System::Action* _OnMarbleLaunch; // 0x88
		::UnityEngine::GameObject* ChargeBarUIPrefab; // 0x90
		::System::Int32 _AnimParamProgress; // 0x98
		::System::Int32 _AnimParamIsHeld; // 0x9C
		::UnityEngine::Animator* _ChargeBarAnim; // 0xA0
		::UnityEngine::Transform* _ChargeBarMaxCircle; // 0xA8
		::UnityEngine::GameObject* PredictionLineUIPrefab; // 0xB0
		::UnityEngine::LineRenderer* _PredictionLine; // 0xB8
		::UnityEngine::GameObject* FirstBounceCirclePrefab; // 0xC0
		::UnityEngine::GameObject* _FirstBounceCircle; // 0xC8
		::UnityEngine::UI::Image* _FirstBoundceCircleBG; // 0xD0
		::UnityEngine::GameObject* SecondBounceCirclePrefab; // 0xD8
		::UnityEngine::GameObject* _SecondBounceCircle; // 0xE0
		::UnityEngine::UI::Image* _SecondBoundceCircleBG; // 0xE8
		::UnityEngine::GameObject* SealEntityPanelPrefab; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::GameObject*>* _SealEntityPanels; // 0xF8
		::System::Single _NextSyncTime; // 0x100
		::System::Nullable_1<::System::Single> _ChargeCirleMinY; // 0x104
		::System::Nullable_1<::System::Single> _PredictionLineMinY; // 0x10C
		::System::Nullable_1<::System::Single> _SealEntityPanelMinY; // 0x114
		::RPG::MVector2 _EnemyFactorVector; // 0x11C
		::System::Boolean _ShowingRemoteOperation; // 0x124
		::System::Boolean _UsingHintColor; // 0x125
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x128
		::System::Boolean _AllowShoot; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CCTOR_OFFSET))();
		}

		::System::UInt32 GetProperAllyEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETPROPERALLYENTITYID_OFFSET))(this);
		}

		::System::UInt32 FindNearestAllyEntityID(::System::UInt32 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_FINDNEARESTALLYENTITYID_OFFSET))(this, a1, a2);
		}

		::System::Void TickSelectAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_TICKSELECTACTION_OFFSET))(this);
		}

		::System::Void TickChargeAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_TICKCHARGEACTION_OFFSET))(this);
		}

		::System::Void BlockGamePadInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_BLOCKGAMEPADINPUT_OFFSET))(this);
		}

		::System::Void UnblockGamePadInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_UNBLOCKGAMEPADINPUT_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void CancelCharge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CANCELCHARGE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONENDDRAG_OFFSET))(this, a1);
		}

		::System::Void Launch(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_LAUNCH_OFFSET))(this, a1, a2);
		}

		::System::Void SetForceLaunchConfig(::RPG::MVector2 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETFORCELAUNCHCONFIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearForceLaunchConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARFORCELAUNCHCONFIG_OFFSET))(this);
		}

		::System::Void RegisterMarbleLaunchCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_REGISTERMARBLELAUNCHCALLBACK_OFFSET))(this, a1);
		}

		::System::Void ClearMarbleLaunchCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARMARBLELAUNCHCALLBACK_OFFSET))(this);
		}

		static ::RPG::Client::MarbleBattleInputHandler* GetCurInputInstance()
		{
			return ((::RPG::Client::MarbleBattleInputHandler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCURINPUTINSTANCE_OFFSET))();
		}

		::System::Void SetChargeCircleMinY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETCHARGECIRCLEMINY_OFFSET))(this, a1);
		}

		::System::Void SetPredictionLineMinY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETPREDICTIONLINEMINY_OFFSET))(this, a1);
		}

		::System::Void SetSealEntityPanelMinY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETSEALENTITYPANELMINY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _ScreenPos2WorldPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SCREENPOS2WORLDPOS_OFFSET))(this, a1);
		}

		::System::Boolean _IsEntityAllowOperate(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISENTITYALLOWOPERATE_OFFSET))(this, a1);
		}

		::System::Boolean _IsAllowShoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISALLOWSHOOT_OFFSET))(this);
		}

		::System::Boolean _CheckLaunchVector(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CHECKLAUNCHVECTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsCancelAreaContains(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISCANCELAREACONTAINS_OFFSET))(this, a1);
		}

		::RPG::Client::MarbleModule* get_Module()
		{
			return ((::RPG::Client::MarbleModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_MODULE_OFFSET))(this);
		}

		::Class_2_FCB9A1A95B2AB574* get_GameInstance()
		{
			return ((::Class_2_FCB9A1A95B2AB574*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_GAMEINSTANCE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_GameRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_GAMEROOT_OFFSET))(this);
		}

		::System::UInt32 get_SelectedEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_SELECTEDENTITYID_OFFSET))(this);
		}

		::System::Void set_SelectedEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_SELECTEDENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastSelectedAllyEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_LASTSELECTEDALLYENTITYID_OFFSET))(this);
		}

		::System::Void set_LastSelectedAllyEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_LASTSELECTEDALLYENTITYID_OFFSET))(this, a1);
		}

		::UnityEngine::Animator* get_ChargeBarAnim()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_CHARGEBARANIM_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ChargeBarMaxCircle()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_CHARGEBARMAXCIRCLE_OFFSET))(this);
		}

		::UnityEngine::LineRenderer* get_PredictionLine()
		{
			return ((::UnityEngine::LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_PREDICTIONLINE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_FirstBounceCircle()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_FIRSTBOUNCECIRCLE_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_SecondBounceCircle()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_SECONDBOUNCECIRCLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetCanLaunchAllyCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCANLAUNCHALLYCOUNT_OFFSET))(this);
		}

		::System::Void SelectProperAllyEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SELECTPROPERALLYENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* _GetTransform(::System::UInt32 a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETTRANSFORM_OFFSET))(this, a1);
		}

		::System::Void _SelectEntity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SELECTENTITY_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _DragVector2ChargeVector(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__DRAGVECTOR2CHARGEVECTOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _GamePadVector2ChargeVector(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GAMEPADVECTOR2CHARGEVECTOR_OFFSET))(this, a1);
		}

		::System::Void _ShowChargeUI(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEUI_OFFSET))(this, a1);
		}

		::System::Void ShowEnemyOperation(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SHOWENEMYOPERATION_OFFSET))(this, a1, a2);
		}

		::System::Void ShowRemoteOperation(::System::UInt32 a1, ::RPG::MVector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SHOWREMOTEOPERATION_OFFSET))(this, a1, a2);
		}

		::System::Void ClearRemoteOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARREMOTEOPERATION_OFFSET))(this);
		}

		::System::Void _ShowChargeBar(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEBAR_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowPredictionLine(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWPREDICTIONLINE_OFFSET))(this, a1);
		}

		::System::Void _ShowMaxChargeEffect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWMAXCHARGEEFFECT_OFFSET))(this, a1);
		}

		::System::Void _SetFactorVector(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETFACTORVECTOR_OFFSET))(this, a1);
		}

		::System::Void _ClearFactorVector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CLEARFACTORVECTOR_OFFSET))(this);
		}

		::System::Void _ShowCancelArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCANCELAREA_OFFSET))(this);
		}

		::System::Void _ClearChargeUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CLEARCHARGEUI_OFFSET))(this);
		}

		::System::Void _SetLineColor(::System::Boolean a1, ::UnityEngine::UI::Image* a2, ::UnityEngine::UI::Image* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::UI::Image*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETLINECOLOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _GetProperAllyEntityID_b__0_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETPROPERALLYENTITYID_B__0_1_OFFSET))(this, a1);
		}

		::System::Void _Awake_b__80_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__AWAKE_B__80_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetCanLaunchAllyCount_b__84_0(::RPG::Client::MarbleBattleSealData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETCANLAUNCHALLYCOUNT_B__84_0_OFFSET))(this, a1);
		}
	};
}
