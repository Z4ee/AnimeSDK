#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TAROTBOOKREVEALEDICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFCB00)
#define RPG_GAMECORE_TAROTBOOKREVEALEDICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFCC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookRevealedIconRow_TypeDefinitionIndex = 14435;

	class TarotBookRevealedIconRow : public ::System::Object
	{
	public:
		::System::String* NewRectIconPath; // 0x10
		::System::String* NewRoundIconPath; // 0x18
		::System::UInt32 UnlockID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookRevealedIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookRevealedIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKREVEALEDICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
