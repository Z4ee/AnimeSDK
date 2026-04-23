#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_6_5D89C8C044CFB806_OFFSET UNITYSDK_OFFSET(0x18D5E920)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_6_8C637B93E4E61590_OFFSET UNITYSDK_OFFSET(0x18D5EBD0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournRoomIndexConfig_TypeDefinitionIndex = 18823;

	class RogueParamRogueTournRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5D89C8C044CFB806(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_6_5D89C8C044CFB806_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8C637B93E4E61590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNROOMINDEXCONFIG_METHOD_6_8C637B93E4E61590_OFFSET))(a1, a2);
		}
	};
}
