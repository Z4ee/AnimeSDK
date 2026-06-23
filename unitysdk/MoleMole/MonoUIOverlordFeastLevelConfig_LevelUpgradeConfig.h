#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONOUIOVERLORDFEASTLEVELCONFIG_LEVELUPGRADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD6130)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIOverlordFeastLevelConfig_LevelUpgradeConfig_TypeDefinitionIndex = 67456;

	class MonoUIOverlordFeastLevelConfig_LevelUpgradeConfig : public ::System::Object
	{
	public:
		::System::Int32 Level; // 0x10
		::System::String* LevelUpgradeAnimName; // 0x18
		::System::Single progressAnimDelay; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOVERLORDFEASTLEVELCONFIG_LEVELUPGRADECONFIG__CTOR_OFFSET))(this);
		}
	};
}
