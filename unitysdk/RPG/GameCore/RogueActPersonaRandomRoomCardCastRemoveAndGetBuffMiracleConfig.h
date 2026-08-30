#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_6994FBA962CE6AB1_OFFSET UNITYSDK_OFFSET(0x1EE873E0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_F902CE1E8333ADCD_OFFSET UNITYSDK_OFFSET(0x1EE874E0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE873D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig_TypeDefinitionIndex = 19506;

	class RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_F902CE1E8333ADCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_F902CE1E8333ADCD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_6994FBA962CE6AB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_6994FBA962CE6AB1_OFFSET))(a1, a2);
		}
	};
}
