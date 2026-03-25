#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_METHOD_3_914CB38C60D68F72_OFFSET UNITYSDK_OFFSET(0x17269160)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_METHOD_3_FF8301CA70BEDCFB_OFFSET UNITYSDK_OFFSET(0x1726BF40)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17269110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetBuyExpCostConfig_TypeDefinitionIndex = 17812;

	class GridFightModifierSetBuyExpCostConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FF8301CA70BEDCFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_METHOD_3_FF8301CA70BEDCFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_914CB38C60D68F72(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightModifierSetBuyExpCostConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETBUYEXPCOSTCONFIG_METHOD_3_914CB38C60D68F72_OFFSET))(a1, a2);
		}
	};
}
