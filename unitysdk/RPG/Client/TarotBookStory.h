#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TarotBookStory_IServerAgent; }
namespace RPG::GameCore { class TarotBookStoryRow; }

#define RPG_CLIENT_TAROTBOOKSTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC9E7AB0)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_CARDID_OFFSET UNITYSDK_OFFSET(0xC9EA1F0)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_CHARACTERID_OFFSET UNITYSDK_OFFSET(0xC9EA160)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_CLUELIST_OFFSET UNITYSDK_OFFSET(0xC9E2400)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_HASFINISHED_OFFSET UNITYSDK_OFFSET(0xC9D6C20)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_HASPRECONDITIONMET_OFFSET UNITYSDK_OFFSET(0xC9D6D20)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_HASUNLOCKED_OFFSET UNITYSDK_OFFSET(0xC9D6CC0)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_ID_OFFSET UNITYSDK_OFFSET(0xC9E1BE0)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xC9E1B30)
#define RPG_CLIENT_TAROTBOOKSTORY_GET_PRESTORYID_OFFSET UNITYSDK_OFFSET(0xC9EA1D0)
#define RPG_CLIENT_TAROTBOOKSTORY_MARKHASFINISHED_OFFSET UNITYSDK_OFFSET(0xC9D7B20)
#define RPG_CLIENT_TAROTBOOKSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EA210)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookStory_TypeDefinitionIndex = 63692;

	class TarotBookStory : public ::System::Object
	{
	public:
		::RPG::Client::TarotBookStory_IServerAgent* _ServerAgent; // 0x10
		::RPG::GameCore::TarotBookStoryRow* _Meta; // 0x18

		::System::Void _ctor(::RPG::GameCore::TarotBookStoryRow* a1, ::RPG::Client::TarotBookStory_IServerAgent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TarotBookStoryRow*, ::RPG::Client::TarotBookStory_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_PreStoryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_PRESTORYID_OFFSET))(this);
		}

		::System::UInt32 get_CardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_CARDID_OFFSET))(this);
		}

		::System::UInt32 get_CharacterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_CHARACTERID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ClueList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_CLUELIST_OFFSET))(this);
		}

		::System::Boolean get_HasUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_HASUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_HasPreconditionMet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_HASPRECONDITIONMET_OFFSET))(this);
		}

		::System::Boolean get_HasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_HASFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_GET_ISNEW_OFFSET))(this);
		}

		static ::RPG::Client::TarotBookStory* Create(::RPG::GameCore::TarotBookStoryRow* a1, ::RPG::Client::TarotBookStory_IServerAgent* a2)
		{
			return ((::RPG::Client::TarotBookStory*(*)(::RPG::GameCore::TarotBookStoryRow*, ::RPG::Client::TarotBookStory_IServerAgent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_CREATE_OFFSET))(a1, a2);
		}

		::System::Void MarkHasFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKSTORY_MARKHASFINISHED_OFFSET))(this);
		}
	};
}
