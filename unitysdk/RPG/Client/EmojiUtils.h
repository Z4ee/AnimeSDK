#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EmojiGenderEnum.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class EmojiConfigRow; }
namespace RPG::GameCore { class EmojiGroupRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EMOJIUTILS_GETALLCHATEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x95FCB10)
#define RPG_CLIENT_EMOJIUTILS_GETCHATEMOJIGROUPIDS_OFFSET UNITYSDK_OFFSET(0x95FC3D0)
#define RPG_CLIENT_EMOJIUTILS_GETEMOJIIDBYGENDER_OFFSET UNITYSDK_OFFSET(0x95FC1D0)
#define RPG_CLIENT_EMOJIUTILS_GETEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x95FC6E0)
#define RPG_CLIENT_EMOJIUTILS_GETPLAYEREMOJIGENDER_OFFSET UNITYSDK_OFFSET(0x95FC130)
#define RPG_CLIENT_EMOJIUTILS_ISEMOJIHASGENDER_OFFSET UNITYSDK_OFFSET(0x95FC240)
#define RPG_CLIENT_EMOJIUTILS_ISEMOJIPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x95FC2C0)
#define RPG_CLIENT_EMOJIUTILS__ISEMOJIGROUPINCHAT_OFFSET UNITYSDK_OFFSET(0x95FC680)
#define RPG_CLIENT_EMOJIUTILS__ISEMOJIINPLAYERGENDER_OFFSET UNITYSDK_OFFSET(0x95FC370)

namespace RPG::Client
{
	inline static constexpr unsigned int EmojiUtils_TypeDefinitionIndex = 51315;

	class EmojiUtils : public ::System::Object
	{
	public:
		static ::RPG::GameCore::EmojiGenderEnum GetPlayerEmojiGender()
		{
			return ((::RPG::GameCore::EmojiGenderEnum(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETPLAYEREMOJIGENDER_OFFSET))();
		}

		static ::System::UInt32 GetEmojiIDByGender(::System::UInt32 emojiID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETEMOJIIDBYGENDER_OFFSET))(emojiID);
		}

		static ::System::Boolean IsEmojiHasGender(::System::UInt32 emojiID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_ISEMOJIHASGENDER_OFFSET))(emojiID);
		}

		static ::System::Boolean IsEmojiPlayerGender(::System::UInt32 emojiID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_ISEMOJIPLAYERGENDER_OFFSET))(emojiID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetChatEmojiGroupIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETCHATEMOJIGROUPIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetEmojiIDs(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETEMOJIIDS_OFFSET))(groupID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllChatEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS_GETALLCHATEMOJIIDS_OFFSET))();
		}

		static ::System::Boolean _IsEmojiGroupInChat(::RPG::GameCore::EmojiGroupRow* row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EmojiGroupRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS__ISEMOJIGROUPINCHAT_OFFSET))(row);
		}

		static ::System::Boolean _IsEmojiInPlayerGender(::RPG::GameCore::EmojiConfigRow* row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EmojiConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EMOJIUTILS__ISEMOJIINPLAYERGENDER_OFFSET))(row);
		}
	};
}
