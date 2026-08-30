#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACESELFTARGETSELECTORCONFIG_METHOD_3_7E3566EF10E672AC_OFFSET UNITYSDK_OFFSET(0x1D104650)
#define RPG_GAMECORE_CAKERACESELFTARGETSELECTORCONFIG_METHOD_3_E183AF4E022E7CC1_OFFSET UNITYSDK_OFFSET(0x1D0FDD60)
#define RPG_GAMECORE_CAKERACESELFTARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FDD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceSelfTargetSelectorConfig_TypeDefinitionIndex = 18170;

	class CakeRaceSelfTargetSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESELFTARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7E3566EF10E672AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceSelfTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceSelfTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESELFTARGETSELECTORCONFIG_METHOD_3_7E3566EF10E672AC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E183AF4E022E7CC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceSelfTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceSelfTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACESELFTARGETSELECTORCONFIG_METHOD_3_E183AF4E022E7CC1_OFFSET))(a1, a2);
		}
	};
}
