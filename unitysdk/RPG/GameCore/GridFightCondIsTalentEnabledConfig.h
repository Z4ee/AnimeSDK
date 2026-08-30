#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_METHOD_6_283874A4F172C7B3_OFFSET UNITYSDK_OFFSET(0x1D14D510)
#define RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_METHOD_6_DE9A4F5F317960EF_OFFSET UNITYSDK_OFFSET(0x1D14D4C0)
#define RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D14D500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondIsTalentEnabledConfig_TypeDefinitionIndex = 19107;

	class GridFightCondIsTalentEnabledConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DE9A4F5F317960EF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_METHOD_6_DE9A4F5F317960EF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_283874A4F172C7B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightCondIsTalentEnabledConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDISTALENTENABLEDCONFIG_METHOD_6_283874A4F172C7B3_OFFSET))(a1, a2);
		}
	};
}
