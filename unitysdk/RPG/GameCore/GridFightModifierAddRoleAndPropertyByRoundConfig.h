#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_32BD01B5E5E60E0C_OFFSET UNITYSDK_OFFSET(0x1D158310)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_820D3D91F05C6590_OFFSET UNITYSDK_OFFSET(0x1D1582C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRoleAndPropertyByRoundConfig_TypeDefinitionIndex = 19156;

	class GridFightModifierAddRoleAndPropertyByRoundConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_820D3D91F05C6590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_820D3D91F05C6590_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32BD01B5E5E60E0C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddRoleAndPropertyByRoundConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDROLEANDPROPERTYBYROUNDCONFIG_METHOD_3_32BD01B5E5E60E0C_OFFSET))(a1, a2);
		}
	};
}
