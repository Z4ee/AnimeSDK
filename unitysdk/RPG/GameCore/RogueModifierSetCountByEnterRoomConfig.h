#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_BEB6CD6ED26693F6_OFFSET UNITYSDK_OFFSET(0x176394E0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_E42478DBBD6E36AF_OFFSET UNITYSDK_OFFSET(0x1762CE70)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762CE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByEnterRoomConfig_TypeDefinitionIndex = 16275;

	class RogueModifierSetCountByEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BEB6CD6ED26693F6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_BEB6CD6ED26693F6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E42478DBBD6E36AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_E42478DBBD6E36AF_OFFSET))(a1, a2);
		}
	};
}
