#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_METHOD_3_806AEC8F15FC2A83_OFFSET UNITYSDK_OFFSET(0x189BDE00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_METHOD_3_8B1D66E967632ECA_OFFSET UNITYSDK_OFFSET(0x189BDD30)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189BDDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierModifyEnemyDifficultyConfig_TypeDefinitionIndex = 18443;

	class GridFightModifierModifyEnemyDifficultyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B1D66E967632ECA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_METHOD_3_8B1D66E967632ECA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_806AEC8F15FC2A83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierModifyEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMODIFYENEMYDIFFICULTYCONFIG_METHOD_3_806AEC8F15FC2A83_OFFSET))(a1, a2);
		}
	};
}
