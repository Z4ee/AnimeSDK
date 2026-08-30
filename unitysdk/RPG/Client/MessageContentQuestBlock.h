#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace RPG::Client { class QuestData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTENTQUESTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6A4D00)
#define RPG_CLIENT_MESSAGECONTENTQUESTBLOCK_GET_QUESTS_OFFSET UNITYSDK_OFFSET(0xD6A4E50)
#define RPG_CLIENT_MESSAGECONTENTQUESTBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD6A4CA0)
#define RPG_CLIENT_MESSAGECONTENTQUESTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A4CF0)
#define RPG_CLIENT_MESSAGECONTENTQUESTBLOCK__GETQUESTS_OFFSET UNITYSDK_OFFSET(0xD6A4EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentQuestBlock_TypeDefinitionIndex = 63329;

	class MessageContentQuestBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _QuestIDs; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTQUESTBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTQUESTBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTQUESTBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* get_Quests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTQUESTBLOCK_GET_QUESTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* _GetQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTQUESTBLOCK__GETQUESTS_OFFSET))(this);
		}
	};
}
