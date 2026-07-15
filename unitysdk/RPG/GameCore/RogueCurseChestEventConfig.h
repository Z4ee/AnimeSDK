#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG_METHOD_2_861C15C9D7CF85E9_OFFSET UNITYSDK_OFFSET(0x1C4AF130)
#define RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AF170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCurseChestEventConfig_TypeDefinitionIndex = 17180;

	class RogueCurseChestEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_861C15C9D7CF85E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCurseChestEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCurseChestEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTCONFIG_METHOD_2_861C15C9D7CF85E9_OFFSET))(a1, a2);
		}
	};
}
