#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_METHOD_3_8F937604F58041EC_OFFSET UNITYSDK_OFFSET(0x1EE6C200)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_METHOD_3_E7A3E25A14FF2FF0_OFFSET UNITYSDK_OFFSET(0x1EE6C1B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6C1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddFakeRoleWithEquipConfig_TypeDefinitionIndex = 19141;

	class GridFightModifierAddFakeRoleWithEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7A3E25A14FF2FF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_METHOD_3_E7A3E25A14FF2FF0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8F937604F58041EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddFakeRoleWithEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDFAKEROLEWITHEQUIPCONFIG_METHOD_3_8F937604F58041EC_OFFSET))(a1, a2);
		}
	};
}
