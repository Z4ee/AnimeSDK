#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0xD6A61D0)
#define RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK_GET_SUGGESTIONS_OFFSET UNITYSDK_OFFSET(0xD6A6380)
#define RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD6A6170)
#define RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xD6A61C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentSuggestionBlock_TypeDefinitionIndex = 63330;

	class MessageContentSuggestionBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* _Suggestions_k__BackingField; // 0x18

		::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK__CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_Suggestions()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTSUGGESTIONBLOCK_GET_SUGGESTIONS_OFFSET))(this);
		}
	};
}
