#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/OfflineMessageSenderType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGEUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x158101A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageUiData_TypeDefinitionIndex = 58816;

	class MessageUiData : public ::System::Object
	{
	public:
		::System::String* SenderIcon; // 0x10
		::System::String* ContentImg; // 0x18
		::System::String* SelfSenderName; // 0x20
		::System::Boolean OnlyShowImg; // 0x28
		::System::Boolean OnlyShowText; // 0x29
		::System::Single Interval; // 0x2C
		::System::UInt32 NextContentId; // 0x30
		::RPG::Client::TextID SenderName; // 0x38
		::System::Int32 RelatedPrefabIndex; // 0x48
		::RPG::GameCore::OfflineMessageSenderType SenderType; // 0x4C
		::RPG::Client::TextID ContentText; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEUIDATA__CTOR_OFFSET))(this);
		}
	};
}
