#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_DA711B0BA755A7AE_OFFSET UNITYSDK_OFFSET(0x1E0CC0E0)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_F472730998E9796A_OFFSET UNITYSDK_OFFSET(0x1E0CC130)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CC120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddTriggerHouguSelectCountConfig_TypeDefinitionIndex = 19015;

	class FateActAddTriggerHouguSelectCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DA711B0BA755A7AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_DA711B0BA755A7AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F472730998E9796A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_METHOD_6_F472730998E9796A_OFFSET))(a1, a2);
		}
	};
}
