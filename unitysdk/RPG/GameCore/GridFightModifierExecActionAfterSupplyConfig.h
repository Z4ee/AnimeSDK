#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_METHOD_3_16260B582BE719D0_OFFSET UNITYSDK_OFFSET(0x197EC650)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_METHOD_3_802D1CE163CF8C79_OFFSET UNITYSDK_OFFSET(0x197F1F20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EC600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterSupplyConfig_TypeDefinitionIndex = 18366;

	class GridFightModifierExecActionAfterSupplyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_802D1CE163CF8C79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_METHOD_3_802D1CE163CF8C79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_16260B582BE719D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_METHOD_3_16260B582BE719D0_OFFSET))(a1, a2);
		}
	};
}
