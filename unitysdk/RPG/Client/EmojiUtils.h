#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EmojiConfigRow; }
namespace RPG::GameCore { class EmojiGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EMOJIUTILS_GETALLCHATEMOJIIDS_OFFSET UNITYSDK_OFFSET(0xCE9AE60)
#define RPG_CLIENT_EMOJIUTILS_GETCHATEMOJIGROUPIDS_OFFSET UNITYSDK_OFFSET(0xCE9A710)
#define RPG_CLIENT_EMOJIUTILS_GETEMOJIIDBYGENDER_OFFSET UNITYSDK_OFFSET(0xCE9A510)
#define RPG_CLIENT_EMOJIUTILS_GETEMOJIIDS_OFFSET UNITYSDK_OFFSET(0xCE9AA30)
#define RPG_CLIENT_EMOJIUTILS_GETPLAYEREMOJIGENDER_OFFSET UNITYSDK_OFFSET(0xCE9A470)
#define RPG_CLIENT_EMOJIUTILS_ISEMOJIHASGENDER_OFFSET UNITYSDK_OFFSET(0xCE9A580)
#define RPG_CLIENT_EMOJIUTILS_ISEMOJIPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0xCE9A600)
#define RPG_CLIENT_EMOJIUTILS__ISEMOJIGROUPINCHAT_OFFSET UNITYSDK_OFFSET(0xCE9A9D0)
#define RPG_CLIENT_EMOJIUTILS__ISEMOJIINPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0xCE9A6B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EmojiUtils_TypeDefinitionIndex = 63295;

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
