#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_METHOD_3_C4A00E795624F277_OFFSET UNITYSDK_OFFSET(0x1D0FDDD0)
#define RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_METHOD_3_E5FB56A1DBC73EF2_OFFSET UNITYSDK_OFFSET(0x1D104AD0)
#define RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FDDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTopRankedCatSelectorConfig_TypeDefinitionIndex = 18178;

	class CakeRaceTopRankedCatSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::UInt32 CatNum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5FB56A1DBC73EF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_METHOD_3_E5FB56A1DBC73EF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C4A00E795624F277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceTopRankedCatSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETOPRANKEDCATSELECTORCONFIG_METHOD_3_C4A00E795624F277_OFFSET))(a1, a2);
		}
	};
}
