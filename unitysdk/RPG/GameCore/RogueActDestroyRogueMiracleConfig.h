#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_6_87CC7DF056437E93_OFFSET UNITYSDK_OFFSET(0x1D3B7260)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_6_EBD610D5D8E9A5CF_OFFSET UNITYSDK_OFFSET(0x1D3B7210)
#define RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B7250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActDestroyRogueMiracleConfig_TypeDefinitionIndex = 19376;

	class RogueActDestroyRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EBD610D5D8E9A5CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_6_EBD610D5D8E9A5CF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_87CC7DF056437E93(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActDestroyRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTDESTROYROGUEMIRACLECONFIG_METHOD_6_87CC7DF056437E93_OFFSET))(a1, a2);
		}
	};
}
