#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceChatEmojiDataItem; }
namespace RPG::Client { class CakeRaceChatMessageDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACECHATINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x9EF5BD0)
#define RPG_CLIENT_CAKERACECHATINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9EF6490)
#define RPG_CLIENT_CAKERACECHATINFO_GETALLEMOJIS_OFFSET UNITYSDK_OFFSET(0x9EF7220)
#define RPG_CLIENT_CAKERACECHATINFO_GETCATSPECIALMESSAGES_OFFSET UNITYSDK_OFFSET(0x9EF6680)
#define RPG_CLIENT_CAKERACECHATINFO_GETEMOJIDATAITEM_OFFSET UNITYSDK_OFFSET(0x9EF7570)
#define RPG_CLIENT_CAKERACECHATINFO_GETMESSAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x9EF7490)
#define RPG_CLIENT_CAKERACECHATINFO_GETNORMALMESSAGES_OFFSET UNITYSDK_OFFSET(0x9EF6FF0)
#define RPG_CLIENT_CAKERACECHATINFO_GETPLAYERUSEEMOJIS_OFFSET UNITYSDK_OFFSET(0x9EF7260)
#define RPG_CLIENT_CAKERACECHATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF5D90)
#define RPG_CLIENT_CAKERACECHATINFO__INITEMOJIS_OFFSET UNITYSDK_OFFSET(0x9EF6230)
#define RPG_CLIENT_CAKERACECHATINFO__INITMESSAGES_OFFSET UNITYSDK_OFFSET(0x9EF5F10)
#define RPG_CLIENT_CAKERACECHATINFO__INIT_OFFSET UNITYSDK_OFFSET(0x9EF5EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatInfo_TypeDefinitionIndex = 58068;

	class CakeRaceChatInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceChatMessageDataItem*>* _MessageDict; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>* _EmojiList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceChatEmojiDataItem*>* _EmojiDict; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>* _NormalMessageList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceChatInfo* Create()
		{
			return ((::RPG::Client::CakeRaceChatInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_CREATE_OFFSET))();
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO__INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitMessages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO__INITMESSAGES_OFFSET))(this);
		}

		::System::Void _InitEmojis()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO__INITEMOJIS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>* GetCatSpecialMessages(::System::Collections::Generic::List_1<::System::UInt32>* CatIDs)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETCATSPECIALMESSAGES_OFFSET))(this, CatIDs);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>* GetNormalMessages()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETNORMALMESSAGES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>* GetAllEmojis()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETALLEMOJIS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>* GetPlayerUseEmojis()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETPLAYERUSEEMOJIS_OFFSET))(this);
		}

		::RPG::Client::CakeRaceChatMessageDataItem* GetMessageDataItem(::System::UInt32 messageID)
		{
			return ((::RPG::Client::CakeRaceChatMessageDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETMESSAGEDATAITEM_OFFSET))(this, messageID);
		}

		::RPG::Client::CakeRaceChatEmojiDataItem* GetEmojiDataItem(::System::UInt32 emojiID)
		{
			return ((::RPG::Client::CakeRaceChatEmojiDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETEMOJIDATAITEM_OFFSET))(this, emojiID);
		}
	};
}
