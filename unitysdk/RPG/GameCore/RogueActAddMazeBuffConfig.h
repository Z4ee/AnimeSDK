#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_82F1520AE10EF939_OFFSET UNITYSDK_OFFSET(0x175B1150)
#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_B1D7CE8EFFAE4AC4_OFFSET UNITYSDK_OFFSET(0x175B0F30)
#define RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B1070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActAddMazeBuffConfig_TypeDefinitionIndex = 17983;

	class RogueActAddMazeBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B1D7CE8EFFAE4AC4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_B1D7CE8EFFAE4AC4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_82F1520AE10EF939(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActAddMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActAddMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDMAZEBUFFCONFIG_METHOD_6_82F1520AE10EF939_OFFSET))(a1, a2);
		}
	};
}
