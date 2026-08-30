#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTCONFIG_METHOD_6_BEDFA9E1655DDF50_OFFSET UNITYSDK_OFFSET(0x1EE86090)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTCONFIG_METHOD_6_EE8E4B85E7EF1FA9_OFFSET UNITYSDK_OFFSET(0x1EE86390)
#define RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE86020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAllRoomCardCastConfig_TypeDefinitionIndex = 19512;

	class RogueActPersonaAllRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BEDFA9E1655DDF50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTCONFIG_METHOD_6_BEDFA9E1655DDF50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EE8E4B85E7EF1FA9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAllRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAALLROOMCARDCASTCONFIG_METHOD_6_EE8E4B85E7EF1FA9_OFFSET))(a1, a2);
		}
	};
}
