#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseRedDotRecord.h"

#define MOLEMOLE_ACTIVITYREDDOTWEBLINKRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x174258A0)
#define MOLEMOLE_ACTIVITYREDDOTWEBLINKRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x174258B0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRedDotWeblinkRecord_TypeDefinitionIndex = 68211;

	class ActivityRedDotWeblinkRecord : public ::MoleMole::BaseRedDotRecord
	{
	public:
		::System::UInt32 weblinkID; // 0x10
		::System::UInt32 weblinkVersion; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTWEBLINKRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTWEBLINKRECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
