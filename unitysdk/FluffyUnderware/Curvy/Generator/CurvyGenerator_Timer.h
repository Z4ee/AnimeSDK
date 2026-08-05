#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1F931720)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_RESET_OFFSET UNITYSDK_OFFSET(0x1F931800)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1F931780)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_VALIDATETIMES_OFFSET UNITYSDK_OFFSET(0x1F931740)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F931810)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CurvyGenerator_Timer_TypeDefinitionIndex = 39654;

	class CurvyGenerator_Timer : public ::System::Object
	{
	public:
		::System::Double lastTimestamp; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER__CTOR_OFFSET))(this);
		}

		static ::System::Double get_Now()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_GET_NOW_OFFSET))();
		}

		::System::Void ValidateTimes(::System::Single timeLimit, ::System::Single editorTimeLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_VALIDATETIMES_OFFSET))(this, timeLimit, editorTimeLimit);
		}

		::System::Boolean Update(::System::Single timeLimit, ::System::Single editorTimeLimit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_UPDATE_OFFSET))(this, timeLimit, editorTimeLimit);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CURVYGENERATOR_TIMER_RESET_OFFSET))(this);
		}
	};
}
