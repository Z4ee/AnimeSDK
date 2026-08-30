#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_METHOD_6_A889860C07BCAE51_OFFSET UNITYSDK_OFFSET(0x1D3B8B70)
#define RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_METHOD_6_E61A5CE5002D4975_OFFSET UNITYSDK_OFFSET(0x1D3B8BC0)
#define RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B8BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaLowestNRoomCardCastResetConfig_TypeDefinitionIndex = 19547;

	class RogueActPersonaLowestNRoomCardCastResetConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A889860C07BCAE51(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_METHOD_6_A889860C07BCAE51_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_E61A5CE5002D4975(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaLowestNRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONALOWESTNROOMCARDCASTRESETCONFIG_METHOD_6_E61A5CE5002D4975_OFFSET))(a1, a2);
		}
	};
}
