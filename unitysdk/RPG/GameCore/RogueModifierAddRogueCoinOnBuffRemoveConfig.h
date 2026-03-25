#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_METHOD_3_D17606A34D59C165_OFFSET UNITYSDK_OFFSET(0x1761CFE0)
#define RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_METHOD_3_FD0532D232DBB45C_OFFSET UNITYSDK_OFFSET(0x1761D0B0)
#define RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1761D060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddRogueCoinOnBuffRemoveConfig_TypeDefinitionIndex = 16337;

	class RogueModifierAddRogueCoinOnBuffRemoveConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D17606A34D59C165(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_METHOD_3_D17606A34D59C165_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FD0532D232DBB45C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierAddRogueCoinOnBuffRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDROGUECOINONBUFFREMOVECONFIG_METHOD_3_FD0532D232DBB45C_OFFSET))(a1, a2);
		}
	};
}
