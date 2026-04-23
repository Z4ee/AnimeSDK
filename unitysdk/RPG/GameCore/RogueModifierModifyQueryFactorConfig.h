#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_METHOD_3_592D491E14DCD0C9_OFFSET UNITYSDK_OFFSET(0x18D41F90)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_METHOD_3_85FFE01D84C957F0_OFFSET UNITYSDK_OFFSET(0x18D41EC0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyQueryFactorConfig_TypeDefinitionIndex = 17056;

	class RogueModifierModifyQueryFactorConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_85FFE01D84C957F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_METHOD_3_85FFE01D84C957F0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_592D491E14DCD0C9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyQueryFactorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYQUERYFACTORCONFIG_METHOD_3_592D491E14DCD0C9_OFFSET))(a1, a2);
		}
	};
}
