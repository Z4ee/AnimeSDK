#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA_GETWORKDATARATIOPROBABILITY_OFFSET UNITYSDK_OFFSET(0xB0D1820)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0D1410)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0xB0D1510)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0xB0D18F0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentWorkData_TypeDefinitionIndex = 70485;

	class ActivityHipplenIncidentWorkData : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData
	{
	public:
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* GetWorkDataRatioProbability()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA_GETWORKDATARATIOPROBABILITY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET))(this);
		}
	};
}
