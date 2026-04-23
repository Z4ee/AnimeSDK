#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterOutfitPart; }

#define RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG_METHOD_2_16DC61B456E6CC37_OFFSET UNITYSDK_OFFSET(0x187D4A10)
#define RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x187D4AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitPartConfig_TypeDefinitionIndex = 16593;

	class CharacterOutfitPartConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterOutfitPart*>* OutfitParts; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_16DC61B456E6CC37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterOutfitPartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterOutfitPartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITPARTCONFIG_METHOD_2_16DC61B456E6CC37_OFFSET))(a1, a2);
		}
	};
}
