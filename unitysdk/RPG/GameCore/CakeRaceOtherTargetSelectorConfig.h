#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEOTHERTARGETSELECTORCONFIG_METHOD_3_72B5D59638031946_OFFSET UNITYSDK_OFFSET(0x1D1030E0)
#define RPG_GAMECORE_CAKERACEOTHERTARGETSELECTORCONFIG_METHOD_3_EE55E426AA47C637_OFFSET UNITYSDK_OFFSET(0x1D0FDC80)
#define RPG_GAMECORE_CAKERACEOTHERTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FDC70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceOtherTargetSelectorConfig_TypeDefinitionIndex = 18171;

	class CakeRaceOtherTargetSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOTHERTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_72B5D59638031946(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOTHERTARGETSELECTORCONFIG_METHOD_3_72B5D59638031946_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE55E426AA47C637(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceOtherTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEOTHERTARGETSELECTORCONFIG_METHOD_3_EE55E426AA47C637_OFFSET))(a1, a2);
		}
	};
}
