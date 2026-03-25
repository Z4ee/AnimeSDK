#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournHandBookEventRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xA395F70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_HANDBOOKEVENTID_OFFSET UNITYSDK_OFFSET(0xA395FE0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xA396560)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA396570)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_LOCKEDTEXT_OFFSET UNITYSDK_OFFSET(0xA396550)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xA396510)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_TYPETEXT_OFFSET UNITYSDK_OFFSET(0xA396540)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA396580)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0xA3964C0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA396370)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookEventDataItem_TypeDefinitionIndex = 55177;

	class RogueTournHandbookEventDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournHandBookEventRow* _HandbookEventRow; // 0x10
		::System::String* _ImagePath_k__BackingField; // 0x18
		::RPG::Client::TextID _TypeText_k__BackingField; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x30
		::RPG::Client::TextID _LockedText_k__BackingField; // 0x38

		::System::Void _ctor(::RPG::GameCore::RogueTournHandBookEventRow* handbookEventRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM__CTOR_OFFSET))(this, handbookEventRow);
		}

		static ::RPG::Client::RogueTournHandbookEventDataItem* Create(::RPG::GameCore::RogueTournHandBookEventRow* row)
		{
			return ((::RPG::Client::RogueTournHandbookEventDataItem*(*)(::RPG::GameCore::RogueTournHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_CREATE_OFFSET))(row);
		}

		::System::Void SyncUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SYNCUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::UInt32 get_HandbookEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_HANDBOOKEVENTID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_TITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TypeText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_TYPETEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_LockedText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_LOCKEDTEXT_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
