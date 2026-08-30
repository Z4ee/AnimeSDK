#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_METHOD_6_0637346EB184E9CA_OFFSET UNITYSDK_OFFSET(0x1D08B790)
#define RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_METHOD_6_D1C9CE304A37938E_OFFSET UNITYSDK_OFFSET(0x1D08B740)
#define RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08B780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddExtraBuffSlotNumConfig_TypeDefinitionIndex = 19010;

	class FateActAddExtraBuffSlotNumConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D1C9CE304A37938E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_METHOD_6_D1C9CE304A37938E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_0637346EB184E9CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_METHOD_6_0637346EB184E9CA_OFFSET))(a1, a2);
		}
	};
}
