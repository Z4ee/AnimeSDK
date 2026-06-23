#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_USERLOCALDATAITEM_TEMPLESIMULATIONRECORD__CTOR_OFFSET UNITYSDK_OFFSET(0xC938F50)

namespace MoleMole
{
	inline static constexpr unsigned int UserLocalDataItem_TempleSimulationRecord_TypeDefinitionIndex = 70691;

	class UserLocalDataItem_TempleSimulationRecord : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::DateTime, ::System::Boolean>* RecordTime; // 0x10
		::System::DateTime SelectNoPopTime; // 0x18
		::System::Boolean IsMultiSelectMode; // 0x20
		::System::Int64 NextRefreshTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_USERLOCALDATAITEM_TEMPLESIMULATIONRECORD__CTOR_OFFSET))(this);
		}
	};
}
