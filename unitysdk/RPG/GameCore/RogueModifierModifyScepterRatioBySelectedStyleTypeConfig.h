#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_1A0A708B37BAA91C_OFFSET UNITYSDK_OFFSET(0x1EEFB5F0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_2636CE7FDE22F858_OFFSET UNITYSDK_OFFSET(0x1EEFB640)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFB630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyScepterRatioBySelectedStyleTypeConfig_TypeDefinitionIndex = 17524;

	class RogueModifierModifyScepterRatioBySelectedStyleTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1A0A708B37BAA91C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_1A0A708B37BAA91C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2636CE7FDE22F858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_2636CE7FDE22F858_OFFSET))(a1, a2);
		}
	};
}
