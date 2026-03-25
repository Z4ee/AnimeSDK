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

#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9160080)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x91606F0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETUNLOCKDESC_OFFSET UNITYSDK_OFFSET(0x91609F0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETVOICECONTENT_OFFSET UNITYSDK_OFFSET(0x9160220)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x9160AF0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x9160AA0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0x9160BE0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEID_OFFSET UNITYSDK_OFFSET(0x9160B60)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_ROW_OFFSET UNITYSDK_OFFSET(0x9160150)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x9160970)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_POSTVOICE_OFFSET UNITYSDK_OFFSET(0x91602E0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_ISHIDE_OFFSET UNITYSDK_OFFSET(0x9160B50)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_REPLACEENTRY_OFFSET UNITYSDK_OFFSET(0x9160BF0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_STOPPLAYINGVOICE_OFFSET UNITYSDK_OFFSET(0x9160650)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x91601C0)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x9160C00)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9160C10)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9160C60)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x9160C70)
#define RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9160C50)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarVoiceArchiveEntry_TypeDefinitionIndex = 50717;

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

		::System::Void Unlock(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_UNLOCK_OFFSET))(this, fromLogin);
		}

		::RPG::Client::TextID GetVoiceContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GETVOICECONTENT_OFFSET))(this);
		}

		::System::UInt32 PostVoice(::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>* endCallback, ::RPG::GameCore::GameEntity* emitterEntity)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Action_3<::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*>*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_POSTVOICE_OFFSET))(this, endCallback, emitterEntity);
		}

		::System::Void StopPlayingVoice(::System::UInt32 playingID, ::RPG::GameCore::GameEntity* emitterEntity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_STOPPLAYINGVOICE_OFFSET))(this, playingID, emitterEntity);
		}

		::System::Int32 CompareTo(::RPG::Client::BaseArchiveEntry* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_COMPARETO_OFFSET))(this, obj);
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

		::System::Void set_IsHide(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_ISHIDE_OFFSET))(this, value);
		}

		::System::UInt32 get_ReplaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEID_OFFSET))(this);
		}

		::RPG::Client::AvatarVoiceArchiveEntry* get_ReplaceEntry()
		{
			return ((::RPG::Client::AvatarVoiceArchiveEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_GET_REPLACEENTRY_OFFSET))(this);
		}

		::System::Void set_ReplaceEntry(::RPG::Client::AvatarVoiceArchiveEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarVoiceArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY_SET_REPLACEENTRY_OFFSET))(this, value);
		}

		::System::Boolean __iFixBaseProxy_CanUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_CANUNLOCKED_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Unlock(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_UNLOCK_OFFSET))(this, P0);
		}

		::System::Int32 __iFixBaseProxy_CompareTo(::RPG::Client::BaseArchiveEntry* P0)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_COMPARETO_OFFSET))(this, P0);
		}

		::System::UInt32 __iFixBaseProxy_get_RedDotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARVOICEARCHIVEENTRY___IFIXBASEPROXY_GET_REDDOTKEY_OFFSET))(this);
		}
	};
}
