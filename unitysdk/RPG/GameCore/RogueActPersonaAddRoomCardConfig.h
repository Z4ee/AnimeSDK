#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_METHOD_6_BB2BD05D9EFFB57F_OFFSET UNITYSDK_OFFSET(0x18CC5670)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_METHOD_6_C55A500CD877A6AA_OFFSET UNITYSDK_OFFSET(0x18CC5890)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC57B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddRoomCardConfig_TypeDefinitionIndex = 18748;

	class RogueActPersonaAddRoomCardConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_BB2BD05D9EFFB57F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_METHOD_6_BB2BD05D9EFFB57F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C55A500CD877A6AA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddRoomCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDCONFIG_METHOD_6_C55A500CD877A6AA_OFFSET))(a1, a2);
		}
	};
}
