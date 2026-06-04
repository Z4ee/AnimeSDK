#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_METHOD_7_723B6442DFADE59B_OFFSET UNITYSDK_OFFSET(0x19AEE250)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_METHOD_7_A6068A15B5797BAE_OFFSET UNITYSDK_OFFSET(0x19AEE810)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AEE170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig_TypeDefinitionIndex = 18723;

	class RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_A6068A15B5797BAE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_METHOD_7_A6068A15B5797BAE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_723B6442DFADE59B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveOwnerAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVEOWNERATTRIBUTECONFIG_METHOD_7_723B6442DFADE59B_OFFSET))(a1, a2);
		}
	};
}
