#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_METHOD_3_61AA773987A237A0_OFFSET UNITYSDK_OFFSET(0x197E96D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_METHOD_3_91661038F3B59379_OFFSET UNITYSDK_OFFSET(0x197E97A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E9750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAugmentNodeBanEnemyDifficultyConfig_TypeDefinitionIndex = 18481;

	class GridFightModifierAugmentNodeBanEnemyDifficultyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_61AA773987A237A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_METHOD_3_61AA773987A237A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91661038F3B59379(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAugmentNodeBanEnemyDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUGMENTNODEBANENEMYDIFFICULTYCONFIG_METHOD_3_91661038F3B59379_OFFSET))(a1, a2);
		}
	};
}
