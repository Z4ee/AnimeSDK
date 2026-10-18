#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_4_55F144F5BF183CC9_OFFSET UNITYSDK_OFFSET(0x1D6BC850)
#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_4_769F38E2D462F574_OFFSET UNITYSDK_OFFSET(0x1D6BC7D0)
#define RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BC840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileDieAction_TypeDefinitionIndex = 18787;

	class FiveDimEvilSmileDieAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_769F38E2D462F574(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileDieAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_4_769F38E2D462F574_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_55F144F5BF183CC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileDieAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileDieAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILEDIEACTION_METHOD_4_55F144F5BF183CC9_OFFSET))(a1, a2);
		}
	};
}
