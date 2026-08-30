#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG_METHOD_2_E83DBE58A90A8422_OFFSET UNITYSDK_OFFSET(0x1D493B40)
#define RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D493B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchShopGenMagicUnitConfig_TypeDefinitionIndex = 17816;

	class RogueWorkbenchShopGenMagicUnitConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E83DBE58A90A8422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchShopGenMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchShopGenMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHSHOPGENMAGICUNITCONFIG_METHOD_2_E83DBE58A90A8422_OFFSET))(a1, a2);
		}
	};
}
