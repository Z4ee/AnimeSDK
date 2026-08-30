#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournHandBookEventRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1C330D00)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_HANDBOOKEVENTID_OFFSET UNITYSDK_OFFSET(0x1C330D70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C331550)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C331560)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_LOCKEDTEXT_OFFSET UNITYSDK_OFFSET(0x1C331540)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1C3314C0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_GET_TYPETEXT_OFFSET UNITYSDK_OFFSET(0x1C331530)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C331570)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1C331470)
#define RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C331320)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookEventDataItem_TypeDefinitionIndex = 67661;

	class RogueTournHandbookEventDataItem : public ::System::Object
	{
	public:
		::System::String* _ImagePath_k__BackingField; // 0x10
		::RPG::GameCore::RogueTournHandBookEventRow* _HandbookEventRow; // 0x18
		::RPG::Client::TextID _TypeText_k__BackingField; // 0x20
		::RPG::Client::TextID _LockedText_k__BackingField; // 0x30
		::System::Boolean _IsUnlocked_k__BackingField; // 0x40

		::System::Void _ctor(::RPG::GameCore::RogueTournHandBookEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournHandbookEventDataItem* Create(::RPG::GameCore::RogueTournHandBookEventRow* a1)
		{
			return ((::RPG::Client::RogueTournHandbookEventDataItem*(*)(::RPG::GameCore::RogueTournHandBookEventRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_CREATE_OFFSET))(a1);
		}

		::System::Void SyncUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SYNCUNLOCKED_OFFSET))(this, a1);
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

		::System::Void set_IsUnlocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKEVENTDATAITEM_SET_ISUNLOCKED_OFFSET))(this, a1);
		}
	};
}
