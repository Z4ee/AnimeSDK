#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityBaseRecord.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYQUESTREDDOTRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x1397A9E0)
#define MOLEMOLE_ACTIVITYQUESTREDDOTRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x1397A9F0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityQuestRedDotRecord_TypeDefinitionIndex = 63463;

	class ActivityQuestRedDotRecord : public ::MoleMole::ActivityBaseRecord
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* reddotIDList; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* clearRedDotIDList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYQUESTREDDOTRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYQUESTREDDOTRECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
