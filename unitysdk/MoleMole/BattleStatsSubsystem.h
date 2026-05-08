#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_43BD383C98B4C0C5_99;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLESTATSSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFE93080)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFE93180)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE933B0)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFE93410)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFE93430)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFE934C0)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFE93550)

namespace MoleMole
{
	inline static constexpr unsigned int BattleStatsSubsystem_TypeDefinitionIndex = 59334;

	class BattleStatsSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattleStatsSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_99*>* _pluginMap; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
