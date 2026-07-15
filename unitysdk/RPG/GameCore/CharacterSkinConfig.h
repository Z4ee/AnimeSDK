#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterSkinResMapItem; }

#define RPG_GAMECORE_CHARACTERSKINCONFIG_METHOD_2_ABDADD775C184B9D_OFFSET UNITYSDK_OFFSET(0x1B72B370)
#define RPG_GAMECORE_CHARACTERSKINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B72B430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterSkinConfig_TypeDefinitionIndex = 15892;

	class CharacterSkinConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterSkinResMapItem*>* ResMapList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_ABDADD775C184B9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterSkinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterSkinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERSKINCONFIG_METHOD_2_ABDADD775C184B9D_OFFSET))(a1, a2);
		}
	};
}
