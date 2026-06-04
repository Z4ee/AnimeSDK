#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEBONUSEVENTCONFIG_METHOD_2_79ACCB5B16BFC955_OFFSET UNITYSDK_OFFSET(0x19B14650)
#define RPG_GAMECORE_ROGUEBONUSEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B14690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBonusEventConfig_TypeDefinitionIndex = 17014;

	class RogueBonusEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_79ACCB5B16BFC955(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueBonusEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBonusEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBONUSEVENTCONFIG_METHOD_2_79ACCB5B16BFC955_OFFSET))(a1, a2);
		}
	};
}
