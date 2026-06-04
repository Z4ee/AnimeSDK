#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChatNoticeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19617230)
#define RPG_GAMECORE_CHATINVITECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196177A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatInviteConfigRow_TypeDefinitionIndex = 12375;

	class ChatInviteConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::Client::TextID SendDesc; // 0x18
		::RPG::GameCore::ChatNoticeType ChatNoticeType; // 0x28
		::System::Single NoticeTime; // 0x2C
		::RPG::Client::TextID InviteInvalid; // 0x30
		::RPG::Client::TextID InviteGo; // 0x40
		::System::Single ExpireTime; // 0x50
		::System::UInt32 ID; // 0x54
		::RPG::Client::TextID NoticeDesc; // 0x58
		::RPG::Client::TextID InviteTitle; // 0x68
		::RPG::Client::TextID InviteContent; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATINVITECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChatInviteConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChatInviteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
