#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_14F1CD83D6650AE0_OFFSET UNITYSDK_OFFSET(0x1D3BB180)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_5429E22CFD22CFA4_OFFSET UNITYSDK_OFFSET(0x1D3BB130)
#define RPG_GAMECORE_ROGUEACTTESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BB170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTestConfig_TypeDefinitionIndex = 19478;

	class RogueActTestConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_5429E22CFD22CFA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_5429E22CFD22CFA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_14F1CD83D6650AE0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTESTCONFIG_METHOD_6_14F1CD83D6650AE0_OFFSET))(a1, a2);
		}
	};
}
