#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE_METHOD_2_1AC4D3E5F0D754F9_OFFSET UNITYSDK_OFFSET(0x1D123090)
#define RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1230D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialPropertyTemplate_TypeDefinitionIndex = 17251;

	class CharacterMaterialPropertyTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_1AC4D3E5F0D754F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterMaterialPropertyTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterMaterialPropertyTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALPROPERTYTEMPLATE_METHOD_2_1AC4D3E5F0D754F9_OFFSET))(a1, a2);
		}
	};
}
