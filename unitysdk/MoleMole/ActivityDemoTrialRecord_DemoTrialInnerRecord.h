#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ACTIVITYDEMOTRIALRECORD_DEMOTRIALINNERRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xF1197C0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityDemoTrialRecord_DemoTrialInnerRecord_TypeDefinitionIndex = 46805;

	class ActivityDemoTrialRecord_DemoTrialInnerRecord : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::Boolean played; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYDEMOTRIALRECORD_DEMOTRIALINNERRECORD__CTOR_OFFSET))(this);
		}
	};
}
