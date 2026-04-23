#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipBallFadeOutType.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/RewardFlyType.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/RewardPlayMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B18A907A8E4C5C9C;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B5D170)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETBOSSRECTPOS_OFFSET UNITYSDK_OFFSET(0x9B709A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETREWARDFLYDEST_OFFSET UNITYSDK_OFFSET(0x9B70A60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INITQUESTREWARDSTARTTRANS_OFFSET UNITYSDK_OFFSET(0x9B70BF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x9B617B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_REGISTEREQUIPEFFECTBALL_OFFSET UNITYSDK_OFFSET(0x9B718C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_RESETEQUIPDISCARDREWARDSTARTPOS_OFFSET UNITYSDK_OFFSET(0x9B70950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETBOSSRECT_OFFSET UNITYSDK_OFFSET(0x9B708A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETEQUIPDISCARDREWARDSTARTPOS_OFFSET UNITYSDK_OFFSET(0x9B708F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETREWARDDEST_OFFSET UNITYSDK_OFFSET(0x9B707D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLYFADEIN_OFFSET UNITYSDK_OFFSET(0x9B725D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLY_OFFSET UNITYSDK_OFFSET(0x9B70C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWCONTENTREWARDS_OFFSET UNITYSDK_OFFSET(0x9B72150)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPDISCARDREWARDFLY_OFFSET UNITYSDK_OFFSET(0x9B5C300)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPEFFECTBALL_OFFSET UNITYSDK_OFFSET(0x9B719A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLYINQUESTTREE_OFFSET UNITYSDK_OFFSET(0x9B71780)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLY_OFFSET UNITYSDK_OFFSET(0x9B71230)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFADEINBYITEMS_OFFSET UNITYSDK_OFFSET(0x9B72660)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFLYBYITEMS_OFFSET UNITYSDK_OFFSET(0x9B72410)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTECHPOINTFLY_OFFSET UNITYSDK_OFFSET(0x9B710F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTICKETFLY_OFFSET UNITYSDK_OFFSET(0x9B71370)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_TRYSHOWREWARDFLYBYITEMID_OFFSET UNITYSDK_OFFSET(0x9B647A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x9B72050)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMENDPOINT_OFFSET UNITYSDK_OFFSET(0x9B71F30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x9B5CD30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__GETCONTENTREWARDSTARTPOSBYTYPE_OFFSET UNITYSDK_OFFSET(0x9B72390)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__INITREWARDCONSTDATA_OFFSET UNITYSDK_OFFSET(0x9B704B0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__ONTAKETASKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9B726C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__REGISTERRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B70420)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWGEMREWARDFLY_OFFSET UNITYSDK_OFFSET(0x9B714A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWNORMALREWARDFLY_OFFSET UNITYSDK_OFFSET(0x9B70D80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__UNREGISTERRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x9B70B60)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveRewardFlyService_TypeDefinitionIndex = 69370;

	class IdleLiveRewardFlyService : public ::System::Object
	{
	public:
		// static const ::System::String* BOX_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* GEM_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* TECH_POINT_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* TICKET_FLY_PREFAB_PATH; // 0x0
		// static const ::System::String* EQUIP_EFFECT_BALL_PREFAB_PATH; // 0x0
		// static const ::System::String* BOX_ADD_PREFAB_PATH; // 0x0
		// static const ::System::String* GEM_ADD_PREFAB_PATH; // 0x0
		// static const ::System::String* TECH_POINT_ADD_PREFAB_PATH; // 0x0
		// static const ::System::String* TICKET_ADD_PREFAB_PATH; // 0x0
		// static const ::System::String* ANIM_NAME_BOX_FLY; // 0x0
		// static const ::System::String* ANIM_NAME_TECH_POINT_FLY; // 0x0
		// static const ::System::String* ANIM_NAME_FADE_IN; // 0x0
		::UnityEngine::RectTransform* _BossRect; // 0x10
		::UnityEngine::RectTransform* _EquipBallRoot; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* _RewardDestinations; // 0x20
		::System::String* _BoxIconPath; // 0x28
		::System::String* _GemIconPath; // 0x30
		::UnityEngine::Transform* _QuestRewardStartTrans; // 0x38
		::System::String* _TechPointIconPath; // 0x40
		::UnityEngine::Canvas* _RootCanvas; // 0x48
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x50
		::UnityEngine::Vector2 _EndPointAreaSize; // 0x58
		::UnityEngine::Vector2 _EndCenterOffsetToStartPosRight; // 0x60
		::UnityEngine::Vector2 _EndCenterOffsetToStartPosLeft; // 0x68
		::UnityEngine::Vector3 _EquipDisCardRewardStartPos; // 0x70
		::System::UInt32 _ItemIdBox; // 0x7C
		::System::UInt32 _ItemIdTechPoint; // 0x80
		::UnityEngine::Vector2 _ControlCenterOffsetToStartPos; // 0x84
		::System::UInt32 _ItemIdGem; // 0x8C
		::System::Boolean _Inited; // 0x90
		::System::UInt32 _ItemIdTicket; // 0x94
		::UnityEngine::Vector2 _ControlAreaSize; // 0x98

		::System::Void _ctor(::System::Boolean listenTakeRewardRsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CTOR_OFFSET))(this, listenTakeRewardRsp);
		}

		::System::Void SetRewardDest(::UnityEngine::Transform* trans, ::RPG::Client::ActivityIdleLive::RewardFlyType type)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ActivityIdleLive::RewardFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETREWARDDEST_OFFSET))(this, trans, type);
		}

		::System::Void SetBossRect(::UnityEngine::RectTransform* rect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETBOSSRECT_OFFSET))(this, rect);
		}

		::System::Void SetEquipDisCardRewardStartPos(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETEQUIPDISCARDREWARDSTARTPOS_OFFSET))(this, pos);
		}

		::System::Void ResetEquipDisCardRewardStartPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_RESETEQUIPDISCARDREWARDSTARTPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBossRectPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETBOSSRECTPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRewardFlyDest(::RPG::Client::ActivityIdleLive::RewardFlyType type)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::ActivityIdleLive::RewardFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETREWARDFLYDEST_OFFSET))(this, type);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void InitQuestRewardStartTrans(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INITQUESTREWARDSTARTTRANS_OFFSET))(this, trans);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ShowBoxFly(::UnityEngine::Vector3 startPos, ::System::UInt32 addNum, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLY_OFFSET))(this, startPos, addNum, mode, canvas);
		}

		::RPG::Client::Promises::IPromise* ShowTechPointFly(::UnityEngine::Vector3 startPos, ::System::UInt32 num, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTECHPOINTFLY_OFFSET))(this, startPos, num, mode, canvas);
		}

		::RPG::Client::Promises::IPromise* ShowGemFly(::UnityEngine::Vector3 startPos, ::System::UInt32 num, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLY_OFFSET))(this, startPos, num, mode, canvas);
		}

		::RPG::Client::Promises::IPromise* ShowTicketFly(::UnityEngine::Vector3 startPos, ::System::UInt32 num, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTICKETFLY_OFFSET))(this, startPos, num, mode, canvas);
		}

		::RPG::Client::Promises::IPromise* ShowGemFlyInQuestTree(::UnityEngine::Vector3 startPos, ::System::UInt32 num, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLYINQUESTTREE_OFFSET))(this, startPos, num, mode, canvas);
		}

		::RPG::Client::Promises::IPromise* ShowEquipDisCardRewardFly(::System::UInt32 num, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPDISCARDREWARDFLY_OFFSET))(this, num, mode, canvas);
		}

		::System::Void RegisterEquipEffectBall(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_REGISTEREQUIPEFFECTBALL_OFFSET))(this, trans);
		}

		::System::Void ShowEquipEffectBall(::System::UInt32 rarity, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector2 startPointAnchorPos, ::RPG::Client::ActivityIdleLive::EquipBallFadeOutType fadeOutType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::RPG::Client::ActivityIdleLive::EquipBallFadeOutType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPEFFECTBALL_OFFSET))(this, rarity, startPos, startPointAnchorPos, fadeOutType);
		}

		::UnityEngine::Vector2 _CalculateRandomEndPoint(::UnityEngine::Vector2 startScreenPoint, ::System::Boolean isLeft)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMENDPOINT_OFFSET))(this, startScreenPoint, isLeft);
		}

		::UnityEngine::Vector2 _CalculateRandomControlPoint(::UnityEngine::Vector2 startScreenPoint, ::System::Boolean isLeft)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMCONTROLPOINT_OFFSET))(this, startScreenPoint, isLeft);
		}

		::RPG::Client::Promises::IPromise* ShowContentRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* items, ::Enum_3_0A3761FE34514D6C_43 contentType, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*, ::Enum_3_0A3761FE34514D6C_43, ::RPG::Client::ActivityIdleLive::RewardPlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWCONTENTREWARDS_OFFSET))(this, items, contentType, mode);
		}

		::RPG::Client::Promises::IPromise* ShowRewardFlyByItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* items, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*, ::RPG::Client::ActivityIdleLive::RewardPlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFLYBYITEMS_OFFSET))(this, items, mode);
		}

		::RPG::Client::Promises::IPromise* TryShowRewardFlyByItemId(::System::UInt32 itemId, ::System::UInt32 num, ::UnityEngine::Vector3 startPos, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::RewardPlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_TRYSHOWREWARDFLYBYITEMID_OFFSET))(this, itemId, num, startPos, mode);
		}

		::RPG::Client::Promises::IPromise* ShowBoxFlyFadeIn(::UnityEngine::Vector3 startPos, ::System::UInt32 addNum, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLYFADEIN_OFFSET))(this, startPos, addNum, canvas);
		}

		::RPG::Client::Promises::IPromise* ShowRewardFadeInByItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* items)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFADEINBYITEMS_OFFSET))(this, items);
		}

		::System::Void _RegisterRspHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__REGISTERRSPHANDLERS_OFFSET))(this);
		}

		::System::Void _InitRewardConstData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__INITREWARDCONSTDATA_OFFSET))(this);
		}

		::System::Void _UnRegisterRspHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__UNREGISTERRSPHANDLERS_OFFSET))(this);
		}

		::System::Void _OnTakeTaskRewardScRsp(::System::UInt16 cmdId, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__ONTAKETASKREWARDSCRSP_OFFSET))(this, cmdId, rspObject);
		}

		::UnityEngine::Vector3 _GetContentRewardStartPosByType(::Enum_3_0A3761FE34514D6C_43 type)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_43))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__GETCONTENTREWARDSTARTPOSBYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::Promises::IPromise* _ShowNormalRewardFly(::System::String* prefabPath, ::System::String* iconPath, ::System::UInt32 num, ::UnityEngine::Vector3 startPos, ::RPG::Client::ActivityIdleLive::RewardFlyType flyType, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::System::String* flyAnimName, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::RewardFlyType, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::System::String*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWNORMALREWARDFLY_OFFSET))(this, prefabPath, iconPath, num, startPos, flyType, mode, flyAnimName, canvas);
		}

		::RPG::Client::Promises::IPromise* _ShowGemRewardFly(::System::String* prefabPath, ::System::UInt32 num, ::UnityEngine::Vector3 startPos, ::RPG::Client::ActivityIdleLive::RewardFlyType flyType, ::RPG::Client::ActivityIdleLive::RewardPlayMode mode, ::UnityEngine::Canvas* canvas)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::RewardFlyType, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWGEMREWARDFLY_OFFSET))(this, prefabPath, num, startPos, flyType, mode, canvas);
		}
	};
}
