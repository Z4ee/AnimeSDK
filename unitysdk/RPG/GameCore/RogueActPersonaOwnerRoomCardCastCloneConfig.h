#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaOwnerRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_METHOD_7_8EA83A7C1AA2D1D4_OFFSET UNITYSDK_OFFSET(0x175BCF90)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_METHOD_7_FF54A611A0348C09_OFFSET UNITYSDK_OFFSET(0x175BD1B0)
#define RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175BD0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaOwnerRoomCardCastCloneConfig_TypeDefinitionIndex = 18109;

	class RogueActPersonaOwnerRoomCardCastCloneConfig : public ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_8EA83A7C1AA2D1D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_METHOD_7_8EA83A7C1AA2D1D4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_FF54A611A0348C09(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaOwnerRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAOWNERROOMCARDCASTCLONECONFIG_METHOD_7_FF54A611A0348C09_OFFSET))(a1, a2);
		}
	};
}
