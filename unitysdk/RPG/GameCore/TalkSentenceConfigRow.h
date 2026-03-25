#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x177A9C60)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177A9E80)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x177AAAD0)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET UNITYSDK_OFFSET(0x177AAB30)
#define RPG_GAMECORE_TALKSENTENCECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177AAB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigRow_TypeDefinitionIndex = 13941;

	class TalkSentenceConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::RPG::Client::TextID TextmapTalkSentenceName; // 0x18
		::RPG::Client::TextID TalkSentenceText; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMTABLEOFFSET_OFFSET))(this, offsetData);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TalkSentenceConfigRow* val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARYWITHOUTNEW_OFFSET))(array, val);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TalkSentenceConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TalkSentenceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
