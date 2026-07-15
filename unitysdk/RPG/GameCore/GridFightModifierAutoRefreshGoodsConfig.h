#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_METHOD_3_B27EBDCF3F3799EE_OFFSET UNITYSDK_OFFSET(0x1C5D0560)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_METHOD_3_B6CAE5BAEC94B9AA_OFFSET UNITYSDK_OFFSET(0x1C5D05B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D05A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAutoRefreshGoodsConfig_TypeDefinitionIndex = 18637;

	class GridFightModifierAutoRefreshGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B27EBDCF3F3799EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_METHOD_3_B27EBDCF3F3799EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B6CAE5BAEC94B9AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_METHOD_3_B6CAE5BAEC94B9AA_OFFSET))(a1, a2);
		}
	};
}
