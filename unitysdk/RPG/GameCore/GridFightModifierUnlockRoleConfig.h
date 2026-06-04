#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_1F47EA3CA3DE4BFB_OFFSET UNITYSDK_OFFSET(0x197F4930)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_B1119BFE93F5FE72_OFFSET UNITYSDK_OFFSET(0x197F4A00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197F49B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierUnlockRoleConfig_TypeDefinitionIndex = 18473;

	class GridFightModifierUnlockRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F47EA3CA3DE4BFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_1F47EA3CA3DE4BFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B1119BFE93F5FE72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierUnlockRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierUnlockRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKROLECONFIG_METHOD_3_B1119BFE93F5FE72_OFFSET))(a1, a2);
		}
	};
}
