#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19475040)
#define RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194756A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AllowedAudioLanguageRow_TypeDefinitionIndex = 12037;

	class AllowedAudioLanguageRow : public ::System::Object
	{
	public:
		::System::String* AudioLanguageKey; // 0x10
		::System::String* WwiseLanguageKey; // 0x18
		::System::UInt32 AudioTrackIndex; // 0x20
		::RPG::Client::TextID ShowString; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AllowedAudioLanguageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AllowedAudioLanguageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLOWEDAUDIOLANGUAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
