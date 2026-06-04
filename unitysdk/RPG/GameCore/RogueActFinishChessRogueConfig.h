#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_547FC5146A0C128D_OFFSET UNITYSDK_OFFSET(0x19AE5240)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_70A5ED9B46227C70_OFFSET UNITYSDK_OFFSET(0x19AE5020)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE5160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActFinishChessRogueConfig_TypeDefinitionIndex = 18605;

	class RogueActFinishChessRogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_70A5ED9B46227C70(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActFinishChessRogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_70A5ED9B46227C70_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_547FC5146A0C128D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActFinishChessRogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_547FC5146A0C128D_OFFSET))(a1, a2);
		}
	};
}
