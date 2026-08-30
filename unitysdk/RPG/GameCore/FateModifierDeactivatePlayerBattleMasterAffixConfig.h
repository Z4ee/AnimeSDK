#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_METHOD_3_0B297A2A12DAD613_OFFSET UNITYSDK_OFFSET(0x1D08D520)
#define RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_METHOD_3_6F330D0F9580FD4F_OFFSET UNITYSDK_OFFSET(0x1D08D4D0)
#define RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08D510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierDeactivatePlayerBattleMasterAffixConfig_TypeDefinitionIndex = 19039;

	class FateModifierDeactivatePlayerBattleMasterAffixConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F330D0F9580FD4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_METHOD_3_6F330D0F9580FD4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0B297A2A12DAD613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_METHOD_3_0B297A2A12DAD613_OFFSET))(a1, a2);
		}
	};
}
