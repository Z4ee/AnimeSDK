#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Level { class LevelConfig_GlobalAIUpgradeParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVEL_LEVELCONFIG_GLOBALAIUPGRADEPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x16052140)

namespace MoleMole::Level
{
	inline static constexpr unsigned int LevelConfig_GlobalAIUpgradePair_TypeDefinitionIndex = 48337;

	class LevelConfig_GlobalAIUpgradePair : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Level::LevelConfig_GlobalAIUpgradeParam*>* GlobalAiAIParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVEL_LEVELCONFIG_GLOBALAIUPGRADEPAIR__CTOR_OFFSET))(this);
		}
	};
}
