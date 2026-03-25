#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG_METHOD_2_C0A663CC4D6186AB_OFFSET UNITYSDK_OFFSET(0x1706DCC0)
#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1706DD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialPropertyTemplateConfig_TypeDefinitionIndex = 16026;

	class CharacterMaterialPropertyTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C0A663CC4D6186AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterMaterialPropertyTemplateConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterMaterialPropertyTemplateConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATECONFIG_METHOD_2_C0A663CC4D6186AB_OFFSET))(a1, a2);
		}
	};
}
