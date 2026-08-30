#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PILLARPUZZLEINTERACT_METHOD_3_265D1B8112A42D65_OFFSET UNITYSDK_OFFSET(0x1D32F720)
#define RPG_GAMECORE_PILLARPUZZLEINTERACT_METHOD_3_2BBE33D13B76C0E8_OFFSET UNITYSDK_OFFSET(0x1D32F650)
#define RPG_GAMECORE_PILLARPUZZLEINTERACT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32F710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PillarPuzzleInteract_TypeDefinitionIndex = 20139;

	class PillarPuzzleInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PILLARPUZZLEINTERACT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2BBE33D13B76C0E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PillarPuzzleInteract*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PillarPuzzleInteract*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PILLARPUZZLEINTERACT_METHOD_3_2BBE33D13B76C0E8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_265D1B8112A42D65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PillarPuzzleInteract* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PillarPuzzleInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PILLARPUZZLEINTERACT_METHOD_3_265D1B8112A42D65_OFFSET))(a1, a2);
		}
	};
}
