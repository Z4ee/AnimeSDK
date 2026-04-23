#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_METHOD_6_B6CEE32F2379DC5A_OFFSET UNITYSDK_OFFSET(0x18D5EE90)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_METHOD_6_F47BCC61B0270894_OFFSET UNITYSDK_OFFSET(0x18D5EBE0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5ED60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomLevelConfig_TypeDefinitionIndex = 18841;

	class RogueParamRogueTournRoomLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F47BCC61B0270894(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_METHOD_6_F47BCC61B0270894_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B6CEE32F2379DC5A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMLEVELCONFIG_METHOD_6_B6CEE32F2379DC5A_OFFSET))(a1, a2);
		}
	};
}
