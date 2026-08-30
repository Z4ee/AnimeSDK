#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_349BE0BAA6D56377;

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF10B30)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0__GETALLDATABYTOURN_B__0_OFFSET UNITYSDK_OFFSET(0x1AF10E30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournDifficultyCompData___c__DisplayClass2_0_TypeDefinitionIndex = 67582;

	class RogueTournDifficultyCompData___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournMode tournMode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAllDataByTourn_b__0(::Class_1_349BE0BAA6D56377* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_349BE0BAA6D56377*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__DISPLAYCLASS2_0__GETALLDATABYTOURN_B__0_OFFSET))(this, a1);
		}
	};
}
