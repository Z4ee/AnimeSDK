#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChatNoticeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17074890)
#define RPG_GAMECORE_CHATINVITECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17074E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChatInviteConfigRow_TypeDefinitionIndex = 11856;

	class ChatInviteConfigRow : public ::System::Object
	{
	public:
		::System::String* PicPath; // 0x10
		::RPG::Client::TextID NoticeDesc; // 0x18
		::RPG::Client::TextID InviteContent; // 0x28
		::RPG::GameCore::ChatNoticeType ChatNoticeType; // 0x38
		::System::Single ExpireTime; // 0x3C
		::RPG::Client::TextID InviteTitle; // 0x40
		::System::Single NoticeTime; // 0x50
		::System::UInt32 ID; // 0x54
		::RPG::Client::TextID InviteInvalid; // 0x58
		::RPG::Client::TextID SendDesc; // 0x68
		::RPG::Client::TextID InviteGo; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATINVITECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChatInviteConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChatInviteConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHATINVITECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
