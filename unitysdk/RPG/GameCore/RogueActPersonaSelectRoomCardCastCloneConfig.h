#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActPersonaSelectRoomCardCastConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_METHOD_7_05DA4F6E80703A71_OFFSET UNITYSDK_OFFSET(0x175C13E0)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_METHOD_7_20580CEC1086A0EC_OFFSET UNITYSDK_OFFSET(0x175C1600)
#define RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175C1520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaSelectRoomCardCastCloneConfig_TypeDefinitionIndex = 18077;

	class RogueActPersonaSelectRoomCardCastCloneConfig : public ::RPG::GameCore::RogueActPersonaSelectRoomCardCastConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_7_05DA4F6E80703A71(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_METHOD_7_05DA4F6E80703A71_OFFSET))(a1, a2);
		}

		static ::System::Void Method_7_20580CEC1086A0EC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaSelectRoomCardCastCloneConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONASELECTROOMCARDCASTCLONECONFIG_METHOD_7_20580CEC1086A0EC_OFFSET))(a1, a2);
		}
	};
}
