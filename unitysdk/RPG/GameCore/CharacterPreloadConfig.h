#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_66946EF5A1A25AF1_OFFSET UNITYSDK_OFFSET(0x1D1273A0)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_D7B95D853E77BA89_OFFSET UNITYSDK_OFFSET(0x1D1273E0)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1273D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPreloadConfig_TypeDefinitionIndex = 16167;

	class CharacterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_66946EF5A1A25AF1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_66946EF5A1A25AF1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D7B95D853E77BA89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_D7B95D853E77BA89_OFFSET))(a1, a2);
		}
	};
}
