#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_9378F86AD5093393_OFFSET UNITYSDK_OFFSET(0x1C5D13A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_F7828B5057AF5ACF_OFFSET UNITYSDK_OFFSET(0x1C5D1350)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D1390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterUseOrbConfig_TypeDefinitionIndex = 18707;

	class GridFightModifierExecActionAfterUseOrbConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7828B5057AF5ACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_F7828B5057AF5ACF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9378F86AD5093393(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterUseOrbConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERUSEORBCONFIG_METHOD_3_9378F86AD5093393_OFFSET))(a1, a2);
		}
	};
}
