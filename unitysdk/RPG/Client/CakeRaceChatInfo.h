#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceChatEmojiDataItem; }
namespace RPG::Client { class CakeRaceChatMessageDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACECHATINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB492840)
#define RPG_CLIENT_CAKERACECHATINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4931A0)
#define RPG_CLIENT_CAKERACECHATINFO_GETALLEMOJIS_OFFSET UNITYSDK_OFFSET(0xB493E40)
#define RPG_CLIENT_CAKERACECHATINFO_GETCATSPECIALMESSAGES_OFFSET UNITYSDK_OFFSET(0xB493370)
#define RPG_CLIENT_CAKERACECHATINFO_GETEMOJIDATAITEM_OFFSET UNITYSDK_OFFSET(0xB494160)
#define RPG_CLIENT_CAKERACECHATINFO_GETMESSAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0xB4940B0)
#define RPG_CLIENT_CAKERACECHATINFO_GETNORMALMESSAGES_OFFSET UNITYSDK_OFFSET(0xB493C10)
#define RPG_CLIENT_CAKERACECHATINFO_GETPLAYERUSEEMOJIS_OFFSET UNITYSDK_OFFSET(0xB493E80)
#define RPG_CLIENT_CAKERACECHATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB492A00)
#define RPG_CLIENT_CAKERACECHATINFO__INITEMOJIS_OFFSET UNITYSDK_OFFSET(0xB492EA0)
#define RPG_CLIENT_CAKERACECHATINFO__INITMESSAGES_OFFSET UNITYSDK_OFFSET(0xB492B80)
#define RPG_CLIENT_CAKERACECHATINFO__INIT_OFFSET UNITYSDK_OFFSET(0xB492B30)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatInfo_TypeDefinitionIndex = 58984;

	class CakeRaceChatInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceChatMessageDataItem*>* _MessageDict; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>* _NormalMessageList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>* _EmojiList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceChatEmojiDataItem*>* _EmojiDict; // 0x28

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

		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>* GetCatSpecialMessages(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETCATSPECIALMESSAGES_OFFSET))(this, a1);
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

		::RPG::Client::CakeRaceChatMessageDataItem* GetMessageDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceChatMessageDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETMESSAGEDATAITEM_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceChatEmojiDataItem* GetEmojiDataItem(::System::UInt32 a1)
		{
			return ((::RPG::Client::CakeRaceChatEmojiDataItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACECHATINFO_GETEMOJIDATAITEM_OFFSET))(this, a1);
		}
	};
}
