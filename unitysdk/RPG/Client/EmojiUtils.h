#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EmojiConfigRow; }
namespace RPG::GameCore { class EmojiGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EMOJIUTILS_GETALLCHATEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x18D8AC70)
#define RPG_CLIENT_EMOJIUTILS_GETCHATEMOJIGROUPIDS_OFFSET UNITYSDK_OFFSET(0x18D8A540)
#define RPG_CLIENT_EMOJIUTILS_GETEMOJIIDBYGENDER_OFFSET UNITYSDK_OFFSET(0x18D8A340)
#define RPG_CLIENT_EMOJIUTILS_GETEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x18D8A860)
#define RPG_CLIENT_EMOJIUTILS_GETPLAYEREMOJIGENDER_OFFSET UNITYSDK_OFFSET(0x18D8A2A0)
#define RPG_CLIENT_EMOJIUTILS_ISEMOJIHASGENDER_OFFSET UNITYSDK_OFFSET(0x18D8A3B0)
#define RPG_CLIENT_EMOJIUTILS_ISEMOJIPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x18D8A430)
#define RPG_CLIENT_EMOJIUTILS__ISEMOJIGROUPINCHAT_OFFSET UNITYSDK_OFFSET(0x18D8A800)
#define RPG_CLIENT_EMOJIUTILS__ISEMOJIINPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x18D8A4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmojiUtils_TypeDefinitionIndex = 60442;

	class EmojiUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::EmojiGenderEnum GetPlayerEmojiGender()
		{
			return ((::RPG::GameCore::EmojiGenderEnum(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETPLAYEREMOJIGENDER_OFFSET))();
		}

		static ::System::UInt32 GetEmojiIDByGender(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETEMOJIIDBYGENDER_OFFSET))(a1);
		}

		static ::System::Boolean IsEmojiHasGender(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_ISEMOJIHASGENDER_OFFSET))(a1);
		}

		static ::System::Boolean IsEmojiPlayerGender(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_ISEMOJIPLAYERGENDER_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetChatEmojiGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETCHATEMOJIGROUPIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetEmojiIDs(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETEMOJIIDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllChatEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETALLCHATEMOJIIDS_OFFSET))();
		}

		static ::System::Boolean _IsEmojiGroupInChat(::RPG::GameCore::EmojiGroupRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EmojiGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS__ISEMOJIGROUPINCHAT_OFFSET))(a1);
		}

		static ::System::Boolean _IsEmojiInPlayerGender(::RPG::GameCore::EmojiConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS__ISEMOJIINPLAYERGENDER_OFFSET))(a1);
		}
	};
}
