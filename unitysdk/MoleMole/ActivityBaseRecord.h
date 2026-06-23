#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ACTIVITYBASERECORD_GET_RECORDVERSION_OFFSET UNITYSDK_OFFSET(0x13464280)
#define MOLEMOLE_ACTIVITYBASERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x13464290)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityBaseRecord_TypeDefinitionIndex = 80698;

	class ActivityBaseRecord : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYBASERECORD__CTOR_OFFSET))(this);
		}

		::System::UInt16 get_RecordVersion()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYBASERECORD_GET_RECORDVERSION_OFFSET))(this);
		}
	};
}
