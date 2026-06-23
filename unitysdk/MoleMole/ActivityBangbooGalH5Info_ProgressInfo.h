#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ACTIVITYBANGBOOGALH5INFO_PROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB9AB0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityBangbooGalH5Info_ProgressInfo_TypeDefinitionIndex = 55622;

	class ActivityBangbooGalH5Info_ProgressInfo : public ::System::Object
	{
	public:
		::System::Int32 progress; // 0x10
		::System::Int32 max; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYBANGBOOGALH5INFO_PROGRESSINFO__CTOR_OFFSET))(this);
		}
	};
}
