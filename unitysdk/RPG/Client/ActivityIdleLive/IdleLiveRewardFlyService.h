#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
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

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A1670A0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETBOSSRECTPOS_OFFSET UNITYSDK_OFFSET(0x1A166EF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETREWARDFLYDEST_OFFSET UNITYSDK_OFFSET(0x1A166FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INITQUESTREWARDSTARTTRANS_OFFSET UNITYSDK_OFFSET(0x1A1671C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INIT_OFFSET UNITYSDK_OFFSET(0x1A167210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_REGISTEREQUIPEFFECTBALL_OFFSET UNITYSDK_OFFSET(0x1A1682F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_RESETEQUIPDISCARDREWARDSTARTPOS_OFFSET UNITYSDK_OFFSET(0x1A166EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETBOSSRECT_OFFSET UNITYSDK_OFFSET(0x1A166DF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETEQUIPDISCARDREWARDSTARTPOS_OFFSET UNITYSDK_OFFSET(0x1A166E40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETREWARDDEST_OFFSET UNITYSDK_OFFSET(0x1A166D40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLYFADEIN_OFFSET UNITYSDK_OFFSET(0x1A169240)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLY_OFFSET UNITYSDK_OFFSET(0x1A1675D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWCONTENTREWARDS_OFFSET UNITYSDK_OFFSET(0x1A168B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPDISCARDREWARDFLY_OFFSET UNITYSDK_OFFSET(0x1A168270)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPEFFECTBALL_OFFSET UNITYSDK_OFFSET(0x1A1683D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLYINQUESTTREE_OFFSET UNITYSDK_OFFSET(0x1A168130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLY_OFFSET UNITYSDK_OFFSET(0x1A167BD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFADEINBYITEMS_OFFSET UNITYSDK_OFFSET(0x1A1692D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFLYBYITEMS_OFFSET UNITYSDK_OFFSET(0x1A169020)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTECHPOINTFLY_OFFSET UNITYSDK_OFFSET(0x1A167A90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTICKETFLY_OFFSET UNITYSDK_OFFSET(0x1A167D10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_TRYSHOWREWARDFLYBYITEMID_OFFSET UNITYSDK_OFFSET(0x1A168E90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1A168AA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A168970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A166790)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__GETCONTENTREWARDSTARTPOSBYTYPE_OFFSET UNITYSDK_OFFSET(0x1A168E10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__INITREWARDCONSTDATA_OFFSET UNITYSDK_OFFSET(0x1A1668F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__ONTAKETASKREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x1A169330)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__REGISTERRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A166830)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWGEMREWARDFLY_OFFSET UNITYSDK_OFFSET(0x1A167E40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWNORMALREWARDFLY_OFFSET UNITYSDK_OFFSET(0x1A167710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__UNREGISTERRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A167100)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveRewardFlyService_TypeDefinitionIndex = 71705;

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
		::UnityEngine::Transform* _QuestRewardStartTrans; // 0x10
		::UnityEngine::RectTransform* _EquipBallRoot; // 0x18
		::UnityEngine::Canvas* _RootCanvas; // 0x20
		::UnityEngine::RectTransform* _BossRect; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* _RewardDestinations; // 0x30
		::System::String* _BoxIconPath; // 0x38
		::System::String* _TechPointIconPath; // 0x40
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x48
		::System::String* _GemIconPath; // 0x50
		::System::Boolean _Inited; // 0x58
		::UnityEngine::Vector3 _EquipDisCardRewardStartPos; // 0x5C
		::UnityEngine::Vector2 _EndPointAreaSize; // 0x68
		::System::UInt32 _ItemIdBox; // 0x70
		::UnityEngine::Vector2 _ControlCenterOffsetToStartPos; // 0x74
		::System::UInt32 _ItemIdTechPoint; // 0x7C
		::System::UInt32 _ItemIdGem; // 0x80
		::UnityEngine::Vector2 _ControlAreaSize; // 0x84
		::UnityEngine::Vector2 _EndCenterOffsetToStartPosLeft; // 0x8C
		::System::UInt32 _ItemIdTicket; // 0x94
		::UnityEngine::Vector2 _EndCenterOffsetToStartPosRight; // 0x98

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetRewardDest(::UnityEngine::Transform* a1, ::RPG::Client::ActivityIdleLive::RewardFlyType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ActivityIdleLive::RewardFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETREWARDDEST_OFFSET))(this, a1, a2);
		}

		::System::Void SetBossRect(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETBOSSRECT_OFFSET))(this, a1);
		}

		::System::Void SetEquipDisCardRewardStartPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SETEQUIPDISCARDREWARDSTARTPOS_OFFSET))(this, a1);
		}

		::System::Void ResetEquipDisCardRewardStartPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_RESETEQUIPDISCARDREWARDSTARTPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetBossRectPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETBOSSRECTPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRewardFlyDest(::RPG::Client::ActivityIdleLive::RewardFlyType a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::ActivityIdleLive::RewardFlyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_GETREWARDFLYDEST_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void InitQuestRewardStartTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INITQUESTREWARDSTARTTRANS_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_INIT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* ShowBoxFly(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::RPG::Client::ActivityIdleLive::RewardPlayMode a3, ::UnityEngine::Canvas* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* ShowTechPointFly(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::RPG::Client::ActivityIdleLive::RewardPlayMode a3, ::UnityEngine::Canvas* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTECHPOINTFLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* ShowGemFly(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::RPG::Client::ActivityIdleLive::RewardPlayMode a3, ::UnityEngine::Canvas* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* ShowTicketFly(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::RPG::Client::ActivityIdleLive::RewardPlayMode a3, ::UnityEngine::Canvas* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWTICKETFLY_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* ShowGemFlyInQuestTree(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::RPG::Client::ActivityIdleLive::RewardPlayMode a3, ::UnityEngine::Canvas* a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWGEMFLYINQUESTTREE_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* ShowEquipDisCardRewardFly(::System::UInt32 a1, ::RPG::Client::ActivityIdleLive::RewardPlayMode a2, ::UnityEngine::Canvas* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPDISCARDREWARDFLY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterEquipEffectBall(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_REGISTEREQUIPEFFECTBALL_OFFSET))(this, a1);
		}

		::System::Void ShowEquipEffectBall(::System::UInt32 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector2 a3, ::RPG::Client::ActivityIdleLive::EquipBallFadeOutType a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector2, ::RPG::Client::ActivityIdleLive::EquipBallFadeOutType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWEQUIPEFFECTBALL_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 _CalculateRandomEndPoint(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMENDPOINT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 _CalculateRandomControlPoint(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__CALCULATERANDOMCONTROLPOINT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* ShowContentRewards(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1, ::Enum_3_0A3761FE34514D6C_45 a2, ::RPG::Client::ActivityIdleLive::RewardPlayMode a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*, ::Enum_3_0A3761FE34514D6C_45, ::RPG::Client::ActivityIdleLive::RewardPlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWCONTENTREWARDS_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* ShowRewardFlyByItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1, ::RPG::Client::ActivityIdleLive::RewardPlayMode a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*, ::RPG::Client::ActivityIdleLive::RewardPlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFLYBYITEMS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* TryShowRewardFlyByItemId(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::ActivityIdleLive::RewardPlayMode a4)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::RewardPlayMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_TRYSHOWREWARDFLYBYITEMID_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::Promises::IPromise* ShowBoxFlyFadeIn(::UnityEngine::Vector3 a1, ::System::UInt32 a2, ::UnityEngine::Canvas* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::UnityEngine::Vector3, ::System::UInt32, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWBOXFLYFADEIN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* ShowRewardFadeInByItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE_SHOWREWARDFADEINBYITEMS_OFFSET))(this, a1);
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

		::System::Void _OnTakeTaskRewardScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__ONTAKETASKREWARDSCRSP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 _GetContentRewardStartPosByType(::Enum_3_0A3761FE34514D6C_45 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_45))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__GETCONTENTREWARDSTARTPOSBYTYPE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ShowNormalRewardFly(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4, ::RPG::Client::ActivityIdleLive::RewardFlyType a5, ::RPG::Client::ActivityIdleLive::RewardPlayMode a6, ::System::String* a7, ::UnityEngine::Canvas* a8)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::RewardFlyType, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::System::String*, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWNORMALREWARDFLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::RPG::Client::Promises::IPromise* _ShowGemRewardFly(::System::String* a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::RPG::Client::ActivityIdleLive::RewardFlyType a4, ::RPG::Client::ActivityIdleLive::RewardPlayMode a5, ::UnityEngine::Canvas* a6)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::String*, ::System::UInt32, ::UnityEngine::Vector3, ::RPG::Client::ActivityIdleLive::RewardFlyType, ::RPG::Client::ActivityIdleLive::RewardPlayMode, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEREWARDFLYSERVICE__SHOWGEMREWARDFLY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
