#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaCurRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_METHOD_7_5C33E16F83CB3D60_OFFSET UNITYSDK_OFFSET(0x1D3B89B0)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_METHOD_7_9B6BF618AA890224_OFFSET UNITYSDK_OFFSET(0x1D3B8A50)
#define RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B89A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig_TypeDefinitionIndex = 19535;

	class RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig : public ::RPG::GameCore::RogueActPersonaCurRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_9B6BF618AA890224(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_METHOD_7_9B6BF618AA890224_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_5C33E16F83CB3D60(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaCurRoomCardCastLevelAndCompositionTypeChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONACURROOMCARDCASTLEVELANDCOMPOSITIONTYPECHANGECONFIG_METHOD_7_5C33E16F83CB3D60_OFFSET))(a1, a2);
		}
	};
}
