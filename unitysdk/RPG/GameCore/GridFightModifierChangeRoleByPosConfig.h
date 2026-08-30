#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_METHOD_3_A7F90BE93F930999_OFFSET UNITYSDK_OFFSET(0x1EE6CCD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_METHOD_3_DE52AA66D1F1C895_OFFSET UNITYSDK_OFFSET(0x1EE6CC80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6CCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierChangeRoleByPosConfig_TypeDefinitionIndex = 19222;

	class GridFightModifierChangeRoleByPosConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DE52AA66D1F1C895(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_METHOD_3_DE52AA66D1F1C895_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A7F90BE93F930999(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierChangeRoleByPosConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERCHANGEROLEBYPOSCONFIG_METHOD_3_A7F90BE93F930999_OFFSET))(a1, a2);
		}
	};
}
