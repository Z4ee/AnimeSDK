#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_METHOD_6_507D75FC28C74946_OFFSET UNITYSDK_OFFSET(0x1D3B97F0)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_METHOD_6_54091CDAD3FFD1E2_OFFSET UNITYSDK_OFFSET(0x1D3B9840)
#define RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig_TypeDefinitionIndex = 19545;

	class RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_507D75FC28C74946(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_METHOD_6_507D75FC28C74946_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_54091CDAD3FFD1E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRemoveOneDuplicateRoomCardWithMinLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAREMOVEONEDUPLICATEROOMCARDWITHMINLEVELCONFIG_METHOD_6_54091CDAD3FFD1E2_OFFSET))(a1, a2);
		}
	};
}
