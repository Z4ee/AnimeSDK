#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_METHOD_3_378E78E44794EFA0_OFFSET UNITYSDK_OFFSET(0x1D15A350)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_METHOD_3_3A3657976D43161C_OFFSET UNITYSDK_OFFSET(0x1D15A3A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D15A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierProbCopyDressedRoleConfig_TypeDefinitionIndex = 19261;

	class GridFightModifierProbCopyDressedRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_378E78E44794EFA0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_METHOD_3_378E78E44794EFA0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3A3657976D43161C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierProbCopyDressedRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERPROBCOPYDRESSEDROLECONFIG_METHOD_3_3A3657976D43161C_OFFSET))(a1, a2);
		}
	};
}
