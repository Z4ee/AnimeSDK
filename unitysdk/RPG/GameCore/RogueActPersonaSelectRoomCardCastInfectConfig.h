#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTINFECTCONFIG_METHOD_7_84B49F9CA53DBADD_OFFSET UNITYSDK_OFFSET(0x19AF3590)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTINFECTCONFIG_METHOD_7_8B0499579EA6B850_OFFSET UNITYSDK_OFFSET(0x19AF2C10)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTINFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF2B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastInfectConfig_TypeDefinitionIndex = 18690;

	class RogueActPersonaSelectRoomCardCastInfectConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTINFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_84B49F9CA53DBADD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastInfectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastInfectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTINFECTCONFIG_METHOD_7_84B49F9CA53DBADD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_8B0499579EA6B850(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastInfectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastInfectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTINFECTCONFIG_METHOD_7_8B0499579EA6B850_OFFSET))(a1, a2);
		}
	};
}
