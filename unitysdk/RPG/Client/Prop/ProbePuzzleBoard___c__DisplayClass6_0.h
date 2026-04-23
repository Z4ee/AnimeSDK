#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ProbePuzzleBoard; }
namespace RPG::Client::Prop { class ProbePuzzleItem; }

#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAEAA710)
#define RPG_CLIENT_PROP_PROBEPUZZLEBOARD___C__DISPLAYCLASS6_0___ONMODEPROBETRIGGERED_B__0_OFFSET UNITYSDK_OFFSET(0xAEABDB0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleBoard___c__DisplayClass6_0_TypeDefinitionIndex = 72275;

	class ProbePuzzleBoard___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ProbePuzzleBoard* __4__this; // 0x10
		::RPG::Client::Prop::ProbePuzzleItem* puzzleProbe; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnModeProbeTriggered_b__0(::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEBOARD___C__DISPLAYCLASS6_0___ONMODEPROBETRIGGERED_B__0_OFFSET))(this, length);
		}
	};
}
