#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenPickingGoodsDisplayType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG_METHOD_2_A8D2C20A094D37C6_OFFSET UNITYSDK_OFFSET(0x1D2055D0)
#define RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D205790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenRequireGoodsConfig_TypeDefinitionIndex = 16621;

	class HipplenRequireGoodsConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenPickingGoodsDisplayType DisplayType; // 0x10
		::System::Single DisplayParam; // 0x14
		::System::UInt32 GoodsID; // 0x18
		::System::UInt32 Amount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A8D2C20A094D37C6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenRequireGoodsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenRequireGoodsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENREQUIREGOODSCONFIG_METHOD_2_A8D2C20A094D37C6_OFFSET))(a1, a2);
		}
	};
}
