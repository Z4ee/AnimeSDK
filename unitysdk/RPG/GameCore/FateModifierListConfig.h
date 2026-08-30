#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERLISTCONFIG_METHOD_2_D8D869902EEF52ED_OFFSET UNITYSDK_OFFSET(0x1D08D650)
#define RPG_GAMECORE_FATEMODIFIERLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierListConfig_TypeDefinitionIndex = 19027;

	class FateModifierListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D8D869902EEF52ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERLISTCONFIG_METHOD_2_D8D869902EEF52ED_OFFSET))(a1, a2);
		}
	};
}
