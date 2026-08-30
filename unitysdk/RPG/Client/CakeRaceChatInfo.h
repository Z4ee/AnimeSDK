#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeRaceChatEmojiDataItem; }
namespace RPG::Client { class CakeRaceChatMessageDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACECHATINFO_CREATE_OFFSET UNITYSDK_OFFSET(0x1C63ADA0)
#define RPG_CLIENT_CAKERACECHATINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C63B700)
#define RPG_CLIENT_CAKERACECHATINFO_GETALLEMOJIS_OFFSET UNITYSDK_OFFSET(0x1C63C3A0)
#define RPG_CLIENT_CAKERACECHATINFO_GETCATSPECIALMESSAGES_OFFSET UNITYSDK_OFFSET(0x1C63B8D0)
#define RPG_CLIENT_CAKERACECHATINFO_GETEMOJIDATAITEM_OFFSET UNITYSDK_OFFSET(0x1C63C6C0)
#define RPG_CLIENT_CAKERACECHATINFO_GETMESSAGEDATAITEM_OFFSET UNITYSDK_OFFSET(0x1C63C610)
#define RPG_CLIENT_CAKERACECHATINFO_GETNORMALMESSAGES_OFFSET UNITYSDK_OFFSET(0x1C63C170)
#define RPG_CLIENT_CAKERACECHATINFO_GETPLAYERUSEEMOJIS_OFFSET UNITYSDK_OFFSET(0x1C63C3E0)
#define RPG_CLIENT_CAKERACECHATINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C63AF60)
#define RPG_CLIENT_CAKERACECHATINFO__INITEMOJIS_OFFSET UNITYSDK_OFFSET(0x1C63B400)
#define RPG_CLIENT_CAKERACECHATINFO__INITMESSAGES_OFFSET UNITYSDK_OFFSET(0x1C63B0E0)
#define RPG_CLIENT_CAKERACECHATINFO__INIT_OFFSET UNITYSDK_OFFSET(0x1C63B090)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceChatInfo_TypeDefinitionIndex = 63103;

	class CakeRaceChatInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatEmojiDataItem*>* _EmojiList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceChatEmojiDataItem*>* _EmojiDict; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceChatMessageDataItem*>* _NormalMessageList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::CakeRaceChatMessageDataItem*>* _MessageDict; // 0x28

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
