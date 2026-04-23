#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_METHOD_3_354C33DB644B8589_OFFSET UNITYSDK_OFFSET(0x18D442A0)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_METHOD_3_92F42777B7552220_OFFSET UNITYSDK_OFFSET(0x18D44370)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D44320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierPersonaRoomCardForceDrawConfig_TypeDefinitionIndex = 16910;

	class RogueModifierPersonaRoomCardForceDrawConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_354C33DB644B8589(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_METHOD_3_354C33DB644B8589_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_92F42777B7552220(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierPersonaRoomCardForceDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAROOMCARDFORCEDRAWCONFIG_METHOD_3_92F42777B7552220_OFFSET))(a1, a2);
		}
	};
}
