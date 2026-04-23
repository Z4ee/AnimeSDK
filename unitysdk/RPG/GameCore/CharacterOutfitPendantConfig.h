#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterOutfitPendant; }

#define RPG_GAMECORE_CHARACTEROUTFITPENDANTCONFIG_METHOD_2_32B901CC29B464B0_OFFSET UNITYSDK_OFFSET(0x187D4CF0)
#define RPG_GAMECORE_CHARACTEROUTFITPENDANTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187D4DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPendantConfig_TypeDefinitionIndex = 16595;

	class CharacterOutfitPendantConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPendant*>* OutfitParts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPENDANTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_32B901CC29B464B0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOutfitPendantConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOutfitPendantConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPENDANTCONFIG_METHOD_2_32B901CC29B464B0_OFFSET))(a1, a2);
		}
	};
}
