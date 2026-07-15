#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_EA95EC22DCEDB261_OFFSET UNITYSDK_OFFSET(0x1D176C60)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_EA9DF75E46172F3D_OFFSET UNITYSDK_OFFSET(0x1D176C10)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D176C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicRoomIndexConfig_TypeDefinitionIndex = 19071;

	class RogueParamRogueMagicRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EA9DF75E46172F3D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_EA9DF75E46172F3D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_EA95EC22DCEDB261(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_METHOD_6_EA95EC22DCEDB261_OFFSET))(a1, a2);
		}
	};
}
