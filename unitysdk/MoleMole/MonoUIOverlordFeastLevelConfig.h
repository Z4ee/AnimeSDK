#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoUIOverlordFeastLevelConfig_LevelUpgradeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_MONOUIOVERLORDFEASTLEVELCONFIG_GETCONFIGITEM_OFFSET UNITYSDK_OFFSET(0x18CF0550)
#define MOLEMOLE_MONOUIOVERLORDFEASTLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CF06A0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIOverlordFeastLevelConfig_TypeDefinitionIndex = 67455;

	class MonoUIOverlordFeastLevelConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single progressAnimLength; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MonoUIOverlordFeastLevelConfig_LevelUpgradeConfig*>* LevelUpgradeConfigs; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOVERLORDFEASTLEVELCONFIG__CTOR_OFFSET))(this);
		}

		::MoleMole::MonoUIOverlordFeastLevelConfig_LevelUpgradeConfig* GetConfigItem(::System::Int32 a1)
		{
			return ((::MoleMole::MonoUIOverlordFeastLevelConfig_LevelUpgradeConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIOVERLORDFEASTLEVELCONFIG_GETCONFIGITEM_OFFSET))(this, a1);
		}
	};
}
