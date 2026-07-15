#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_1FB0101BBC0DA6CD_OFFSET UNITYSDK_OFFSET(0x1C5D0E00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_CFAE39F8D74D6AC9_OFFSET UNITYSDK_OFFSET(0x1C5D0DB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D0DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterBuyGoodsConfig_TypeDefinitionIndex = 18607;

	class GridFightModifierExecActionAfterBuyGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CFAE39F8D74D6AC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_CFAE39F8D74D6AC9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1FB0101BBC0DA6CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_METHOD_3_1FB0101BBC0DA6CD_OFFSET))(a1, a2);
		}
	};
}
