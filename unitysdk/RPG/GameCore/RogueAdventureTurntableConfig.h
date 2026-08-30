#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_METHOD_3_944E3DDC60398E2E_OFFSET UNITYSDK_OFFSET(0x1D3BDC30)
#define RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_METHOD_3_AE4F95DA51CD5FEA_OFFSET UNITYSDK_OFFSET(0x1D3BD430)
#define RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BD420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureTurntableConfig_TypeDefinitionIndex = 17682;

	class RogueAdventureTurntableConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_944E3DDC60398E2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureTurntableConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureTurntableConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_METHOD_3_944E3DDC60398E2E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AE4F95DA51CD5FEA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureTurntableConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureTurntableConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURETURNTABLECONFIG_METHOD_3_AE4F95DA51CD5FEA_OFFSET))(a1, a2);
		}
	};
}
