#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEGAMETARGETSELECTORCONFIG_METHOD_3_B380D52FD556E7CD_OFFSET UNITYSDK_OFFSET(0x1D0FDB20)
#define RPG_GAMECORE_CAKERACEGAMETARGETSELECTORCONFIG_METHOD_3_F56B28BE09E0EF68_OFFSET UNITYSDK_OFFSET(0x1D102060)
#define RPG_GAMECORE_CAKERACEGAMETARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FDB10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGameTargetSelectorConfig_TypeDefinitionIndex = 18175;

	class CakeRaceGameTargetSelectorConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMETARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F56B28BE09E0EF68(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceGameTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceGameTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMETARGETSELECTORCONFIG_METHOD_3_F56B28BE09E0EF68_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B380D52FD556E7CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceGameTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceGameTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMETARGETSELECTORCONFIG_METHOD_3_B380D52FD556E7CD_OFFSET))(a1, a2);
		}
	};
}
