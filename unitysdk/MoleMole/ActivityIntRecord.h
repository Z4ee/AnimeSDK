#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityBaseRecord.h"

#define MOLEMOLE_ACTIVITYINTRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x13EBABF0)
#define MOLEMOLE_ACTIVITYINTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBAC00)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityIntRecord_TypeDefinitionIndex = 55033;

	class ActivityIntRecord : public ::MoleMole::ActivityBaseRecord
	{
	public:
		::System::Int32 value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYINTRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYINTRECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
