#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SHOWADVENTURELEVELPAGE_METHOD_3_BE6D4EA930D9E547_OFFSET UNITYSDK_OFFSET(0x18E57800)
#define RPG_GAMECORE_SHOWADVENTURELEVELPAGE_METHOD_3_D6EEF687FAEE47B3_OFFSET UNITYSDK_OFFSET(0x18E576F0)
#define RPG_GAMECORE_SHOWADVENTURELEVELPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E577D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAdventureLevelPage_TypeDefinitionIndex = 19881;

	class ShowAdventureLevelPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWADVENTURELEVELPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6EEF687FAEE47B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAdventureLevelPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAdventureLevelPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWADVENTURELEVELPAGE_METHOD_3_D6EEF687FAEE47B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BE6D4EA930D9E547(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ShowAdventureLevelPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ShowAdventureLevelPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWADVENTURELEVELPAGE_METHOD_3_BE6D4EA930D9E547_OFFSET))(a1, a2);
		}
	};
}
