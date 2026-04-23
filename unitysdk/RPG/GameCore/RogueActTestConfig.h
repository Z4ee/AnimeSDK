#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_14F1CD83D6650AE0_OFFSET UNITYSDK_OFFSET(0x18CD4A50)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_65084AB374F386ED_OFFSET UNITYSDK_OFFSET(0x18CD4830)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD4970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTestConfig_TypeDefinitionIndex = 18708;

	class RogueActTestConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_65084AB374F386ED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_65084AB374F386ED_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_14F1CD83D6650AE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_14F1CD83D6650AE0_OFFSET))(a1, a2);
		}
	};
}
