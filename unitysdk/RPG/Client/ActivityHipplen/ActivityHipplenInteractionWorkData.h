#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenWorkData.h"

#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTIONWORKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F20AA0)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTIONWORKDATA__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8F20B20)
#define RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTIONWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET UNITYSDK_OFFSET(0x8F20C90)

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenInteractionWorkData_TypeDefinitionIndex = 61762;

	class ActivityHipplenInteractionWorkData : public ::RPG::Client::ActivityHipplen::ActivityHipplenWorkData
	{
	public:
		::System::Void _ctor(::System::UInt32 id, ::System::Boolean isFixed, ::System::Boolean isRecommend, ::System::Boolean isFinish, ::System::Boolean isExtra)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTIONWORKDATA__CTOR_OFFSET))(this, id, isFixed, isRecommend, isFinish, isExtra);
		}

		::System::Void _InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTIONWORKDATA__INITWORKEFFECTS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__InitWorkEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHIPPLEN_ACTIVITYHIPPLENINTERACTIONWORKDATA___IFIXBASEPROXY__INITWORKEFFECTS_OFFSET))(this);
		}
	};
}
