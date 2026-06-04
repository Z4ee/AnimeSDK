#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_METHOD_6_03D73C700B4C6A7C_OFFSET UNITYSDK_OFFSET(0x19AF0830)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_METHOD_6_A901AC9DC4027731_OFFSET UNITYSDK_OFFSET(0x19AF0A50)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF0970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRemoveAttributeByCategoryConfig_TypeDefinitionIndex = 18736;

	class RogueActPersonaRemoveAttributeByCategoryConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_03D73C700B4C6A7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_METHOD_6_03D73C700B4C6A7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A901AC9DC4027731(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRemoveAttributeByCategoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEATTRIBUTEBYCATEGORYCONFIG_METHOD_6_A901AC9DC4027731_OFFSET))(a1, a2);
		}
	};
}
