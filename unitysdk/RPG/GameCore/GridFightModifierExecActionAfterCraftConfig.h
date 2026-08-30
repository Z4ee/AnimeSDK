#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_29F0DFC6C71FD65D_OFFSET UNITYSDK_OFFSET(0x1D1590F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_C31CE3C7CD6EE699_OFFSET UNITYSDK_OFFSET(0x1D1590A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1590E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterCraftConfig_TypeDefinitionIndex = 19145;

	class GridFightModifierExecActionAfterCraftConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C31CE3C7CD6EE699(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_C31CE3C7CD6EE699_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29F0DFC6C71FD65D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterCraftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCRAFTCONFIG_METHOD_3_29F0DFC6C71FD65D_OFFSET))(a1, a2);
		}
	};
}
