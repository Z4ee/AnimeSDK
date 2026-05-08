#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityBaseRecord.h"

namespace MoleMole { class ActivityDemoTrialRecord_DemoTrialInnerRecord; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x11C75E80)
#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_METHOD_2_378D17F5AC4A22EE_OFFSET UNITYSDK_OFFSET(0x11C75EA0)
#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_METHOD_2_6A1DAFC0B1CFA8E3_OFFSET UNITYSDK_OFFSET(0x11C75F70)
#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C75E90)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialRecord_TypeDefinitionIndex = 60702;

	class ActivityDemoTrialRecord : public ::MoleMole::ActivityBaseRecord
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::ActivityDemoTrialRecord_DemoTrialInnerRecord*>* trialList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_GET_RECORDVERSION_OFFSET))(this);
		}

		::System::Boolean Method_2_378D17F5AC4A22EE(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_METHOD_2_378D17F5AC4A22EE_OFFSET))(this, a1);
		}

		::System::Void Method_2_6A1DAFC0B1CFA8E3(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_METHOD_2_6A1DAFC0B1CFA8E3_OFFSET))(this, a1, a2);
		}
	};
}
