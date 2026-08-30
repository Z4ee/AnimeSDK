#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_C82B0AC5042AABA9_OFFSET UNITYSDK_OFFSET(0x1D0FD5E0)
#define RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_D0A8FD6A4FC3367B_OFFSET UNITYSDK_OFFSET(0x1D0FAA40)
#define RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0FD5D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceBaseTargetSelectorConfig_TypeDefinitionIndex = 18169;

	class CakeRaceBaseTargetSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D0A8FD6A4FC3367B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_D0A8FD6A4FC3367B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C82B0AC5042AABA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBASETARGETSELECTORCONFIG_METHOD_2_C82B0AC5042AABA9_OFFSET))(a1, a2);
		}
	};
}
