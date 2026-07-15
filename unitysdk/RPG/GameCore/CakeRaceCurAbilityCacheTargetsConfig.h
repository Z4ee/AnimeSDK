#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceBaseTargetSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_METHOD_3_4DF430BE75D27BDA_OFFSET UNITYSDK_OFFSET(0x1B2D01F0)
#define RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_METHOD_3_AD1508E6A6211DFB_OFFSET UNITYSDK_OFFSET(0x1B2CE260)
#define RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CE250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceCurAbilityCacheTargetsConfig_TypeDefinitionIndex = 17661;

	class CakeRaceCurAbilityCacheTargetsConfig : public ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4DF430BE75D27BDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_METHOD_3_4DF430BE75D27BDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AD1508E6A6211DFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CakeRaceCurAbilityCacheTargetsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECURABILITYCACHETARGETSCONFIG_METHOD_3_AD1508E6A6211DFB_OFFSET))(a1, a2);
		}
	};
}
