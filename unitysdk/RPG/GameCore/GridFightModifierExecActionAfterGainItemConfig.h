#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_312E8A99A647568E_OFFSET UNITYSDK_OFFSET(0x1726A6F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_72530B778B238D07_OFFSET UNITYSDK_OFFSET(0x17266760)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17266710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterGainItemConfig_TypeDefinitionIndex = 17825;

	class GridFightModifierExecActionAfterGainItemConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_312E8A99A647568E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_312E8A99A647568E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_72530B778B238D07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterGainItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERGAINITEMCONFIG_METHOD_3_72530B778B238D07_OFFSET))(a1, a2);
		}
	};
}
