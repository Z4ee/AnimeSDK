#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_METHOD_3_4A5551F42FDBA9E3_OFFSET UNITYSDK_OFFSET(0x18D81030)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_METHOD_3_C6A9DF1246A6B967_OFFSET UNITYSDK_OFFSET(0x18D80DB0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D80DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncMagicUnitShopConfig_TypeDefinitionIndex = 17125;

	class RogueWorkbenchFuncMagicUnitShopConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4A5551F42FDBA9E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_METHOD_3_4A5551F42FDBA9E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6A9DF1246A6B967(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncMagicUnitShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCMAGICUNITSHOPCONFIG_METHOD_3_C6A9DF1246A6B967_OFFSET))(a1, a2);
		}
	};
}
