#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_METHOD_6_0E093422FC91B371_OFFSET UNITYSDK_OFFSET(0x18CC5440)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_METHOD_6_2886F1A08CA819EC_OFFSET UNITYSDK_OFFSET(0x18CC5660)
#define RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC5580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaAddRoomCardByPresetConfig_TypeDefinitionIndex = 18747;

	class RogueActPersonaAddRoomCardByPresetConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0E093422FC91B371(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_METHOD_6_0E093422FC91B371_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_2886F1A08CA819EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaAddRoomCardByPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAADDROOMCARDBYPRESETCONFIG_METHOD_6_2886F1A08CA819EC_OFFSET))(a1, a2);
		}
	};
}
