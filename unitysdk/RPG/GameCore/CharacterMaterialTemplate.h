#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERMATERIALTEMPLATE_METHOD_2_A917FB706A961AF0_OFFSET UNITYSDK_OFFSET(0x1CF97ED0)
#define RPG_GAMECORE_CHARACTERMATERIALTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF97F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialTemplate_TypeDefinitionIndex = 17250;

	class CharacterMaterialTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALTEMPLATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A917FB706A961AF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterMaterialTemplate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterMaterialTemplate*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERMATERIALTEMPLATE_METHOD_2_A917FB706A961AF0_OFFSET))(a1, a2);
		}
	};
}
