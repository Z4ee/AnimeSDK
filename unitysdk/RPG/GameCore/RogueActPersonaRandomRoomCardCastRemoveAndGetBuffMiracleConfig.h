#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_6994FBA962CE6AB1_OFFSET UNITYSDK_OFFSET(0x175BFDA0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_C46A8B7BAA185DFC_OFFSET UNITYSDK_OFFSET(0x175C0220)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BFCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig_TypeDefinitionIndex = 18089;

	class RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_C46A8B7BAA185DFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_C46A8B7BAA185DFC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_6994FBA962CE6AB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastRemoveAndGetBuffMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTREMOVEANDGETBUFFMIRACLECONFIG_METHOD_7_6994FBA962CE6AB1_OFFSET))(a1, a2);
		}
	};
}
