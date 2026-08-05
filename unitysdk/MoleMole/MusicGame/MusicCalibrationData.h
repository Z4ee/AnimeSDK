#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_MUSICGAME_MUSICCALIBRATIONDATA_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18092380)
#define MOLEMOLE_MUSICGAME_MUSICCALIBRATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18092390)

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int MusicCalibrationData_TypeDefinitionIndex = 60585;

	class MusicCalibrationData : public ::System::Object
	{
	public:
		::System::Int32 inputDelayTimeMs; // 0x10
		::System::UInt32 inputDelayTimeMsTimestamp; // 0x14
		::System::Int32 audioVideoDelayTimeMs; // 0x18
		::System::UInt32 audioVideoDelayTimeMsTimestamp; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_MUSICCALIBRATIONDATA__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Timestamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MUSICGAME_MUSICCALIBRATIONDATA_GET_TIMESTAMP_OFFSET))(this);
		}
	};
}
