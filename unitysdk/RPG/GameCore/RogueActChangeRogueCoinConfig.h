#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_510A1A5F6C66461A_OFFSET UNITYSDK_OFFSET(0x175B3230)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_E1DFB6659B4885BF_OFFSET UNITYSDK_OFFSET(0x175B3450)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B3370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinConfig_TypeDefinitionIndex = 17974;

	class RogueActChangeRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_510A1A5F6C66461A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_510A1A5F6C66461A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E1DFB6659B4885BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_METHOD_6_E1DFB6659B4885BF_OFFSET))(a1, a2);
		}
	};
}
