#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }

#define RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17CF6080)
#define RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS32_0__RETURNTOMAZE_B__0_OFFSET UNITYSDK_OFFSET(0x17CFFEC0)
#define RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS32_0__RETURNTOMAZE_B__1_OFFSET UNITYSDK_OFFSET(0x17CFFFE0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildModule___c__DisplayClass32_0_TypeDefinitionIndex = 61011;

	class EvolveBuildModule___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* gamePhase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReturnToMaze_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS32_0__RETURNTOMAZE_B__0_OFFSET))(this);
		}

		::System::Void _ReturnToMaze_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDMODULE___C__DISPLAYCLASS32_0__RETURNTOMAZE_B__1_OFFSET))(this);
		}
	};
}
