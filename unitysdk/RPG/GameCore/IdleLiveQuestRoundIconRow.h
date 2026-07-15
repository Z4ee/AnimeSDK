#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B6985D0)
#define RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B698700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestRoundIconRow_TypeDefinitionIndex = 11332;

	class IdleLiveQuestRoundIconRow : public ::System::Object
	{
	public:
		::System::String* QuestRoundIconPath; // 0x10
		::System::UInt32 QuestID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveQuestRoundIconRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveQuestRoundIconRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTROUNDICONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
