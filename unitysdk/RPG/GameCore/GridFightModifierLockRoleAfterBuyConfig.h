#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEAFTERBUYCONFIG_METHOD_3_BBE80D2BAAEE3E23_OFFSET UNITYSDK_OFFSET(0x1EE6E360)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEAFTERBUYCONFIG_METHOD_3_E128F1C8106534A7_OFFSET UNITYSDK_OFFSET(0x1EE6E3B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEAFTERBUYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6E3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLockRoleAfterBuyConfig_TypeDefinitionIndex = 19122;

	class GridFightModifierLockRoleAfterBuyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEAFTERBUYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBE80D2BAAEE3E23(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLockRoleAfterBuyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLockRoleAfterBuyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEAFTERBUYCONFIG_METHOD_3_BBE80D2BAAEE3E23_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E128F1C8106534A7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierLockRoleAfterBuyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierLockRoleAfterBuyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOCKROLEAFTERBUYCONFIG_METHOD_3_E128F1C8106534A7_OFFSET))(a1, a2);
		}
	};
}
