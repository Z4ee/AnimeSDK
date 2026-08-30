#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_METHOD_3_692888DAA839BD8A_OFFSET UNITYSDK_OFFSET(0x1D158020)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_METHOD_3_CF9E589FD71593E6_OFFSET UNITYSDK_OFFSET(0x1D158070)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddMonsterDropByProbabilityConfig_TypeDefinitionIndex = 19160;

	class GridFightModifierAddMonsterDropByProbabilityConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_692888DAA839BD8A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_METHOD_3_692888DAA839BD8A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CF9E589FD71593E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAddMonsterDropByProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDMONSTERDROPBYPROBABILITYCONFIG_METHOD_3_CF9E589FD71593E6_OFFSET))(a1, a2);
		}
	};
}
