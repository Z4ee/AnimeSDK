#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class StoryAtlasRow; }
namespace System { class String; }

#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB396870)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB397180)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETSTORYTITLE_OFFSET UNITYSDK_OFFSET(0xB396ED0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0xB397050)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_ISHIDE_OFFSET UNITYSDK_OFFSET(0xB397350)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xB397300)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0xB397440)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEID_OFFSET UNITYSDK_OFFSET(0xB3973C0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0xB396940)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xB397240)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_ISHIDE_OFFSET UNITYSDK_OFFSET(0xB3973B0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0xB397450)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB396D60)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0xB397460)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0xB397480)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0xB397510)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0xB3975F0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0xB397600)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0xB397500)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarStoryArchiveEntry_TypeDefinitionIndex = 58406;

	class AvatarStoryArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::Client::AvatarStoryArchiveEntry* _ReplaceEntry_k__BackingField; // 0x20
		::System::Boolean _IsHide; // 0x28
		::System::UInt32 AvatarID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_UNLOCK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetStoryTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETSTORYTITLE_OFFSET))(this);
		}

		::System::String* GetUnlockDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETUNLOCKDESC_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::RPG::GameCore::StoryAtlasRow* get_Row()
		{
			return ((::RPG::GameCore::StoryAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::System::Boolean get_IsHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_ISHIDE_OFFSET))(this);
		}

		::System::Void set_IsHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_ISHIDE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReplaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEID_OFFSET))(this);
		}

		::RPG::Client::AvatarStoryArchiveEntry* get_ReplaceEntry()
		{
			return ((::RPG::Client::AvatarStoryArchiveEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEENTRY_OFFSET))(this);
		}

		::System::Void set_ReplaceEntry(::RPG::Client::AvatarStoryArchiveEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarStoryArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_REPLACEENTRY_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 __iFixBaseProxy_get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Int32 __iFixBaseProxy_get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET))(this);
		}
	};
}
