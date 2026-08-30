#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_CD0D7726B2D89FA0_OFFSET UNITYSDK_OFFSET(0x1EE6C7A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_FDD8474B97688A64_OFFSET UNITYSDK_OFFSET(0x1EE6C750)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6C790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddSameRoleUntilEndConfig_TypeDefinitionIndex = 19174;

	class GridFightModifierAddSameRoleUntilEndConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FDD8474B97688A64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_FDD8474B97688A64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD0D7726B2D89FA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddSameRoleUntilEndConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDSAMEROLEUNTILENDCONFIG_METHOD_3_CD0D7726B2D89FA0_OFFSET))(a1, a2);
		}
	};
}
