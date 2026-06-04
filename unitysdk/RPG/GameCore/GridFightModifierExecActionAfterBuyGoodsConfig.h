#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_0B97C7A2EE6B4D54_OFFSET UNITYSDK_OFFSET(0x197F18A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_1FB0101BBC0DA6CD_OFFSET UNITYSDK_OFFSET(0x197EBAF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x197EBAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterBuyGoodsConfig_TypeDefinitionIndex = 18362;

	class GridFightModifierExecActionAfterBuyGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0B97C7A2EE6B4D54(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_0B97C7A2EE6B4D54_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FB0101BBC0DA6CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_1FB0101BBC0DA6CD_OFFSET))(a1, a2);
		}
	};
}
