#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_6_670D0C7FFE564FA6_OFFSET UNITYSDK_OFFSET(0x1C49D660)
#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_6_8DEA8F33BBA138C2_OFFSET UNITYSDK_OFFSET(0x1C49D6B0)
#define RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49D6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRaiseDialogueConfig_TypeDefinitionIndex = 18940;

	class RogueActRaiseDialogueConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_670D0C7FFE564FA6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRaiseDialogueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRaiseDialogueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_6_670D0C7FFE564FA6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_8DEA8F33BBA138C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRaiseDialogueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRaiseDialogueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRAISEDIALOGUECONFIG_METHOD_6_8DEA8F33BBA138C2_OFFSET))(a1, a2);
		}
	};
}
