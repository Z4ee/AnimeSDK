#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfSelectEventMessageData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFSELECTEVENTMESSAGESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0xB900290)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfSelectEventMessageSequence_TypeDefinitionIndex = 59596;

	class ElfSelectEventMessageSequence : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfSelectEventMessageData*>* OptionList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ElfSelectEventMessageData*>* MessageList; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfSelectEventMessageSequence*>* OptionMessageSequenceList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFSELECTEVENTMESSAGESEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
