#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkData.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA_GETWORKDATARATIOPROBABILITY_OFFSET UNITYSDK_OFFSET(0x8F1CAB0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F1C8C0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8F1C940)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8F1CBA0)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenIncidentWorkData_TypeDefinitionIndex = 61763;

	class ActivityHipplenIncidentWorkData : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData
	{
	public:
		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isFixed, ::System::Boolean isRecommend, ::System::Boolean isFinish, ::System::Boolean isExtra)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINCIDENTWORKDATA__CTOR_OFFSET))(this, id, isFixed, isRecommend, isFinish, isExtra);
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
