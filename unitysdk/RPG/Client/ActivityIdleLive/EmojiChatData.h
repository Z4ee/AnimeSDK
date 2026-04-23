#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_981D4BAE18B257E9;
namespace RPG::Client::ActivityIdleLive { class EmojiChatContentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B27D30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_GETEMOJICHATCONTENTDATA_OFFSET UNITYSDK_OFFSET(0x9B27DE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9B27A30)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9B27A40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B27A50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__GETEMOJINUM_OFFSET UNITYSDK_OFFSET(0x9B27F10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__GETEMOJI_OFFSET UNITYSDK_OFFSET(0x9B27E90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__GETSENDERNAME_OFFSET UNITYSDK_OFFSET(0x9B28020)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int EmojiChatData_TypeDefinitionIndex = 69401;

	class EmojiChatData : public ::System::Object
	{
	public:
		::Class_1_981D4BAE18B257E9* _TextNumRandomRange; // 0x10
		::System::Collections::Generic::List_1<::System::String*>* _PossibleEmojis; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TextID>* _PossibleSenders; // 0x20
		::System::Single _Interval_k__BackingField; // 0x28
		::System::UInt32 _EmojiPhaseId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__CTOR_OFFSET))(this);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_GET_INTERVAL_OFFSET))(this);
		}

		::System::Void set_Interval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_SET_INTERVAL_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::EmojiChatContentData* GetEmojiChatContentData()
		{
			return ((::RPG::Client::ActivityIdleLive::EmojiChatContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA_GETEMOJICHATCONTENTDATA_OFFSET))(this);
		}

		::System::Int32 _GetEmojiNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__GETEMOJINUM_OFFSET))(this);
		}

		::System::String* _GetEmoji()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__GETEMOJI_OFFSET))(this);
		}

		::RPG::Client::TextID _GetSenderName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_EMOJICHATDATA__GETSENDERNAME_OFFSET))(this);
		}
	};
}
