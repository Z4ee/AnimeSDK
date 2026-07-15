#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_46A8EE3CAA033489_OFFSET UNITYSDK_OFFSET(0x1D02DBC0)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_547FC5146A0C128D_OFFSET UNITYSDK_OFFSET(0x1D02DC10)
#define RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D02DC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActFinishChessRogueConfig_TypeDefinitionIndex = 18881;

	class RogueActFinishChessRogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_46A8EE3CAA033489(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActFinishChessRogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_46A8EE3CAA033489_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_547FC5146A0C128D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActFinishChessRogueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActFinishChessRogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTFINISHCHESSROGUECONFIG_METHOD_6_547FC5146A0C128D_OFFSET))(a1, a2);
		}
	};
}
