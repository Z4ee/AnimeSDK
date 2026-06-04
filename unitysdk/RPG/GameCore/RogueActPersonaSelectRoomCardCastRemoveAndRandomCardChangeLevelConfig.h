#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_METHOD_7_273FC35963D56CAB_OFFSET UNITYSDK_OFFSET(0x19AF30C0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_METHOD_7_D8B966E39F9489BE_OFFSET UNITYSDK_OFFSET(0x19AF3BD0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF2FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig_TypeDefinitionIndex = 18694;

	class RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_D8B966E39F9489BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_METHOD_7_D8B966E39F9489BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_273FC35963D56CAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastRemoveAndRandomCardChangeLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTREMOVEANDRANDOMCARDCHANGELEVELCONFIG_METHOD_7_273FC35963D56CAB_OFFSET))(a1, a2);
		}
	};
}
