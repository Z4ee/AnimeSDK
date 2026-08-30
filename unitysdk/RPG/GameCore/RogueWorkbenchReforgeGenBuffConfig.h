#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG_METHOD_2_FDEB3DF4772B72BA_OFFSET UNITYSDK_OFFSET(0x1CCD08B0)
#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD08F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchReforgeGenBuffConfig_TypeDefinitionIndex = 17808;

	class RogueWorkbenchReforgeGenBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FDEB3DF4772B72BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG_METHOD_2_FDEB3DF4772B72BA_OFFSET))(a1, a2);
		}
	};
}
