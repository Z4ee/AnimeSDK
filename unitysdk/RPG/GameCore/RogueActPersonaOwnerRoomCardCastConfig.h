#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_METHOD_6_32E22F1D7A15DD04_OFFSET UNITYSDK_OFFSET(0x175BD1C0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_METHOD_6_75CC5D78E640567D_OFFSET UNITYSDK_OFFSET(0x175BE240)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BCEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastConfig_TypeDefinitionIndex = 18106;

	class RogueActPersonaOwnerRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_32E22F1D7A15DD04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_METHOD_6_32E22F1D7A15DD04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_75CC5D78E640567D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCONFIG_METHOD_6_75CC5D78E640567D_OFFSET))(a1, a2);
		}
	};
}
