#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IRogueTournPersonaStyle; }
namespace RPG::Client { class IRogueTournPersonaStyleGift; }
namespace RPG::Client { class RogueTournPersonaStyleGiftRarityData; }
namespace RPG::Client { class RogueTournUnderlineParamInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA398680)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GETBELONGSTYLELIST_OFFSET UNITYSDK_OFFSET(0xA398760)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET UNITYSDK_OFFSET(0xA398960)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0xA398A60)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_DIVISIONLIMIT_OFFSET UNITYSDK_OFFSET(0xA398A80)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_GIFTID_OFFSET UNITYSDK_OFFSET(0xA398660)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA398A40)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA398AA0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA398A10)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA3989F0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_HASSTYLERESTRICTION_OFFSET UNITYSDK_OFFSET(0xA398900)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_SET_DIVISIONLIMIT_OFFSET UNITYSDK_OFFSET(0xA398A90)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA398AB0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA398710)
#define RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA398520)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookPersonaStyleGiftDataItem_TypeDefinitionIndex = 55182;

	class RogueTournHandbookPersonaStyleGiftDataItem : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BelongStyleIDList; // 0x10
		::RPG::Client::IRogueTournPersonaStyleGift* _StyleGiftData; // 0x18
		::System::UInt32 _DivisionLimit_k__BackingField; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x24

		::System::Void _ctor(::RPG::Client::IRogueTournPersonaStyleGift* styleGiftData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IRogueTournPersonaStyleGift*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM__CTOR_OFFSET))(this, styleGiftData);
		}

		static ::RPG::Client::RogueTournHandbookPersonaStyleGiftDataItem* Create(::System::UInt32 id)
		{
			return ((::RPG::Client::RogueTournHandbookPersonaStyleGiftDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_CREATE_OFFSET))(id);
		}

		::System::Void SyncUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_SYNCUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>* GetBelongStyleList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IRogueTournPersonaStyle*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GETBELONGSTYLELIST_OFFSET))(this);
		}

		::System::Boolean HasStyleRestriction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_HASSTYLERESTRICTION_OFFSET))(this);
		}

		::RPG::Client::RogueTournUnderlineParamInfo* GetDescUnderlineParamInfo()
		{
			return ((::RPG::Client::RogueTournUnderlineParamInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GETDESCUNDERLINEPARAMINFO_OFFSET))(this);
		}

		::System::UInt32 get_GiftID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_GIFTID_OFFSET))(this);
		}

		::RPG::Client::RogueTournPersonaStyleGiftRarityData* get_Rarity()
		{
			return ((::RPG::Client::RogueTournPersonaStyleGiftRarityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_DIVISIONLIMIT_OFFSET))(this);
		}

		::System::Void set_DivisionLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_SET_DIVISIONLIMIT_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKPERSONASTYLEGIFTDATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
