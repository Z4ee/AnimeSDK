#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelGraphComponent; }

#define RPG_GAMECORE_LEVELGRAPHCOMPONENT___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD26240)
#define RPG_GAMECORE_LEVELGRAPHCOMPONENT___C__DISPLAYCLASS0_0__STARTSUBLEVELGRAPH_B__0_OFFSET UNITYSDK_OFFSET(0x1DD283D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphComponent___c__DisplayClass0_0_TypeDefinitionIndex = 57791;

	class LevelGraphComponent___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelGraphComponent* __4__this; // 0x10
		::System::Int32 graphID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _StartSubLevelGraph_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGRAPHCOMPONENT___C__DISPLAYCLASS0_0__STARTSUBLEVELGRAPH_B__0_OFFSET))(this);
		}
	};
}
