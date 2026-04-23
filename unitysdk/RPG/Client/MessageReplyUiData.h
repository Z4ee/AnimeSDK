#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TextReplyUiData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MESSAGEREPLYUIDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xA89AF80)
#define RPG_CLIENT_MESSAGEREPLYUIDATA_GET_REPLYTEXTS_OFFSET UNITYSDK_OFFSET(0xA89AF70)
#define RPG_CLIENT_MESSAGEREPLYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA89AFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageReplyUiData_TypeDefinitionIndex = 56768;

	class MessageReplyUiData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TextReplyUiData*>* _ReplyTexts_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEREPLYUIDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextReplyUiData*>* get_ReplyTexts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextReplyUiData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEREPLYUIDATA_GET_REPLYTEXTS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGEREPLYUIDATA_GET_COUNT_OFFSET))(this);
		}
	};
}
