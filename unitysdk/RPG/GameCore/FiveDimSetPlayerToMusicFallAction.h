#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_4_C34F4DC351C14ED4_OFFSET UNITYSDK_OFFSET(0x1D6ACDF0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_4_CA9BC5844FB8C811_OFFSET UNITYSDK_OFFSET(0x1D6ACD20)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ACDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerToMusicFallAction_TypeDefinitionIndex = 18757;

	class FiveDimSetPlayerToMusicFallAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IsEnter; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_CA9BC5844FB8C811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_4_CA9BC5844FB8C811_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C34F4DC351C14ED4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_4_C34F4DC351C14ED4_OFFSET))(a1, a2);
		}
	};
}
