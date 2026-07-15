#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_6_3F3B83CB0093419E_OFFSET UNITYSDK_OFFSET(0x1C49D890)
#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_6_B5EDAE36F747ED82_OFFSET UNITYSDK_OFFSET(0x1C49D840)
#define RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRemoveMazeBuffConfig_TypeDefinitionIndex = 18872;

	class RogueActRemoveMazeBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B5EDAE36F747ED82(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_6_B5EDAE36F747ED82_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3F3B83CB0093419E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRemoveMazeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRemoveMazeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREMOVEMAZEBUFFCONFIG_METHOD_6_3F3B83CB0093419E_OFFSET))(a1, a2);
		}
	};
}
