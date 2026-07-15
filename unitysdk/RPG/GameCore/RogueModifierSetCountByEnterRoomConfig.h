#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_BB94AE826303E5AB_OFFSET UNITYSDK_OFFSET(0x1D166150)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_E42478DBBD6E36AF_OFFSET UNITYSDK_OFFSET(0x1D1661A0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D166190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByEnterRoomConfig_TypeDefinitionIndex = 17006;

	class RogueModifierSetCountByEnterRoomConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BB94AE826303E5AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_BB94AE826303E5AB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E42478DBBD6E36AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSetCountByEnterRoomConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYENTERROOMCONFIG_METHOD_3_E42478DBBD6E36AF_OFFSET))(a1, a2);
		}
	};
}
