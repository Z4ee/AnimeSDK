#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ACTIVITYWEBLINKTRAININGINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x10CCB8E0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityWeblinkTrainingInfo_TypeDefinitionIndex = 66035;

	class ActivityWeblinkTrainingInfo : public ::System::Object
	{
	public:
		::System::Int32 phase; // 0x10
		::System::Int32 phase_down; // 0x14
		::System::Int32 check_in_num; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYWEBLINKTRAININGINFO__CTOR_OFFSET))(this);
		}
	};
}
