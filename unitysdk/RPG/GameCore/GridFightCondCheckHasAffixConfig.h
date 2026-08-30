#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAFFIXCONFIG_METHOD_6_97D40177D648D5C6_OFFSET UNITYSDK_OFFSET(0x1D14D150)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAFFIXCONFIG_METHOD_6_9B5FA85681815E62_OFFSET UNITYSDK_OFFSET(0x1D14D1A0)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAFFIXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14D190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasAffixConfig_TypeDefinitionIndex = 19104;

	class GridFightCondCheckHasAffixConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAFFIXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_97D40177D648D5C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasAffixConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasAffixConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAFFIXCONFIG_METHOD_6_97D40177D648D5C6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_9B5FA85681815E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasAffixConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASAFFIXCONFIG_METHOD_6_9B5FA85681815E62_OFFSET))(a1, a2);
		}
	};
}
