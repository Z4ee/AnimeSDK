#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F7D750)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F7DD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedAudioLanguageRow_TypeDefinitionIndex = 11542;

	class AllowedAudioLanguageRow : public ::System::Object
	{
	public:
		::System::String* WwiseLanguageKey; // 0x10
		::System::String* AudioLanguageKey; // 0x18
		::System::UInt32 AudioTrackIndex; // 0x20
		::RPG::Client::TextID ShowString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AllowedAudioLanguageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AllowedAudioLanguageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
