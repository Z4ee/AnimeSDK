#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A2A6680)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GETTAGFLAG_OFFSET UNITYSDK_OFFSET(0x1A2A6A40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GETTAGNAMETEXTIDLIST_OFFSET UNITYSDK_OFFSET(0x1A2A6B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTID_OFFSET UNITYSDK_OFFSET(0x1A2A6D30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1A2A6D80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1A29D080)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_FIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x1A2A6E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_FRAMEITEMRARITYPATH_OFFSET UNITYSDK_OFFSET(0x1A2A6E80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A2A6DA0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1A2A6EC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMNAME_OFFSET UNITYSDK_OFFSET(0x1A2A6DE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_TAGLIST_OFFSET UNITYSDK_OFFSET(0x1A2A6CF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET__TAGFLAG_OFFSET UNITYSDK_OFFSET(0x1A2A7310)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SETBELONGSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1A2A6AF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_BELONGSLOTINFO_OFFSET UNITYSDK_OFFSET(0x1A2A6D90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0x1A2A7020)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET__TAGFLAG_OFFSET UNITYSDK_OFFSET(0x1A2A7320)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A6A30)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildDIYItem_TypeDefinitionIndex = 70909;

	class TrainPartyBuildDIYItem : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* _BelongSlotInfo_k__BackingField; // 0x10
		::System::String* _FrameItemRarityPath; // 0x18
		::Il2CppArray<::System::UInt32>* _TagList; // 0x20
		::Il2CppArray<::System::UInt32>* _DisplayTagList; // 0x28
		::System::String* _IconPath; // 0x30
		::System::String* _FigureIconPath; // 0x38
		::RPG::Client::TextID _ItemName; // 0x40
		::System::Int32 __TagFlag_k__BackingField; // 0x50
		::RPG::Client::TextID _BGDesc; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_CLEAR_OFFSET))(this);
		}

		::System::Int32 GetTagFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GETTAGFLAG_OFFSET))(this);
		}

		::System::Void SetBelongSlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SETBELONGSLOTINFO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetTagNameTextIDList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GETTAGNAMETEXTIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_BelongSlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTID_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* get_BelongSlotInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BELONGSLOTINFO_OFFSET))(this);
		}

		::System::Void set_BelongSlotInfo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_BELONGSLOTINFO_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_ItemName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ITEMNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_BGDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_BGDESC_OFFSET))(this);
		}

		::System::String* get_FigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_FIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_FrameItemRarityPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_FRAMEITEMRARITYPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TagList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_TAGLIST_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET_ISNEW_OFFSET))(this, a1);
		}

		::System::Int32 get__TagFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_GET__TAGFLAG_OFFSET))(this);
		}

		::System::Void set__TagFlag(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDDIYITEM_SET__TAGFLAG_OFFSET))(this, a1);
		}
	};
}
