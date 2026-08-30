#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_METHOD_7_76212C7432D2163E_OFFSET UNITYSDK_OFFSET(0x1EE87E00)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_METHOD_7_F2D7FBA4018DDF22_OFFSET UNITYSDK_OFFSET(0x1EE88100)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE87DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastSuperConfig_TypeDefinitionIndex = 19496;

	class RogueActPersonaSelectRoomCardCastSuperConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_F2D7FBA4018DDF22(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_METHOD_7_F2D7FBA4018DDF22_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_76212C7432D2163E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastSuperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTSUPERCONFIG_METHOD_7_76212C7432D2163E_OFFSET))(a1, a2);
		}
	};
}
