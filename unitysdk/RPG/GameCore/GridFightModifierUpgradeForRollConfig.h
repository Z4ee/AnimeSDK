#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_METHOD_3_39483B27109DC67F_OFFSET UNITYSDK_OFFSET(0x197F4AF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_METHOD_3_BF27535F54412D96_OFFSET UNITYSDK_OFFSET(0x197F4BC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F4B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUpgradeForRollConfig_TypeDefinitionIndex = 18423;

	class GridFightModifierUpgradeForRollConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_39483B27109DC67F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_METHOD_3_39483B27109DC67F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BF27535F54412D96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUpgradeForRollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUPGRADEFORROLLCONFIG_METHOD_3_BF27535F54412D96_OFFSET))(a1, a2);
		}
	};
}
