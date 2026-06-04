#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_6_5FD4B69A2EC441A5_OFFSET UNITYSDK_OFFSET(0x1970B1F0)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_6_FFA14217EDC64736_OFFSET UNITYSDK_OFFSET(0x1970B360)
#define RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1970B2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddMasterAffixByWeightMapConfig_TypeDefinitionIndex = 18243;

	class FateActAddMasterAffixByWeightMapConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5FD4B69A2EC441A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_6_5FD4B69A2EC441A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FFA14217EDC64736(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddMasterAffixByWeightMapConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDMASTERAFFIXBYWEIGHTMAPCONFIG_METHOD_6_FFA14217EDC64736_OFFSET))(a1, a2);
		}
	};
}
