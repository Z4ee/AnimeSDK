#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::GameCore { class ItemRow; }
namespace RPG::GameCore { class TrainPartyDynamicConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GETTAGFLAG_OFFSET UNITYSDK_OFFSET(0xA5EDF80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTID_OFFSET UNITYSDK_OFFSET(0xA5EE310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTINFO_OFFSET UNITYSDK_OFFSET(0xA5EE360)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA5EE3E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ISACTIVITY_OFFSET UNITYSDK_OFFSET(0xA5EE6F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA5EE4D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA5EE2F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0xA5EE450)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0xA5EE380)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA5EE290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SETBELONGSLOTINFO_OFFSET UNITYSDK_OFFSET(0xA5EE240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_BELONGSLOTINFO_OFFSET UNITYSDK_OFFSET(0xA5EE370)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA5EE5D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0xA5EE300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xA5EDF20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA5EDF10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM__INITTAGFLAGS_OFFSET UNITYSDK_OFFSET(0xA5EDFD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDIYItem_TypeDefinitionIndex = 61089;

	class TrainPartyBuildDIYItem : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _BelongSlotInfo_k__BackingField; // 0x10
		::System::UInt32 _ItemID_k__BackingField; // 0x18
		::System::Int32 _TagFlag; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 dynamicID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SYNC_OFFSET))(this, dynamicID);
		}

		::System::Int32 GetTagFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GETTAGFLAG_OFFSET))(this);
		}

		::System::Void SetBelongSlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SETBELONGSLOTINFO_OFFSET))(this, info);
		}

		::System::Void _InitTagFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM__INITTAGFLAGS_OFFSET))(this);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_ITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_BelongSlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTID_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* get_BelongSlotInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTINFO_OFFSET))(this);
		}

		::System::Void set_BelongSlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_BELONGSLOTINFO_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyDynamicConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TrainPartyDynamicConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get_ItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMROW_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMNAME_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ISACTIVITY_OFFSET))(this);
		}
	};
}
