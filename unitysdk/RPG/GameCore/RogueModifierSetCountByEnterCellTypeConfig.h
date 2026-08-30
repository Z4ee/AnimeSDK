#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_METHOD_3_62DB8516A35349A0_OFFSET UNITYSDK_OFFSET(0x1D3FC5F0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_METHOD_3_658363C9C901701C_OFFSET UNITYSDK_OFFSET(0x1D3FC640)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByEnterCellTypeConfig_TypeDefinitionIndex = 17506;

	class RogueModifierSetCountByEnterCellTypeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_62DB8516A35349A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_METHOD_3_62DB8516A35349A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_658363C9C901701C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByEnterCellTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERCELLTYPECONFIG_METHOD_3_658363C9C901701C_OFFSET))(a1, a2);
		}
	};
}
