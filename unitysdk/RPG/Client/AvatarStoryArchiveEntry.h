#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::GameCore { class StoryAtlasRow; }
namespace System { class String; }

#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x915D670)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x915DF40)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETSTORYTITLE_OFFSET UNITYSDK_OFFSET(0x915DC90)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x915DE10)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x915E110)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x915E0C0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0x915E200)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEID_OFFSET UNITYSDK_OFFSET(0x915E180)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x915D740)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x915E000)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x915E170)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0x915E210)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x915DB20)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x915E220)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x915E240)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x915E2D0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x915E3C0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x915E3D0)
#define RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x915E2C0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarStoryArchiveEntry_TypeDefinitionIndex = 50715;

	class AvatarStoryArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::Client::AvatarStoryArchiveEntry* _ReplaceEntry_k__BackingField; // 0x20
		::System::UInt32 AvatarID; // 0x28
		::System::Boolean _IsHide; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_UNLOCK_OFFSET))(this, fromLogin);
		}

		::RPG::Client::TextID GetStoryTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETSTORYTITLE_OFFSET))(this);
		}

		::System::String* GetUnlockDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GETUNLOCKDESC_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_COMPARETO_OFFSET))(this, obj);
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

		::System::Void set_IsHide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_ISHIDE_OFFSET))(this, value);
		}

		::System::UInt32 get_ReplaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEID_OFFSET))(this);
		}

		::RPG::Client::AvatarStoryArchiveEntry* get_ReplaceEntry()
		{
			return ((::RPG::Client::AvatarStoryArchiveEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_GET_REPLACEENTRY_OFFSET))(this);
		}

		::System::Void set_ReplaceEntry(::RPG::Client::AvatarStoryArchiveEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarStoryArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY_SET_REPLACEENTRY_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Unlock(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARSTORYARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, P0);
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
