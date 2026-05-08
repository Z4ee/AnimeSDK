#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseRedDotRecord.h"

#define MOLEMOLE_ACTIVITYREDDOTGROCERYGUIDERECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x1397AA80)
#define MOLEMOLE_ACTIVITYREDDOTGROCERYGUIDERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1397AA90)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRedDotGroceryGuideRecord_TypeDefinitionIndex = 43875;

	class ActivityRedDotGroceryGuideRecord : public ::MoleMole::BaseRedDotRecord
	{
	public:
		::System::Byte unlockCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTGROCERYGUIDERECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTGROCERYGUIDERECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
