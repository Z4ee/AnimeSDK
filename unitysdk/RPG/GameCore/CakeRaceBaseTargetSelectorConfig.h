#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_C82B0AC5042AABA9_OFFSET UNITYSDK_OFFSET(0x1876DDB0)
#define RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_F2D127B12514FC7E_OFFSET UNITYSDK_OFFSET(0x187674A0)
#define RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1876DDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBaseTargetSelectorConfig_TypeDefinitionIndex = 17476;

	class CakeRaceBaseTargetSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F2D127B12514FC7E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_F2D127B12514FC7E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C82B0AC5042AABA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_C82B0AC5042AABA9_OFFSET))(a1, a2);
		}
	};
}
