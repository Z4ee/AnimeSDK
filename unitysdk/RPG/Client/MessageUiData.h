#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGEUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBFE7080)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUiData_TypeDefinitionIndex = 57554;

	class MessageUiData : public ::System::Object
	{
	public:
		::System::String* ContentImg; // 0x10
		::System::String* SenderIcon; // 0x18
		::System::String* SelfSenderName; // 0x20
		::System::Single Interval; // 0x28
		::System::Boolean OnlyShowText; // 0x2C
		::System::Boolean OnlyShowImg; // 0x2D
		::System::UInt32 NextContentId; // 0x30
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x34
		::System::Int32 RelatedPrefabIndex; // 0x38
		::RPG::Client::TextID SenderName; // 0x40
		::RPG::Client::TextID ContentText; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUIDATA__CTOR_OFFSET))(this);
		}
	};
}
