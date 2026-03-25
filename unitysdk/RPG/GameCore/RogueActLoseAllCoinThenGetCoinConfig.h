#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_45140A48DCB4D082_OFFSET UNITYSDK_OFFSET(0x175B9040)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_F5B11E79DF5C9DA7_OFFSET UNITYSDK_OFFSET(0x175B9260)
#define RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B9180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLoseAllCoinThenGetCoinConfig_TypeDefinitionIndex = 17978;

	class RogueActLoseAllCoinThenGetCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_45140A48DCB4D082(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_45140A48DCB4D082_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F5B11E79DF5C9DA7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLoseAllCoinThenGetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLOSEALLCOINTHENGETCOINCONFIG_METHOD_6_F5B11E79DF5C9DA7_OFFSET))(a1, a2);
		}
	};
}
