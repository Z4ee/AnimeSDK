#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETWEIGHTMAPCONFIG_METHOD_2_E745382E1704FA1E_OFFSET UNITYSDK_OFFSET(0x175DCDA0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETWEIGHTMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175DCDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetWeightMapConfig_TypeDefinitionIndex = 16442;

	class RogueAdventureWolfGunSpecialTargetWeightMapConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETWEIGHTMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E745382E1704FA1E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetWeightMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetWeightMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETWEIGHTMAPCONFIG_METHOD_2_E745382E1704FA1E_OFFSET))(a1, a2);
		}
	};
}
