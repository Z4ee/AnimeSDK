#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_7C1AF35DE5EA05C3_OFFSET UNITYSDK_OFFSET(0x175C2BF0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_892C22EC76DC5FB6_OFFSET UNITYSDK_OFFSET(0x175C3660)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C2B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 18073;

	class RogueActPersonaSelectRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_892C22EC76DC5FB6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_892C22EC76DC5FB6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_7C1AF35DE5EA05C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_7C1AF35DE5EA05C3_OFFSET))(a1, a2);
		}
	};
}
