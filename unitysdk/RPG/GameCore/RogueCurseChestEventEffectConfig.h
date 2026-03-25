#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG_METHOD_2_5424454870640780_OFFSET UNITYSDK_OFFSET(0x175EF360)
#define RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175EF3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCurseChestEventEffectConfig_TypeDefinitionIndex = 16448;

	class RogueCurseChestEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5424454870640780(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCurseChestEventEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCurseChestEventEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECURSECHESTEVENTEFFECTCONFIG_METHOD_2_5424454870640780_OFFSET))(a1, a2);
		}
	};
}
