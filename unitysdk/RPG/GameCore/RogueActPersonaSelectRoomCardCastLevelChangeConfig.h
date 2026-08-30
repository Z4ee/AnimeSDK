#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_1AF76778ACC899BF_OFFSET UNITYSDK_OFFSET(0x1D3BA090)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_7C1AF35DE5EA05C3_OFFSET UNITYSDK_OFFSET(0x1D3B9ED0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 19489;

	class RogueActPersonaSelectRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_1AF76778ACC899BF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_1AF76778ACC899BF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_7C1AF35DE5EA05C3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_7C1AF35DE5EA05C3_OFFSET))(a1, a2);
		}
	};
}
