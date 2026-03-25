#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class OraclePuzzleBoard; }

#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS65_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1007B0)
#define RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS65_0___STARTPUZZLEPANELTRANSITION_B__0_OFFSET UNITYSDK_OFFSET(0xA101740)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int OraclePuzzleBoard___c__DisplayClass65_0_TypeDefinitionIndex = 64174;

	class OraclePuzzleBoard___c__DisplayClass65_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::OraclePuzzleBoard* __4__this; // 0x10
		::System::Int32 nextPanelIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS65_0__CTOR_OFFSET))(this);
		}

		::System::Void __StartPuzzlePanelTransition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ORACLEPUZZLEBOARD___C__DISPLAYCLASS65_0___STARTPUZZLEPANELTRANSITION_B__0_OFFSET))(this);
		}
	};
}
