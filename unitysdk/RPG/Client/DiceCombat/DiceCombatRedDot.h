#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class DiceCombatModule; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_GETSHOPSUBTABREDDOTKEY_OFFSET UNITYSDK_OFFSET(0xA135A60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_GET__DICECOMBATMODULE_OFFSET UNITYSDK_OFFSET(0xA133400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASANYNEWGOODSNOTSEENFORSHOPANDGOODTYPE_OFFSET UNITYSDK_OFFSET(0xA1334F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASANYNEWGOODSNOTSEENFORSHOP_OFFSET UNITYSDK_OFFSET(0xA133480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASANYNEWSHOPGOODNOTSEEN_OFFSET UNITYSDK_OFFSET(0xA1331D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASCANBUYAVATARNOTSEENINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA134C40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASOWNEDAVATARNOTSEENINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA1351C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASOWNEDAVATARNOTSEENINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA133E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASSHOPGOODNOTSEEN_OFFSET UNITYSDK_OFFSET(0xA133710)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASTARGETRARITYOWNEDAVATARNOTSEENINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA134EA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENALLOWNEDANDCANBUYAVATARINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA134390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENCANBUYAVATARINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA134A00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENOWNEDAVATARINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA1356D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENOWNEDAVATARINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA134000)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSHOPGOODSFORSHOPANDGOODTYPE_OFFSET UNITYSDK_OFFSET(0xA1338A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSHOPGOOD_OFFSET UNITYSDK_OFFSET(0xA133AF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLECANBUYAVATARINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA134D50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLEOWNEDAVATARINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA135910)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLEOWNEDAVATARINTEAMEDIT_OFFSET UNITYSDK_OFFSET(0xA134240)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLESHOPGOOD_OFFSET UNITYSDK_OFFSET(0xA133D30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETTARGETRARITYOWNEDAVATARSEENINCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA135340)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT__CTOR_OFFSET UNITYSDK_OFFSET(0xA133150)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatRedDot_TypeDefinitionIndex = 69857;

	class DiceCombatRedDot : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*>* _AvatarInfosBuffer; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _UintListBuffer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT__CTOR_OFFSET))(this);
		}

		::System::Boolean HasAnyNewShopGoodNotSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASANYNEWSHOPGOODNOTSEEN_OFFSET))(this);
		}

		::System::Boolean HasAnyNewGoodsNotSeenForShop(::System::UInt32 shopID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASANYNEWGOODSNOTSEENFORSHOP_OFFSET))(this, shopID);
		}

		::System::Boolean HasAnyNewGoodsNotSeenForShopAndGoodType(::System::UInt32 shopID, ::System::Boolean isAvatarGood)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASANYNEWGOODSNOTSEENFORSHOPANDGOODTYPE_OFFSET))(this, shopID, isAvatarGood);
		}

		::System::Boolean HasShopGoodNotSeen(::System::UInt32 goodID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASSHOPGOODNOTSEEN_OFFSET))(this, goodID);
		}

		::System::Void SetSeenShopGoodsForShopAndGoodType(::System::UInt32 shopID, ::System::Boolean isAvatarGood)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSHOPGOODSFORSHOPANDGOODTYPE_OFFSET))(this, shopID, isAvatarGood);
		}

		::System::Void SetSeenShopGood(::System::Collections::Generic::List_1<::System::UInt32>* seenShopGoodIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSHOPGOOD_OFFSET))(this, seenShopGoodIDs);
		}

		::System::Void SetSeenSingleShopGood(::System::UInt32 seenShopGoodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLESHOPGOOD_OFFSET))(this, seenShopGoodID);
		}

		::System::Boolean HasOwnedAvatarNotSeenInTeamEdit(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASOWNEDAVATARNOTSEENINTEAMEDIT_OFFSET))(this, avatarID);
		}

		::System::Void SetSeenOwnedAvatarInTeamEdit(::System::Collections::Generic::List_1<::System::UInt32>* seenOwnedAvatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENOWNEDAVATARINTEAMEDIT_OFFSET))(this, seenOwnedAvatarIDs);
		}

		::System::Void SetSeenSingleOwnedAvatarInTeamEdit(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLEOWNEDAVATARINTEAMEDIT_OFFSET))(this, avatarID);
		}

		::System::Void SetSeenAllOwnedAndCanBuyAvatarInTeamEdit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENALLOWNEDANDCANBUYAVATARINTEAMEDIT_OFFSET))(this);
		}

		::System::Boolean HasCanBuyAvatarNotSeenInTeamEdit(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASCANBUYAVATARNOTSEENINTEAMEDIT_OFFSET))(this, avatarID);
		}

		::System::Void SetSeenCanBuyAvatarInTeamEdit(::System::Collections::Generic::List_1<::System::UInt32>* canBuyAvatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENCANBUYAVATARINTEAMEDIT_OFFSET))(this, canBuyAvatarID);
		}

		::System::Void SetSeenSingleCanBuyAvatarInTeamEdit(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLECANBUYAVATARINTEAMEDIT_OFFSET))(this, avatarID);
		}

		::System::Boolean HasTargetRarityOwnedAvatarNotSeenInCollection(::System::UInt32 rarity)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASTARGETRARITYOWNEDAVATARNOTSEENINCOLLECTION_OFFSET))(this, rarity);
		}

		::System::Void SetTargetRarityOwnedAvatarSeenInCollection(::System::UInt32 rarity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETTARGETRARITYOWNEDAVATARSEENINCOLLECTION_OFFSET))(this, rarity);
		}

		::System::Boolean HasOwnedAvatarNotSeenInCollection(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_HASOWNEDAVATARNOTSEENINCOLLECTION_OFFSET))(this, avatarID);
		}

		::System::Void SetSeenOwnedAvatarInCollection(::System::Collections::Generic::List_1<::System::UInt32>* seenOwnedAvatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENOWNEDAVATARINCOLLECTION_OFFSET))(this, seenOwnedAvatarIDs);
		}

		::System::Void SetSeenSingleOwnedAvatarInCollection(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_SETSEENSINGLEOWNEDAVATARINCOLLECTION_OFFSET))(this, avatarID);
		}

		::System::UInt32 GetShopSubTabRedDotKey(::System::UInt32 shopID, ::System::Boolean isAvatar)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_GETSHOPSUBTABREDDOTKEY_OFFSET))(this, shopID, isAvatar);
		}

		::RPG::Client::DiceCombatModule* get__diceCombatModule()
		{
			return ((::RPG::Client::DiceCombatModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATREDDOT_GET__DICECOMBATMODULE_OFFSET))(this);
		}
	};
}
