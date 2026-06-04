#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_6_4837852A4036AC1D_OFFSET UNITYSDK_OFFSET(0x197D8640)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_6_4D84F746ECC9758E_OFFSET UNITYSDK_OFFSET(0x197D7BF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197D7B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionDelNpcAndLeaveEquipConfig_TypeDefinitionIndex = 18323;

	class GridFightActionDelNpcAndLeaveEquipConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_4837852A4036AC1D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_6_4837852A4036AC1D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_4D84F746ECC9758E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActionDelNpcAndLeaveEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONDELNPCANDLEAVEEQUIPCONFIG_METHOD_6_4D84F746ECC9758E_OFFSET))(a1, a2);
		}
	};
}
