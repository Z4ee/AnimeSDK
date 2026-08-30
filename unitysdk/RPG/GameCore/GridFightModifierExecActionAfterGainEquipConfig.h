#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINEQUIPCONFIG_METHOD_3_91D319892816F4B2_OFFSET UNITYSDK_OFFSET(0x1D159210)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINEQUIPCONFIG_METHOD_3_F7F31A26FB0643D6_OFFSET UNITYSDK_OFFSET(0x1D1591C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINEQUIPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D159200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterGainEquipConfig_TypeDefinitionIndex = 19191;

	class GridFightModifierExecActionAfterGainEquipConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINEQUIPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F7F31A26FB0643D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterGainEquipConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterGainEquipConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINEQUIPCONFIG_METHOD_3_F7F31A26FB0643D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91D319892816F4B2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterGainEquipConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterGainEquipConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINEQUIPCONFIG_METHOD_3_91D319892816F4B2_OFFSET))(a1, a2);
		}
	};
}
