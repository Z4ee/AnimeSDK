#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_METHOD_7_B58BCCDF46537F26_OFFSET UNITYSDK_OFFSET(0x1D3BA230)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_METHOD_7_DC694F93039E6842_OFFSET UNITYSDK_OFFSET(0x1D3B9F70)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastResetConfig_TypeDefinitionIndex = 19499;

	class RogueActPersonaSelectRoomCardCastResetConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_B58BCCDF46537F26(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_METHOD_7_B58BCCDF46537F26_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_DC694F93039E6842(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTRESETCONFIG_METHOD_7_DC694F93039E6842_OFFSET))(a1, a2);
		}
	};
}
