#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChatNoticeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF9FEC0)
#define RPG_GAMECORE_CHATINVITECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA0430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatInviteConfigRow_TypeDefinitionIndex = 12899;

	class ChatInviteConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::Client::TextID NoticeDesc; // 0x18
		::RPG::Client::TextID InviteContent; // 0x28
		::RPG::Client::TextID InviteGo; // 0x38
		::RPG::Client::TextID SendDesc; // 0x48
		::System::Single ExpireTime; // 0x58
		::RPG::GameCore::ChatNoticeType ChatNoticeType; // 0x5C
		::RPG::Client::TextID InviteTitle; // 0x60
		::RPG::Client::TextID InviteInvalid; // 0x70
		::System::Single NoticeTime; // 0x80
		::System::UInt32 ID; // 0x84

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
