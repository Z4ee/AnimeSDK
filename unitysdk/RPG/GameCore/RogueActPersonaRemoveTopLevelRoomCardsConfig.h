#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_METHOD_6_3D614B484579799B_OFFSET UNITYSDK_OFFSET(0x1D3B98A0)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_METHOD_6_C2ED2C36E4208C37_OFFSET UNITYSDK_OFFSET(0x1D3B9850)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRemoveTopLevelRoomCardsConfig_TypeDefinitionIndex = 19546;

	class RogueActPersonaRemoveTopLevelRoomCardsConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_C2ED2C36E4208C37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_METHOD_6_C2ED2C36E4208C37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3D614B484579799B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRemoveTopLevelRoomCardsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVETOPLEVELROOMCARDSCONFIG_METHOD_6_3D614B484579799B_OFFSET))(a1, a2);
		}
	};
}
