#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_METHOD_6_2F105D65D2D84D26_OFFSET UNITYSDK_OFFSET(0x19AEEBD0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_METHOD_6_FE67083D7CA07EB3_OFFSET UNITYSDK_OFFSET(0x19AEEDF0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEED10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomAddRoomCardConfig_TypeDefinitionIndex = 18716;

	class RogueActPersonaRandomAddRoomCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2F105D65D2D84D26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_METHOD_6_2F105D65D2D84D26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FE67083D7CA07EB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomAddRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMADDROOMCARDCONFIG_METHOD_6_FE67083D7CA07EB3_OFFSET))(a1, a2);
		}
	};
}
