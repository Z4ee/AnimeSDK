#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"

class Class_1_43BD383C98B4C0C5_78;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BATTLESTATSSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B8FDF0)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B8FEF0)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B90120)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x12B90180)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x12B901A0)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B90230)
#define MOLEMOLE_BATTLESTATSSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x12B902C0)

namespace MoleMole
{
	inline static constexpr unsigned int BattleStatsSubsystem_TypeDefinitionIndex = 52066;

	class BattleStatsSubsystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::BattleStatsSubsystem*>
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_78*>* _pluginMap; // 0x10

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
