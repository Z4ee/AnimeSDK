#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MAINCITYOBJECTLOOPSTATECONDITION__CTOR_OFFSET UNITYSDK_OFFSET(0x116C5C10)

inline static constexpr unsigned int MainCityObjectLoopStateCondition_TypeDefinitionIndex = 62656;

class MainCityObjectLoopStateCondition : public ::System::Object
{
public:
	::System::Int32 nextStateID; // 0x10
	::System::Int32 stateID; // 0x14
	::System::Int32 nextTime; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAINCITYOBJECTLOOPSTATECONDITION__CTOR_OFFSET))(this);
	}
};
