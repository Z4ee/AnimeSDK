#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_68808FD61ACDA6F7_OFFSET UNITYSDK_OFFSET(0x19BB0580)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_EA95EC22DCEDB261_OFFSET UNITYSDK_OFFSET(0x19BB0830)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB0700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicRoomIndexConfig_TypeDefinitionIndex = 18790;

	class RogueParamRogueMagicRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_68808FD61ACDA6F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_68808FD61ACDA6F7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EA95EC22DCEDB261(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_EA95EC22DCEDB261_OFFSET))(a1, a2);
		}
	};
}
