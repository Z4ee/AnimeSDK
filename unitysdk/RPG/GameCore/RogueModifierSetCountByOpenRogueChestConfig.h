#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_METHOD_3_0C73D9D67792FD5B_OFFSET UNITYSDK_OFFSET(0x1762D030)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_METHOD_3_521E526961665EC2_OFFSET UNITYSDK_OFFSET(0x176395E0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762CFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByOpenRogueChestConfig_TypeDefinitionIndex = 16273;

	class RogueModifierSetCountByOpenRogueChestConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_521E526961665EC2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_METHOD_3_521E526961665EC2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0C73D9D67792FD5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_METHOD_3_0C73D9D67792FD5B_OFFSET))(a1, a2);
		}
	};
}
