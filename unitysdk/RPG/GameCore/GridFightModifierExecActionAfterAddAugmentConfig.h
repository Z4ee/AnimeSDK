#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_METHOD_3_2C5CBBEA1B4FABC5_OFFSET UNITYSDK_OFFSET(0x189B8250)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_METHOD_3_2E76316A8153102C_OFFSET UNITYSDK_OFFSET(0x189BBA00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x189B8200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterAddAugmentConfig_TypeDefinitionIndex = 18494;

	class GridFightModifierExecActionAfterAddAugmentConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E76316A8153102C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_METHOD_3_2E76316A8153102C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C5CBBEA1B4FABC5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterAddAugmentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDAUGMENTCONFIG_METHOD_3_2C5CBBEA1B4FABC5_OFFSET))(a1, a2);
		}
	};
}
