#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_333;
class Class_1_14FA7A3912B06196;
class Class_1_95E1BEF84A79D9EB;
namespace RPG { template <typename T> class PoolQueue_1; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDEVENTEFFECT_OFFSET UNITYSDK_OFFSET(0x9F979E0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x9F975E0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYCOINEFFECT_OFFSET UNITYSDK_OFFSET(0x9F95CC0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYEVENTEFFECT_OFFSET UNITYSDK_OFFSET(0x9F97080)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x9F96480)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYNEXTANCHOREFFECT_OFFSET UNITYSDK_OFFSET(0x9F97B70)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOPLAYADDCOINEFFECT_OFFSET UNITYSDK_OFFSET(0x9F960C0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOSHOWITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x9F96250)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x9F941F0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F94820)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSCOIN_OFFSET UNITYSDK_OFFSET(0x9F95740)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSFINALCOIN_OFFSET UNITYSDK_OFFSET(0x9F95870)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWDOUBLELARGECOIN_OFFSET UNITYSDK_OFFSET(0x9F959A0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWEVENT_OFFSET UNITYSDK_OFFSET(0x9F95AD0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWFEWCOIN_OFFSET UNITYSDK_OFFSET(0x9F953B0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWITEM_OFFSET UNITYSDK_OFFSET(0x9F94870)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLARGECOIN_OFFSET UNITYSDK_OFFSET(0x9F95610)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLOTSCOIN_OFFSET UNITYSDK_OFFSET(0x9F954E0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__APPENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x9F95190)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F97F90)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DETERMINEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x9F949C0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYDIAMONDEFFECT_OFFSET UNITYSDK_OFFSET(0x9F96540)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x9F96730)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__EXECUTENEXTCOMMAND_OFFSET UNITYSDK_OFFSET(0x9F97D00)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETADDEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9F97910)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETEVENTEFFECTICON_OFFSET UNITYSDK_OFFSET(0x9F95C20)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYCOINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9F95FF0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTENDPOINT_OFFSET UNITYSDK_OFFSET(0x9F95100)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9F96C10)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__ISCOMMANDEXECUTING_OFFSET UNITYSDK_OFFSET(0x9F97E90)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__PEEKCOMMAND_OFFSET UNITYSDK_OFFSET(0x9F97D70)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__SHOWITEMFROMTRANS_OFFSET UNITYSDK_OFFSET(0x9F94E90)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController_TypeDefinitionIndex = 54079;

	class PlanetFesFloatingController : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::String* FLY_FEW_COIN_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_LOTS_COIN_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_LARGE_COIN_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_BONUS_COIN_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_BONUS_FINAL_COIN_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_COIN_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_DIAMOND_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_DIAMOND_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_ITEM_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_TICKET_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_GOLD_TICKET_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_COLORFUL_TICKET_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_ITEM_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_TICKET_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_GOLD_TICKET_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_COLORFUL_TICKET_EFFECT_PATH; // 0x0
		// static const ::System::String* SHOW_ITEM_EFFECT_PATH; // 0x0
		// static const ::System::String* FLY_EVENT_EFFECT_PATH; // 0x0
		// static const ::System::String* ADD_EVENT_EFFECT_PATH; // 0x0
		::UnityEngine::Transform* CoinEndpoint; // 0x18
		::UnityEngine::Transform* DiamondEndpoint; // 0x20
		::UnityEngine::Transform* TicketEndpoint; // 0x28
		::UnityEngine::Transform* CardEndpoint; // 0x30
		::UnityEngine::Transform* EventEndpoint; // 0x38
		::UnityEngine::Transform* SkillEndpoint; // 0x40
		::Class_1_95E1BEF84A79D9EB* _PoolMgr; // 0x48
		::Class_1_14FA7A3912B06196* _Builder; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolQueue_1<::Class_0_16E4307DCC419505_333*>*>* _CommandsByAnchorID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ShowItem(::UnityEngine::Transform* start, ::RPG::Client::ItemDisplayData* itemDisplayData, ::System::Boolean shouldQueue, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ItemDisplayData*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWITEM_OFFSET))(this, start, itemDisplayData, shouldQueue, delay);
		}

		::System::Void _ShowItemFromTrans(::UnityEngine::Transform* start, ::RPG::Client::PlanetFesFloatingController_ItemType itemType, ::System::String* icon, ::System::UInt32 number, ::System::Boolean shouldQueue, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__SHOWITEMFROMTRANS_OFFSET))(this, start, itemType, icon, number, shouldQueue, delay);
		}

		::System::Void ShowFewCoin(::UnityEngine::Transform* start, ::System::Numerics::BigInteger number, ::System::Boolean shouldQueue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWFEWCOIN_OFFSET))(this, start, number, shouldQueue);
		}

		::System::Void ShowLotsCoin(::UnityEngine::Transform* start, ::System::Numerics::BigInteger number, ::System::Boolean shouldQueue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLOTSCOIN_OFFSET))(this, start, number, shouldQueue);
		}

		::System::Void ShowLargeCoin(::UnityEngine::Transform* start, ::System::Numerics::BigInteger number, ::System::Boolean shouldQueue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLARGECOIN_OFFSET))(this, start, number, shouldQueue);
		}

		::System::Void ShowBonusCoin(::UnityEngine::Transform* start, ::System::Numerics::BigInteger number, ::System::Boolean shouldQueue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSCOIN_OFFSET))(this, start, number, shouldQueue);
		}

		::System::Void ShowBonusFinalCoin(::UnityEngine::Transform* start, ::System::Numerics::BigInteger number, ::System::Boolean shouldQueue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSFINALCOIN_OFFSET))(this, start, number, shouldQueue);
		}

		::System::Void ShowDoubleLargeCoin(::UnityEngine::Transform* start, ::System::Numerics::BigInteger number, ::System::Boolean shouldQueue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWDOUBLELARGECOIN_OFFSET))(this, start, number, shouldQueue);
		}

		::System::Void ShowEvent(::UnityEngine::Vector3 startPos, ::RPG::GameCore::PlanetFesEventType eventType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWEVENT_OFFSET))(this, startPos, eventType);
		}

		::System::Void DoFlyCoinEffect(::UnityEngine::Transform* start, ::System::String* number, ::RPG::Client::PlanetFesFloatingController_CoinAmount amount, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::PlanetFesFloatingController_CoinAmount, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYCOINEFFECT_OFFSET))(this, start, number, amount, onFinish);
		}

		::System::Void DoPlayAddCoinEffect(::System::Single duration, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOPLAYADDCOINEFFECT_OFFSET))(this, duration, onFinish);
		}

		::System::Void DoShowItemEffect(::UnityEngine::Transform* start, ::System::String* icon, ::System::String* number, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOSHOWITEMEFFECT_OFFSET))(this, start, icon, number, onFinish);
		}

		::System::Void DoFlyItemEffect(::UnityEngine::Transform* start, ::RPG::Client::PlanetFesFloatingController_ItemType type, ::System::String* icon, ::System::String* number, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYITEMEFFECT_OFFSET))(this, start, type, icon, number, onFinish);
		}

		::System::Void _DoFlyDiamondEffect(::UnityEngine::Transform* start, ::System::String* number, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYDIAMONDEFFECT_OFFSET))(this, start, number, onFinish);
		}

		::System::Void _DoFlyItemEffect(::UnityEngine::Transform* start, ::RPG::Client::PlanetFesFloatingController_ItemType type, ::System::String* icon, ::System::String* number, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYITEMEFFECT_OFFSET))(this, start, type, icon, number, onFinish);
		}

		::System::Void DoFlyEventEffect(::UnityEngine::Vector3 startPos, ::System::String* icon, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYEVENTEFFECT_OFFSET))(this, startPos, icon, onFinish);
		}

		::System::Void DoAddItemEffect(::System::Single duration, ::RPG::Client::PlanetFesFloatingController_ItemType type, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDITEMEFFECT_OFFSET))(this, duration, type, onFinish);
		}

		::System::Void DoAddEventEffect(::System::Single duration, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDEVENTEFFECT_OFFSET))(this, duration, onFinish);
		}

		::System::Void DoFlyNextAnchorEffect(::System::Int32 anchorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYNEXTANCHOREFFECT_OFFSET))(this, anchorID);
		}

		::System::Void _ExecuteNextCommand(::System::Int32 anchorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__EXECUTENEXTCOMMAND_OFFSET))(this, anchorID);
		}

		::System::Void _AppendCommand(::System::Int32 anchorID, ::Class_0_16E4307DCC419505_333* command)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_333*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__APPENDCOMMAND_OFFSET))(this, anchorID, command);
		}

		::Class_0_16E4307DCC419505_333* _PeekCommand(::System::Int32 anchorID)
		{
			return ((::Class_0_16E4307DCC419505_333*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__PEEKCOMMAND_OFFSET))(this, anchorID);
		}

		::System::Boolean _IsCommandExecuting(::System::Int32 anchorID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__ISCOMMANDEXECUTING_OFFSET))(this, anchorID);
		}

		::RPG::Client::PlanetFesFloatingController_ItemType _DetermineItemType(::System::UInt32 itemID)
		{
			return ((::RPG::Client::PlanetFesFloatingController_ItemType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DETERMINEITEMTYPE_OFFSET))(this, itemID);
		}

		::UnityEngine::Transform* _GetFlyEffectEndPoint(::RPG::Client::PlanetFesFloatingController_ItemType type)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTENDPOINT_OFFSET))(this, type);
		}

		::System::String* _GetFlyEffectPrefabPath(::RPG::Client::PlanetFesFloatingController_ItemType type)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTPREFABPATH_OFFSET))(this, type);
		}

		::System::String* _GetAddEffectPrefabPath(::RPG::Client::PlanetFesFloatingController_ItemType type)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETADDEFFECTPREFABPATH_OFFSET))(this, type);
		}

		::System::String* _GetFlyCoinPrefabPath(::RPG::Client::PlanetFesFloatingController_CoinAmount amount)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_CoinAmount))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYCOINPREFABPATH_OFFSET))(this, amount);
		}

		::System::String* _GetEventEffectIcon(::RPG::GameCore::PlanetFesEventType eventType)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETEVENTEFFECTICON_OFFSET))(this, eventType);
		}
	};
}
