#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERSURVIVELETHALDAMAGECONFIG_METHOD_3_22540663F8271BA0_OFFSET UNITYSDK_OFFSET(0x19712DC0)
#define RPG_GAMECORE_FATEMODIFIERSURVIVELETHALDAMAGECONFIG_METHOD_3_520F9F63643A7779_OFFSET UNITYSDK_OFFSET(0x19711C10)
#define RPG_GAMECORE_FATEMODIFIERSURVIVELETHALDAMAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19711BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierSurviveLethalDamageConfig_TypeDefinitionIndex = 18288;

	class FateModifierSurviveLethalDamageConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSURVIVELETHALDAMAGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22540663F8271BA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierSurviveLethalDamageConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierSurviveLethalDamageConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSURVIVELETHALDAMAGECONFIG_METHOD_3_22540663F8271BA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_520F9F63643A7779(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierSurviveLethalDamageConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierSurviveLethalDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERSURVIVELETHALDAMAGECONFIG_METHOD_3_520F9F63643A7779_OFFSET))(a1, a2);
		}
	};
}
