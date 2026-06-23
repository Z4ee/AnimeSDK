#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseRedDotRecord.h"

#define MOLEMOLE_ACTIVITYREDDOTGROCERYTASKNEWREDDOT_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x126E0AF0)
#define MOLEMOLE_ACTIVITYREDDOTGROCERYTASKNEWREDDOT__CTOR_OFFSET UNITYSDK_OFFSET(0x126E0B00)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityRedDotGroceryTaskNewRedDot_TypeDefinitionIndex = 43365;

	class ActivityRedDotGroceryTaskNewRedDot : public ::MoleMole::BaseRedDotRecord
	{
	public:
		::System::Boolean recordNew; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTGROCERYTASKNEWREDDOT__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYREDDOTGROCERYTASKNEWREDDOT_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
