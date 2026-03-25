#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_6_25E8B5807A696C5B_OFFSET UNITYSDK_OFFSET(0x17254BD0)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_6_ACEC4D753277E177_OFFSET UNITYSDK_OFFSET(0x17254A10)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17254B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasPortalBuffConfig_TypeDefinitionIndex = 17752;

	class GridFightCondCheckHasPortalBuffConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_ACEC4D753277E177(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_6_ACEC4D753277E177_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_25E8B5807A696C5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondCheckHasPortalBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASPORTALBUFFCONFIG_METHOD_6_25E8B5807A696C5B_OFFSET))(a1, a2);
		}
	};
}
