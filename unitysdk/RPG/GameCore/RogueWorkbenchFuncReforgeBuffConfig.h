#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncBaseConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEBUFFCONFIG_METHOD_3_079563B4A08B74F3_OFFSET UNITYSDK_OFFSET(0x1D493870)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEBUFFCONFIG_METHOD_3_C1D0E7B00C887937_OFFSET UNITYSDK_OFFSET(0x1D4935D0)
#define RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4935C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchFuncReforgeBuffConfig_TypeDefinitionIndex = 17809;

	class RogueWorkbenchFuncReforgeBuffConfig : public ::RPG::GameCore::RogueWorkbenchFuncBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_079563B4A08B74F3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEBUFFCONFIG_METHOD_3_079563B4A08B74F3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C1D0E7B00C887937(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchFuncReforgeBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchFuncReforgeBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHFUNCREFORGEBUFFCONFIG_METHOD_3_C1D0E7B00C887937_OFFSET))(a1, a2);
		}
	};
}
