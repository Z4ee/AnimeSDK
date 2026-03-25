#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_32BD01B5E5E60E0C_OFFSET UNITYSDK_OFFSET(0x17260B10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_7E85B1EE44B7C555_OFFSET UNITYSDK_OFFSET(0x17260A40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17260AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleAndPropertyByRoundConfig_TypeDefinitionIndex = 17796;

	class GridFightModifierAddRoleAndPropertyByRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E85B1EE44B7C555(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_7E85B1EE44B7C555_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32BD01B5E5E60E0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_32BD01B5E5E60E0C_OFFSET))(a1, a2);
		}
	};
}
