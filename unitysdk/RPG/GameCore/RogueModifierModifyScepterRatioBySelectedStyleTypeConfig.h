#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_2636CE7FDE22F858_OFFSET UNITYSDK_OFFSET(0x18D42850)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_D3BCBC02BC2B8681_OFFSET UNITYSDK_OFFSET(0x18D42780)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D42800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyScepterRatioBySelectedStyleTypeConfig_TypeDefinitionIndex = 16844;

	class RogueModifierModifyScepterRatioBySelectedStyleTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D3BCBC02BC2B8681(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_D3BCBC02BC2B8681_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2636CE7FDE22F858(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyScepterRatioBySelectedStyleTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYSCEPTERRATIOBYSELECTEDSTYLETYPECONFIG_METHOD_3_2636CE7FDE22F858_OFFSET))(a1, a2);
		}
	};
}
