#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_6F65838A5FCF0309_OFFSET UNITYSDK_OFFSET(0x189B1540)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_CD0D7726B2D89FA0_OFFSET UNITYSDK_OFFSET(0x189B1610)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B15C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddSameRoleUntilEndConfig_TypeDefinitionIndex = 18429;

	class GridFightModifierAddSameRoleUntilEndConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6F65838A5FCF0309(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_6F65838A5FCF0309_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD0D7726B2D89FA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_CD0D7726B2D89FA0_OFFSET))(a1, a2);
		}
	};
}
