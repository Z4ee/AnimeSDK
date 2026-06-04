#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaRandomRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTRESETCONFIG_METHOD_7_08C0FE952500FC52_OFFSET UNITYSDK_OFFSET(0x19AF06F0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTRESETCONFIG_METHOD_7_D3C4DBF2A577C8B7_OFFSET UNITYSDK_OFFSET(0x19AF01D0)
#define RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF00F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRandomRoomCardCastResetConfig_TypeDefinitionIndex = 18705;

	class RogueActPersonaRandomRoomCardCastResetConfig : public ::RPG::GameCore::RogueActPersonaRandomRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_08C0FE952500FC52(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastResetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastResetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTRESETCONFIG_METHOD_7_08C0FE952500FC52_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_D3C4DBF2A577C8B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastResetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRandomRoomCardCastResetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONARANDOMROOMCARDCASTRESETCONFIG_METHOD_7_D3C4DBF2A577C8B7_OFFSET))(a1, a2);
		}
	};
}
