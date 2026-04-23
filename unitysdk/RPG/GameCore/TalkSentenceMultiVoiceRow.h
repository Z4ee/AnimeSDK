#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ED2960)
#define RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED2F50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceMultiVoiceRow_TypeDefinitionIndex = 14421;

	class TalkSentenceMultiVoiceRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDList; // 0x10
		::System::UInt32 TalkSentenceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TalkSentenceMultiVoiceRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkSentenceMultiVoiceRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCEMULTIVOICEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
