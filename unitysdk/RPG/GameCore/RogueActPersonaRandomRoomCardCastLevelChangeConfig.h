#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_440B8224A928C04A_OFFSET UNITYSDK_OFFSET(0x1D3B9650)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_49ED0B54FF0580A6_OFFSET UNITYSDK_OFFSET(0x1D3B9570)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B9560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastLevelChangeConfig_TypeDefinitionIndex = 19504;

	class RogueActPersonaRandomRoomCardCastLevelChangeConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_440B8224A928C04A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_440B8224A928C04A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_49ED0B54FF0580A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastLevelChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTLEVELCHANGECONFIG_METHOD_7_49ED0B54FF0580A6_OFFSET))(a1, a2);
		}
	};
}
