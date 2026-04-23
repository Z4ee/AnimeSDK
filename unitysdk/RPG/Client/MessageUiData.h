#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGEUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA89BA40)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUiData_TypeDefinitionIndex = 56770;

	class MessageUiData : public ::System::Object
	{
	public:
		::System::String* ContentImg; // 0x10
		::System::String* SelfSenderName; // 0x18
		::System::String* SenderIcon; // 0x20
		::RPG::Client::TextID SenderName; // 0x28
		::System::UInt32 NextContentId; // 0x38
		::System::Int32 RelatedPrefabIndex; // 0x3C
		::System::Single Interval; // 0x40
		::System::Boolean OnlyShowText; // 0x44
		::System::Boolean OnlyShowImg; // 0x45
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x48
		::RPG::Client::TextID ContentText; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUIDATA__CTOR_OFFSET))(this);
		}
	};
}
