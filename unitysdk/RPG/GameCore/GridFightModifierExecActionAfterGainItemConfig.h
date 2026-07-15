#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_72530B778B238D07_OFFSET UNITYSDK_OFFSET(0x1C5D1100)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_A6BC929A30222983_OFFSET UNITYSDK_OFFSET(0x1C5D10B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D10F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterGainItemConfig_TypeDefinitionIndex = 18667;

	class GridFightModifierExecActionAfterGainItemConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A6BC929A30222983(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_A6BC929A30222983_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72530B778B238D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_72530B778B238D07_OFFSET))(a1, a2);
		}
	};
}
