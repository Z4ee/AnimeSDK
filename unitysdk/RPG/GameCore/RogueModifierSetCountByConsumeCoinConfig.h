#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_METHOD_3_921DDD899213E36D_OFFSET UNITYSDK_OFFSET(0x19B9C320)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_METHOD_3_F91B7F8A5604C974_OFFSET UNITYSDK_OFFSET(0x19B9C250)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9C2D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByConsumeCoinConfig_TypeDefinitionIndex = 16840;

	class RogueModifierSetCountByConsumeCoinConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F91B7F8A5604C974(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_METHOD_3_F91B7F8A5604C974_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_921DDD899213E36D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByConsumeCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYCONSUMECOINCONFIG_METHOD_3_921DDD899213E36D_OFFSET))(a1, a2);
		}
	};
}
