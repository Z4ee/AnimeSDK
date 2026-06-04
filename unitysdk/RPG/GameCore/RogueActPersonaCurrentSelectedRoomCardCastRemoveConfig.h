#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_METHOD_6_02CD826A234451B6_OFFSET UNITYSDK_OFFSET(0x19AECE20)
#define RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_METHOD_6_DA932E9307694313_OFFSET UNITYSDK_OFFSET(0x19AECC00)
#define RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AECD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig_TypeDefinitionIndex = 18733;

	class RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_DA932E9307694313(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_METHOD_6_DA932E9307694313_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_02CD826A234451B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurrentSelectedRoomCardCastRemoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURRENTSELECTEDROOMCARDCASTREMOVECONFIG_METHOD_6_02CD826A234451B6_OFFSET))(a1, a2);
		}
	};
}
