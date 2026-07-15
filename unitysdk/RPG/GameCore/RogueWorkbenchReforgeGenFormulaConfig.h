#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG_METHOD_2_195FD691DF38272F_OFFSET UNITYSDK_OFFSET(0x1BB82610)
#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchReforgeGenFormulaConfig_TypeDefinitionIndex = 17293;

	class RogueWorkbenchReforgeGenFormulaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_195FD691DF38272F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchReforgeGenFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchReforgeGenFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENFORMULACONFIG_METHOD_2_195FD691DF38272F_OFFSET))(a1, a2);
		}
	};
}
