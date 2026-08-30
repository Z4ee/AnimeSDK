#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_METHOD_3_22C49FA53EE28738_OFFSET UNITYSDK_OFFSET(0x1EE6D710)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_METHOD_3_C5DCB4468C22D9B4_OFFSET UNITYSDK_OFFSET(0x1EE6D760)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE6D750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterRefreshShopConfig_TypeDefinitionIndex = 19148;

	class GridFightModifierExecActionAfterRefreshShopConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_22C49FA53EE28738(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_METHOD_3_22C49FA53EE28738_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C5DCB4468C22D9B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_METHOD_3_C5DCB4468C22D9B4_OFFSET))(a1, a2);
		}
	};
}
