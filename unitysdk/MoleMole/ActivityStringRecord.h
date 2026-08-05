#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityBaseRecord.h"

namespace System { class String; }

#define MOLEMOLE_ACTIVITYSTRINGRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x16C14DF0)
#define MOLEMOLE_ACTIVITYSTRINGRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C14E00)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityStringRecord_TypeDefinitionIndex = 45440;

	class ActivityStringRecord : public ::MoleMole::ActivityBaseRecord
	{
	public:
		::System::String* content; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYSTRINGRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYSTRINGRECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
