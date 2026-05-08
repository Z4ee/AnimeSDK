#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_GLOBALAIUPGRADEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16052150)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_GlobalAIUpgradeParam_TypeDefinitionIndex = 48339;

	class LevelConfig_GlobalAIUpgradeParam : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Single ratio; // 0x18
		::System::Single added; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_GLOBALAIUPGRADEPARAM__CTOR_OFFSET))(this);
		}
	};
}
