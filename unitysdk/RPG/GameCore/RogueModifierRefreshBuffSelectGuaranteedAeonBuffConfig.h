#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_81E6A85C91ECEA46_OFFSET UNITYSDK_OFFSET(0x1D3FB9A0)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_85724F3B3D2572E2_OFFSET UNITYSDK_OFFSET(0x1D3FB9F0)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FB9E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig_TypeDefinitionIndex = 17726;

	class RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_81E6A85C91ECEA46(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_81E6A85C91ECEA46_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85724F3B3D2572E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_85724F3B3D2572E2_OFFSET))(a1, a2);
		}
	};
}
