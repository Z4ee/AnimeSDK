#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A13B20)
#define RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A13C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestRoundIconRow_TypeDefinitionIndex = 11185;

	class IdleLiveQuestRoundIconRow : public ::System::Object
	{
	public:
		::System::String* QuestRoundIconPath; // 0x10
		::System::UInt32 QuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveQuestRoundIconRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestRoundIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
