#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_499;
class Class_1_14FA7A3912B06196;
class Class_1_B18A907A8E4C5C9C;
namespace RPG { template <typename T> class PoolQueue_1; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDEVENTEFFECT_OFFSET UNITYSDK_OFFSET(0xDB93F80)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOADDITEMEFFECT_OFFSET UNITYSDK_OFFSET(0xDB93B50)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYCOINEFFECT_OFFSET UNITYSDK_OFFSET(0xDB92200)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYEVENTEFFECT_OFFSET UNITYSDK_OFFSET(0xDB935F0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYITEMEFFECT_OFFSET UNITYSDK_OFFSET(0xDB929F0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOFLYNEXTANCHOREFFECT_OFFSET UNITYSDK_OFFSET(0xDB94120)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOPLAYADDCOINEFFECT_OFFSET UNITYSDK_OFFSET(0xDB92610)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_DOSHOWITEMEFFECT_OFFSET UNITYSDK_OFFSET(0xDB927B0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xDB90580)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDB90BB0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSCOIN_OFFSET UNITYSDK_OFFSET(0xDB91C80)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWBONUSFINALCOIN_OFFSET UNITYSDK_OFFSET(0xDB91DB0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWDOUBLELARGECOIN_OFFSET UNITYSDK_OFFSET(0xDB91EE0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWEVENT_OFFSET UNITYSDK_OFFSET(0xDB92010)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWFEWCOIN_OFFSET UNITYSDK_OFFSET(0xDB918F0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWITEM_OFFSET UNITYSDK_OFFSET(0xDB90C00)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLARGECOIN_OFFSET UNITYSDK_OFFSET(0xDB91B50)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER_SHOWLOTSCOIN_OFFSET UNITYSDK_OFFSET(0xDB91A20)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__APPENDCOMMAND_OFFSET UNITYSDK_OFFSET(0xDB91710)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDB94480)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DETERMINEITEMTYPE_OFFSET UNITYSDK_OFFSET(0xDB90DD0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYDIAMONDEFFECT_OFFSET UNITYSDK_OFFSET(0xDB92AB0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__DOFLYITEMEFFECT_OFFSET UNITYSDK_OFFSET(0xDB92CB0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__EXECUTENEXTCOMMAND_OFFSET UNITYSDK_OFFSET(0xDB94280)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETADDEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDB93EA0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETEVENTEFFECTICON_OFFSET UNITYSDK_OFFSET(0xDB92160)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYCOINPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDB92540)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTENDPOINT_OFFSET UNITYSDK_OFFSET(0xDB91680)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__GETFLYEFFECTPREFABPATH_OFFSET UNITYSDK_OFFSET(0xDB931A0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__ISCOMMANDEXECUTING_OFFSET UNITYSDK_OFFSET(0xDB943C0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__PEEKCOMMAND_OFFSET UNITYSDK_OFFSET(0xDB942F0)
#define RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__SHOWITEMFROMTRANS_OFFSET UNITYSDK_OFFSET(0xDB91410)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesFloatingController_TypeDefinitionIndex = 66485;

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
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::PoolQueue_1<::Class_0_16E4307DCC419505_499*>*>* _CommandsByAnchorID; // 0x58

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

		::System::Void _AppendCommand(::System::Int32 a1, ::Class_0_16E4307DCC419505_499* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_0_16E4307DCC419505_499*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__APPENDCOMMAND_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_499* _PeekCommand(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESFLOATINGCONTROLLER__PEEKCOMMAND_OFFSET))(this, a1);
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
