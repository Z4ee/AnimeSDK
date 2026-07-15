#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_B1119BFE93F5FE72_OFFSET UNITYSDK_OFFSET(0x1D06B5D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_CB94255503E58896_OFFSET UNITYSDK_OFFSET(0x1D06B580)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06B5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUnlockRoleConfig_TypeDefinitionIndex = 18723;

	class GridFightModifierUnlockRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CB94255503E58896(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_CB94255503E58896_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1119BFE93F5FE72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUnlockRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_B1119BFE93F5FE72_OFFSET))(a1, a2);
		}
	};
}
