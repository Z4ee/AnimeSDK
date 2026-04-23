#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_0D9D6A15C706F376_OFFSET UNITYSDK_OFFSET(0x188CDCA0)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_E692A4BA07A923F5_OFFSET UNITYSDK_OFFSET(0x188CDE10)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188CDD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddHouguConfig_TypeDefinitionIndex = 18284;

	class FateActAddHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0D9D6A15C706F376(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddHouguConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddHouguConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_0D9D6A15C706F376_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E692A4BA07A923F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddHouguConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_E692A4BA07A923F5_OFFSET))(a1, a2);
		}
	};
}
