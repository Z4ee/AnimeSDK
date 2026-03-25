#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
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

#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x9B15270)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_BLOCKGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0x9B12F90)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CANCELCHARGE_OFFSET UNITYSDK_OFFSET(0x9B12FE0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARENEMYOPERATION_OFFSET UNITYSDK_OFFSET(0x9B17700)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARFORCELAUNCHCONFIG_OFFSET UNITYSDK_OFFSET(0x9B14380)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARMARBLELAUNCHCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B14690)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_FINDNEARESTALLYENTITYID_OFFSET UNITYSDK_OFFSET(0x9B10B90)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCANLAUNCHALLYCOUNT_OFFSET UNITYSDK_OFFSET(0x9B16920)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCURINPUTINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B146E0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETPROPERALLYENTITYID_OFFSET UNITYSDK_OFFSET(0x9B10820)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_CHARGEBARANIM_OFFSET UNITYSDK_OFFSET(0x9B14A90)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_CHARGEBARMAXCIRCLE_OFFSET UNITYSDK_OFFSET(0x9B14B70)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_FIRSTBOUNCECIRCLE_OFFSET UNITYSDK_OFFSET(0x9B14E10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x9B10AF0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_GAMEROOT_OFFSET UNITYSDK_OFFSET(0x9B14760)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_LASTSELECTEDALLYENTITYID_OFFSET UNITYSDK_OFFSET(0x9B14A70)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_MODULE_OFFSET UNITYSDK_OFFSET(0x9B10A90)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_PREDICTIONLINE_OFFSET UNITYSDK_OFFSET(0x9B14C20)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_SECONDBOUNCECIRCLE_OFFSET UNITYSDK_OFFSET(0x9B15040)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_SELECTEDENTITYID_OFFSET UNITYSDK_OFFSET(0x9B14A50)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_LAUNCH_OFFSET UNITYSDK_OFFSET(0x9B12C60)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x9B137F0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9B15330)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDRAG_OFFSET UNITYSDK_OFFSET(0x9B138A0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x9B13E10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x9B13730)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0x9B130A0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_REGISTERMARBLELAUNCHCALLBACK_OFFSET UNITYSDK_OFFSET(0x9B14640)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SELECTPROPERALLYENTITY_OFFSET UNITYSDK_OFFSET(0x9B16A60)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETFORCELAUNCHCONFIG_OFFSET UNITYSDK_OFFSET(0x9B14230)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_LASTSELECTEDALLYENTITYID_OFFSET UNITYSDK_OFFSET(0x9B14A80)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_SELECTEDENTITYID_OFFSET UNITYSDK_OFFSET(0x9B14A60)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SHOWENEMYOPERATION_OFFSET UNITYSDK_OFFSET(0x9B17540)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_START_OFFSET UNITYSDK_OFFSET(0x9B155C0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_TICKCHARGEACTION_OFFSET UNITYSDK_OFFSET(0x9B11C80)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_TICKSELECTACTION_OFFSET UNITYSDK_OFFSET(0x9B11400)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_UNBLOCKGAMEPADINPUT_OFFSET UNITYSDK_OFFSET(0x9B13060)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9B163B0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__AWAKE_B__77_0_OFFSET UNITYSDK_OFFSET(0x9B17BD0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B17B10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CHECKLAUNCHVECTOR_OFFSET UNITYSDK_OFFSET(0x9B148B0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CLEARCHARGEUI_OFFSET UNITYSDK_OFFSET(0x9B13400)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CLEARFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0x9B133B0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9B17A10)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__DRAGVECTOR2CHARGEVECTOR_OFFSET UNITYSDK_OFFSET(0x9B13C30)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GAMEPADVECTOR2CHARGEVECTOR_OFFSET UNITYSDK_OFFSET(0x9B121D0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETCANLAUNCHALLYCOUNT_B__81_0_OFFSET UNITYSDK_OFFSET(0x9B17C50)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETPROPERALLYENTITYID_B__0_1_OFFSET UNITYSDK_OFFSET(0x9B17B50)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETTRANSFORM_OFFSET UNITYSDK_OFFSET(0x9B11280)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISALLOWSHOOT_OFFSET UNITYSDK_OFFSET(0x9B14140)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISCANCELAREACONTAINS_OFFSET UNITYSDK_OFFSET(0x9B13EB0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISENTITYALLOWOPERATE_OFFSET UNITYSDK_OFFSET(0x9B13250)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SCREENPOS2WORLDPOS_OFFSET UNITYSDK_OFFSET(0x9B13A30)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SELECTENTITY_OFFSET UNITYSDK_OFFSET(0x9B118F0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETFACTORVECTOR_OFFSET UNITYSDK_OFFSET(0x9B16AE0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETLINECOLOR_OFFSET UNITYSDK_OFFSET(0x9B143E0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCANCELAREA_OFFSET UNITYSDK_OFFSET(0x9B12A00)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEBAR_OFFSET UNITYSDK_OFFSET(0x9B16BC0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEUI_OFFSET UNITYSDK_OFFSET(0x9B12350)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWMAXCHARGEEFFECT_OFFSET UNITYSDK_OFFSET(0x9B174B0)
#define RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWPREDICTIONLINE_OFFSET UNITYSDK_OFFSET(0x9B16D50)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleBattleInputHandler_TypeDefinitionIndex = 53439;

	class MarbleBattleInputHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::MarbleBattleInputHandler** StaticGet__Instance()
		{
			return (::RPG::Client::MarbleBattleInputHandler**)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleInputHandler_TypeDefinitionIndex)->GetStaticField(0x2D1C0);
		}
		static ::System::Int32* StaticGet__Main_Color_Prop_ID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MarbleBattleInputHandler_TypeDefinitionIndex)->GetStaticField(0xF050);
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
		::RPG::MVector2 _EnemyFactorVector; // 0x104
		::System::Boolean _UsingHintColor; // 0x10C
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x110
		::System::Boolean _AllowShoot; // 0x118

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

		::System::UInt32 FindNearestAllyEntityID(::System::UInt32 startEntityID, ::UnityEngine::Vector3 direction)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_FINDNEARESTALLYENTITYID_OFFSET))(this, startEntityID, direction);
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

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERDOWN_OFFSET))(this, eventData);
		}

		::System::Void CancelCharge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CANCELCHARGE_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONPOINTERCLICK_OFFSET))(this, eventData);
		}

		::System::Void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONBEGINDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONDRAG_OFFSET))(this, eventData);
		}

		::System::Void OnEndDrag(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_ONENDDRAG_OFFSET))(this, eventData);
		}

		::System::Void Launch(::System::UInt32 entityID, ::RPG::MVector2 factorVector)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_LAUNCH_OFFSET))(this, entityID, factorVector);
		}

		::System::Void SetForceLaunchConfig(::RPG::MVector2 mVector, ::System::UInt32 sealTeamIndex, ::System::Single angleTolerance)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SETFORCELAUNCHCONFIG_OFFSET))(this, mVector, sealTeamIndex, angleTolerance);
		}

		::System::Void ClearForceLaunchConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARFORCELAUNCHCONFIG_OFFSET))(this);
		}

		::System::Void RegisterMarbleLaunchCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_REGISTERMARBLELAUNCHCALLBACK_OFFSET))(this, callback);
		}

		::System::Void ClearMarbleLaunchCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARMARBLELAUNCHCALLBACK_OFFSET))(this);
		}

		static ::RPG::Client::MarbleBattleInputHandler* GetCurInputInstance()
		{
			return ((::RPG::Client::MarbleBattleInputHandler*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GETCURINPUTINSTANCE_OFFSET))();
		}

		::UnityEngine::Vector2 _ScreenPos2WorldPos(::UnityEngine::Vector2 screenPos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SCREENPOS2WORLDPOS_OFFSET))(this, screenPos);
		}

		::System::Boolean _IsEntityAllowOperate(::System::UInt32 entityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISENTITYALLOWOPERATE_OFFSET))(this, entityID);
		}

		::System::Boolean _IsAllowShoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISALLOWSHOOT_OFFSET))(this);
		}

		::System::Boolean _CheckLaunchVector(::UnityEngine::Vector2 vector, ::System::Single magnitude)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__CHECKLAUNCHVECTOR_OFFSET))(this, vector, magnitude);
		}

		::System::Boolean _IsCancelAreaContains(::UnityEngine::Vector2 endPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__ISCANCELAREACONTAINS_OFFSET))(this, endPos);
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

		::System::Void set_SelectedEntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_SELECTEDENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_LastSelectedAllyEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_GET_LASTSELECTEDALLYENTITYID_OFFSET))(this);
		}

		::System::Void set_LastSelectedAllyEntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SET_LASTSELECTEDALLYENTITYID_OFFSET))(this, value);
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

		::UnityEngine::Transform* _GetTransform(::System::UInt32 entityID)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETTRANSFORM_OFFSET))(this, entityID);
		}

		::System::Void _SelectEntity(::System::UInt32 entityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SELECTENTITY_OFFSET))(this, entityID);
		}

		::UnityEngine::Vector2 _DragVector2ChargeVector(::UnityEngine::Vector2 dragVector)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__DRAGVECTOR2CHARGEVECTOR_OFFSET))(this, dragVector);
		}

		::UnityEngine::Vector2 _GamePadVector2ChargeVector(::UnityEngine::Vector2 gamePadVector)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GAMEPADVECTOR2CHARGEVECTOR_OFFSET))(this, gamePadVector);
		}

		::System::Void _ShowChargeUI(::UnityEngine::Vector2 chargeVector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEUI_OFFSET))(this, chargeVector);
		}

		::System::Void ShowEnemyOperation(::System::UInt32 entityID, ::RPG::MVector2 factorVector)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::MVector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_SHOWENEMYOPERATION_OFFSET))(this, entityID, factorVector);
		}

		::System::Void ClearEnemyOperation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER_CLEARENEMYOPERATION_OFFSET))(this);
		}

		::System::Void _ShowChargeBar(::UnityEngine::Vector3 worldDirection, ::System::Single factor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWCHARGEBAR_OFFSET))(this, worldDirection, factor);
		}

		::System::Void _ShowPredictionLine(::UnityEngine::Vector3 localDirection)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWPREDICTIONLINE_OFFSET))(this, localDirection);
		}

		::System::Void _ShowMaxChargeEffect(::System::Boolean isMaxCharge)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SHOWMAXCHARGEEFFECT_OFFSET))(this, isMaxCharge);
		}

		::System::Void _SetFactorVector(::UnityEngine::Vector2 chargeVector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETFACTORVECTOR_OFFSET))(this, chargeVector);
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

		::System::Void _SetLineColor(::System::Boolean useHintColor, ::UnityEngine::UI::Image* firstCircle, ::UnityEngine::UI::Image* secondCircle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::UI::Image*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__SETLINECOLOR_OFFSET))(this, useHintColor, firstCircle, secondCircle);
		}

		::System::Boolean _GetProperAllyEntityID_b__0_1(::System::UInt32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETPROPERALLYENTITYID_B__0_1_OFFSET))(this, x);
		}

		::System::Void _Awake_b__77_0(::System::Object* x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__AWAKE_B__77_0_OFFSET))(this, x);
		}

		::System::Int32 _GetCanLaunchAllyCount_b__81_0(::RPG::Client::MarbleBattleSealData* seal)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MarbleBattleSealData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLEBATTLEINPUTHANDLER__GETCANLAUNCHALLYCOUNT_B__81_0_OFFSET))(this, seal);
		}
	};
}
