#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATCONTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B27A20)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int EmojiChatContentData_TypeDefinitionIndex = 69402;

	class EmojiChatContentData : public ::System::Object
	{
	public:
		::System::String* Emoji; // 0x10
		::System::Int32 EmojiTextNum; // 0x18
		::RPG::Client::TextID SenderName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATCONTENTDATA__CTOR_OFFSET))(this);
		}
	};
}
