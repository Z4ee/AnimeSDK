#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_6_592AC72146B6EFE1_OFFSET UNITYSDK_OFFSET(0x175B80E0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_6_C49CD446119842AC_OFFSET UNITYSDK_OFFSET(0x175B7EC0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B8000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMiracleConfig_TypeDefinitionIndex = 17958;

	class RogueActGetRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C49CD446119842AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_6_C49CD446119842AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_592AC72146B6EFE1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMIRACLECONFIG_METHOD_6_592AC72146B6EFE1_OFFSET))(a1, a2);
		}
	};
}
