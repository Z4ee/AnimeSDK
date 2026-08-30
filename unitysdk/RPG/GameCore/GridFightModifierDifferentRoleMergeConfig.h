#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_345BEDAF99AD96F9_OFFSET UNITYSDK_OFFSET(0x1D158C10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_C6469228F31DD0F5_OFFSET UNITYSDK_OFFSET(0x1D158BC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D158C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierDifferentRoleMergeConfig_TypeDefinitionIndex = 19262;

	class GridFightModifierDifferentRoleMergeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6469228F31DD0F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_C6469228F31DD0F5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_345BEDAF99AD96F9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierDifferentRoleMergeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERDIFFERENTROLEMERGECONFIG_METHOD_3_345BEDAF99AD96F9_OFFSET))(a1, a2);
		}
	};
}
