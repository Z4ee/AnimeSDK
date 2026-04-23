#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_6_1418D4B277F84EBF_OFFSET UNITYSDK_OFFSET(0x18CBED70)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_6_D509254B0BDCE9EA_OFFSET UNITYSDK_OFFSET(0x18CBEF90)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CBEEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinByRandomRangeConfig_TypeDefinitionIndex = 18624;

	class RogueActChangeRogueCoinByRandomRangeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_1418D4B277F84EBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_6_1418D4B277F84EBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D509254B0BDCE9EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinByRandomRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINBYRANDOMRANGECONFIG_METHOD_6_D509254B0BDCE9EA_OFFSET))(a1, a2);
		}
	};
}
