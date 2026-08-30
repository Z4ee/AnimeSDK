#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_D07039DD79E5A723_OFFSET UNITYSDK_OFFSET(0x1EE85D80)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_F5B11E79DF5C9DA7_OFFSET UNITYSDK_OFFSET(0x1EE85DD0)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE85DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLoseAllCoinThenGetCoinConfig_TypeDefinitionIndex = 19393;

	class RogueActLoseAllCoinThenGetCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D07039DD79E5A723(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_D07039DD79E5A723_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F5B11E79DF5C9DA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_F5B11E79DF5C9DA7_OFFSET))(a1, a2);
		}
	};
}
