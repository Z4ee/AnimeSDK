#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaAllRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_E2D3A323233AC4FF_OFFSET UNITYSDK_OFFSET(0x18CC6E70)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_ED0222D25CB2B62A_OFFSET UNITYSDK_OFFSET(0x18CC6A90)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC69B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 18740;

	class RogueActPersonaAllRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_E2D3A323233AC4FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_E2D3A323233AC4FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_ED0222D25CB2B62A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_ED0222D25CB2B62A_OFFSET))(a1, a2);
		}
	};
}
