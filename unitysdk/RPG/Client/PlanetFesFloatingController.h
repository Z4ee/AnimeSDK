#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_378;
class Class_1_14FA7A3912B06196;
class Class_1_B18A907A8E4C5C9C;
namespace RPG { template <typename T> class PoolQueue_1; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDEVENTEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96E190)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96DD80)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYCOINEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96C430)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYEVENTEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96D820)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96CC20)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYNEXTANCHOREFFECT_OFFSET UNITYSDK_OFFSET(0x1A96E330)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOPLAYADDCOINEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96C840)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOSHOWITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96C9E0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0x1A96A7C0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A96ADF0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSCOIN_OFFSET UNITYSDK_OFFSET(0x1A96BEB0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSFINALCOIN_OFFSET UNITYSDK_OFFSET(0x1A96BFE0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWDOUBLELARGECOIN_OFFSET UNITYSDK_OFFSET(0x1A96C110)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWEVENT_OFFSET UNITYSDK_OFFSET(0x1A96C240)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWFEWCOIN_OFFSET UNITYSDK_OFFSET(0x1A96BB20)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWITEM_OFFSET UNITYSDK_OFFSET(0x1A96AE40)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLARGECOIN_OFFSET UNITYSDK_OFFSET(0x1A96BD80)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLOTSCOIN_OFFSET UNITYSDK_OFFSET(0x1A96BC50)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__APPENDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A96B940)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A96E850)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DETERMINEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1A96B000)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYDIAMONDEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96CCE0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYITEMEFFECT_OFFSET UNITYSDK_OFFSET(0x1A96CEE0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__EXECUTENEXTCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A96E490)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETADDEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A96E0C0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETEVENTEFFECTICON_OFFSET UNITYSDK_OFFSET(0x1A96C390)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYCOINPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A96C770)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTENDPOINT_OFFSET UNITYSDK_OFFSET(0x1A96B8B0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0x1A96D3D0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__ISCOMMANDEXECUTING_OFFSET UNITYSDK_OFFSET(0x1A96E5D0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__PEEKCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A96E500)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__SHOWITEMFROMTRANS_OFFSET UNITYSDK_OFFSET(0x1A96B640)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController_TypeDefinitionIndex = 63532;

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
		::Class_1_B18A907A8E4C5C9C* _PoolMgr; // 0x48
		::Class_1_14FA7A3912B06196* _Builder; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolQueue_1<::Class_0_16E4307DCC419505_378*>*>* _CommandsByAnchorID; // 0x58

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

		::System::Void ShowItem(::UnityEngine::Transform* a1, ::RPG::Client::ItemDisplayData* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::ItemDisplayData*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ShowItemFromTrans(::UnityEngine::Transform* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2, ::System::String* a3, ::System::UInt32 a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__SHOWITEMFROMTRANS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ShowFewCoin(::UnityEngine::Transform* a1, ::System::Numerics::BigInteger a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWFEWCOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowLotsCoin(::UnityEngine::Transform* a1, ::System::Numerics::BigInteger a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLOTSCOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowLargeCoin(::UnityEngine::Transform* a1, ::System::Numerics::BigInteger a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLARGECOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowBonusCoin(::UnityEngine::Transform* a1, ::System::Numerics::BigInteger a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSCOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowBonusFinalCoin(::UnityEngine::Transform* a1, ::System::Numerics::BigInteger a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSFINALCOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowDoubleLargeCoin(::UnityEngine::Transform* a1, ::System::Numerics::BigInteger a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Numerics::BigInteger, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWDOUBLELARGECOIN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowEvent(::UnityEngine::Vector3 a1, ::RPG::GameCore::PlanetFesEventType a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void DoFlyCoinEffect(::UnityEngine::Transform* a1, ::System::String* a2, ::RPG::Client::PlanetFesFloatingController_CoinAmount a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::PlanetFesFloatingController_CoinAmount, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYCOINEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoPlayAddCoinEffect(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOPLAYADDCOINEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void DoShowItemEffect(::UnityEngine::Transform* a1, ::System::String* a2, ::System::String* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOSHOWITEMEFFECT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DoFlyItemEffect(::UnityEngine::Transform* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2, ::System::String* a3, ::System::String* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYITEMEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _DoFlyDiamondEffect(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYDIAMONDEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DoFlyItemEffect(::UnityEngine::Transform* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2, ::System::String* a3, ::System::String* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYITEMEFFECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void DoFlyEventEffect(::UnityEngine::Vector3 a1, ::System::String* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYEVENTEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoAddItemEffect(::System::Single a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::PlanetFesFloatingController_ItemType, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDITEMEFFECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DoAddEventEffect(::System::Single a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDEVENTEFFECT_OFFSET))(this, a1, a2);
		}

		::System::Void DoFlyNextAnchorEffect(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYNEXTANCHOREFFECT_OFFSET))(this, a1);
		}

		::System::Void _ExecuteNextCommand(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__EXECUTENEXTCOMMAND_OFFSET))(this, a1);
		}

		::System::Void _AppendCommand(::System::Int32 a1, ::Class_0_16E4307DCC419505_378* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_378*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__APPENDCOMMAND_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_378* _PeekCommand(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_378*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__PEEKCOMMAND_OFFSET))(this, a1);
		}

		::System::Boolean _IsCommandExecuting(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__ISCOMMANDEXECUTING_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesFloatingController_ItemType _DetermineItemType(::System::UInt32 a1)
		{
			return ((::RPG::Client::PlanetFesFloatingController_ItemType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DETERMINEITEMTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* _GetFlyEffectEndPoint(::RPG::Client::PlanetFesFloatingController_ItemType a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTENDPOINT_OFFSET))(this, a1);
		}

		::System::String* _GetFlyEffectPrefabPath(::RPG::Client::PlanetFesFloatingController_ItemType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* _GetAddEffectPrefabPath(::RPG::Client::PlanetFesFloatingController_ItemType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETADDEFFECTPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* _GetFlyCoinPrefabPath(::RPG::Client::PlanetFesFloatingController_CoinAmount a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlanetFesFloatingController_CoinAmount))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYCOINPREFABPATH_OFFSET))(this, a1);
		}

		::System::String* _GetEventEffectIcon(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETEVENTEFFECTICON_OFFSET))(this, a1);
		}
	};
}
