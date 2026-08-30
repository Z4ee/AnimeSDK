#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_A87B4703B6380432_OFFSET UNITYSDK_OFFSET(0x1D3B9080)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_B0D307F030ECC84E_OFFSET UNITYSDK_OFFSET(0x1D3B8F80)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastRemoveConfig_TypeDefinitionIndex = 19526;

	class RogueActPersonaOwnerRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_A87B4703B6380432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_A87B4703B6380432_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_B0D307F030ECC84E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTREMOVECONFIG_METHOD_7_B0D307F030ECC84E_OFFSET))(a1, a2);
		}
	};
}
