#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG_METHOD_2_EC1C91CBC43797E6_OFFSET UNITYSDK_OFFSET(0x1BB825C0)
#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB82600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchReforgeGenBuffListConfig_TypeDefinitionIndex = 17290;

	class RogueWorkbenchReforgeGenBuffListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EC1C91CBC43797E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffListConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffListConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG_METHOD_2_EC1C91CBC43797E6_OFFSET))(a1, a2);
		}
	};
}
