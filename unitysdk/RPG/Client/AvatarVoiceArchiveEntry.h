#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/BaseArchiveEntry.h"
#include "unitysdk/RPG/Client/TextID.h"

class AkCallbackInfo;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class VoiceAtlasRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x19ED1EF0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x19ED25E0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x19ED2740)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETVOICECONTENT_OFFSET UNITYSDK_OFFSET(0x19ED2110)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x19ED2840)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x19ED27F0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0x19ED2920)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEID_OFFSET UNITYSDK_OFFSET(0x19ED28A0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x19ED1FC0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x19ED26A0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_POSTVOICE_OFFSET UNITYSDK_OFFSET(0x19ED21D0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x19ED20C0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0x19ED2930)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_STOPPLAYINGVOICE_OFFSET UNITYSDK_OFFSET(0x19ED2540)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x19ED2030)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19ED2940)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarVoiceArchiveEntry_TypeDefinitionIndex = 62509;

	class AvatarVoiceArchiveEntry : public ::RPG::Client::BaseArchiveEntry
	{
	public:
		::RPG::Client::AvatarVoiceArchiveEntry* _ReplaceEntry_k__BackingField; // 0x20
		::System::Boolean _IsHide; // 0x28
		::System::UInt32 AvatarID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void Unlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_UNLOCK_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetVoiceContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETVOICECONTENT_OFFSET))(this);
		}

		::System::UInt32 PostVoice(::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_POSTVOICE_OFFSET))(this, a1, a2);
		}

		::System::Void StopPlayingVoice(::System::UInt32 a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_STOPPLAYINGVOICE_OFFSET))(this, a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_COMPARETO_OFFSET))(this, a1);
		}

		::System::String* GetUnlockDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETUNLOCKDESC_OFFSET))(this);
		}

		::RPG::GameCore::VoiceAtlasRow* get_Row()
		{
			return ((::RPG::GameCore::VoiceAtlasRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Int32 get_SortID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_SORTID_OFFSET))(this);
		}

		::System::Boolean get_IsHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_ISHIDE_OFFSET))(this);
		}

		::System::Void set_IsHide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_ISHIDE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReplaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEID_OFFSET))(this);
		}

		::RPG::Client::AvatarVoiceArchiveEntry* get_ReplaceEntry()
		{
			return ((::RPG::Client::AvatarVoiceArchiveEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEENTRY_OFFSET))(this);
		}

		::System::Void set_ReplaceEntry(::RPG::Client::AvatarVoiceArchiveEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarVoiceArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_REPLACEENTRY_OFFSET))(this, a1);
		}
	};
}
