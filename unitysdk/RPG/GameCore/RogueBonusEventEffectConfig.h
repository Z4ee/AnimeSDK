#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG_METHOD_2_404883545EFC4BD4_OFFSET UNITYSDK_OFFSET(0x1C4A7EC0)
#define RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A7F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusEventEffectConfig_TypeDefinitionIndex = 17175;

	class RogueBonusEventEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_404883545EFC4BD4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueBonusEventEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBonusEventEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTEFFECTCONFIG_METHOD_2_404883545EFC4BD4_OFFSET))(a1, a2);
		}
	};
}
