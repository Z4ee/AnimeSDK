#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_0DF40DE8132CF88B_OFFSET UNITYSDK_OFFSET(0x175BE4D0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_B0D307F030ECC84E_OFFSET UNITYSDK_OFFSET(0x175BDF60)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BDE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastRemoveConfig_TypeDefinitionIndex = 18108;

	class RogueActPersonaOwnerRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_0DF40DE8132CF88B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_0DF40DE8132CF88B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_B0D307F030ECC84E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_B0D307F030ECC84E_OFFSET))(a1, a2);
		}
	};
}
