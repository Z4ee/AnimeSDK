#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_A901CDE10F3888D1_OFFSET UNITYSDK_OFFSET(0x1E0CBD80)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_E692A4BA07A923F5_OFFSET UNITYSDK_OFFSET(0x1E0CBDD0)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CBDC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddHouguConfig_TypeDefinitionIndex = 19016;

	class FateActAddHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A901CDE10F3888D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddHouguConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddHouguConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_A901CDE10F3888D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E692A4BA07A923F5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddHouguConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_METHOD_6_E692A4BA07A923F5_OFFSET))(a1, a2);
		}
	};
}
