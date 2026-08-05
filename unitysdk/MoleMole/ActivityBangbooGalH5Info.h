#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ActivityBangbooGalH5Info_ProgressInfo; }

#define MOLEMOLE_ACTIVITYBANGBOOGALH5INFO__CTOR_OFFSET UNITYSDK_OFFSET(0x150D69A0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityBangbooGalH5Info_TypeDefinitionIndex = 90146;

	class ActivityBangbooGalH5Info : public ::System::Object
	{
	public:
		::System::Int32 is_finish; // 0x10
		::MoleMole::ActivityBangbooGalH5Info_ProgressInfo* spot; // 0x18
		::MoleMole::ActivityBangbooGalH5Info_ProgressInfo* ending; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYBANGBOOGALH5INFO__CTOR_OFFSET))(this);
		}
	};
}
