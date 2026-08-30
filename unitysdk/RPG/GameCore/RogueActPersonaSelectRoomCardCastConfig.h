#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_METHOD_6_10A4671C3294B5DE_OFFSET UNITYSDK_OFFSET(0x1EE87E10)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_METHOD_6_AC5B0A197D63E147_OFFSET UNITYSDK_OFFSET(0x1EE878F0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE87820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastConfig_TypeDefinitionIndex = 19487;

	class RogueActPersonaSelectRoomCardCastConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AC5B0A197D63E147(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_METHOD_6_AC5B0A197D63E147_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_10A4671C3294B5DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCONFIG_METHOD_6_10A4671C3294B5DE_OFFSET))(a1, a2);
		}
	};
}
