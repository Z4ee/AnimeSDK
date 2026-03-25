#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_6EAFFD47A1CFCEAD_OFFSET UNITYSDK_OFFSET(0x1720A8E0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_FF7F12B290030894_OFFSET UNITYSDK_OFFSET(0x1720A9A0)
#define RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1720A980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetPlayerToMusicFallAction_TypeDefinitionIndex = 17218;

	class FiveDimSetPlayerToMusicFallAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6EAFFD47A1CFCEAD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_6EAFFD47A1CFCEAD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF7F12B290030894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimSetPlayerToMusicFallAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETPLAYERTOMUSICFALLACTION_METHOD_3_FF7F12B290030894_OFFSET))(a1, a2);
		}
	};
}
