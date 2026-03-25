#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAADDSUPERROOMCARDCONFIG_METHOD_6_61F399CED0093317_OFFSET UNITYSDK_OFFSET(0x175B9D50)
#define RPG_GAMECORE_ROGUEACTPERSONAADDSUPERROOMCARDCONFIG_METHOD_6_FC66173ECFBE2F32_OFFSET UNITYSDK_OFFSET(0x175B9B30)
#define RPG_GAMECORE_ROGUEACTPERSONAADDSUPERROOMCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B9C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddSuperRoomCardConfig_TypeDefinitionIndex = 18105;

	class RogueActPersonaAddSuperRoomCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDSUPERROOMCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FC66173ECFBE2F32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddSuperRoomCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddSuperRoomCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDSUPERROOMCARDCONFIG_METHOD_6_FC66173ECFBE2F32_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_61F399CED0093317(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddSuperRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddSuperRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDSUPERROOMCARDCONFIG_METHOD_6_61F399CED0093317_OFFSET))(a1, a2);
		}
	};
}
