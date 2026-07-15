#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADETRAITEFFECTELATIONEQUIPCONFIG_METHOD_3_6FCA6CE199755B91_OFFSET UNITYSDK_OFFSET(0x1D06B820)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADETRAITEFFECTELATIONEQUIPCONFIG_METHOD_3_740A207FA851EBB5_OFFSET UNITYSDK_OFFSET(0x1D06B870)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADETRAITEFFECTELATIONEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeTraitEffectElationEquipConfig_TypeDefinitionIndex = 18730;

	class GridFightModifierUpgradeTraitEffectElationEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADETRAITEFFECTELATIONEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FCA6CE199755B91(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeTraitEffectElationEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeTraitEffectElationEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADETRAITEFFECTELATIONEQUIPCONFIG_METHOD_3_6FCA6CE199755B91_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_740A207FA851EBB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeTraitEffectElationEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeTraitEffectElationEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADETRAITEFFECTELATIONEQUIPCONFIG_METHOD_3_740A207FA851EBB5_OFFSET))(a1, a2);
		}
	};
}
