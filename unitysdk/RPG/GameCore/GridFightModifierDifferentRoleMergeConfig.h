#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_04A054B02D9A3B20_OFFSET UNITYSDK_OFFSET(0x197F14A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_345BEDAF99AD96F9_OFFSET UNITYSDK_OFFSET(0x197EB3F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EB3A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDifferentRoleMergeConfig_TypeDefinitionIndex = 18487;

	class GridFightModifierDifferentRoleMergeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04A054B02D9A3B20(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_04A054B02D9A3B20_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_345BEDAF99AD96F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_345BEDAF99AD96F9_OFFSET))(a1, a2);
		}
	};
}
