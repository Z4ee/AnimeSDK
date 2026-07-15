#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueBlackboardResultHandleTime.h"
#include "unitysdk/System/Attribute.h"

#define CLASS_2_BBC3FCD21050B76F_GET_HANDLETIME_OFFSET UNITYSDK_OFFSET(0x177B3CA0)
#define CLASS_2_BBC3FCD21050B76F__CTOR_OFFSET UNITYSDK_OFFSET(0x177B3C90)

inline static constexpr unsigned int Class_2_BBC3FCD21050B76F_TypeDefinitionIndex = 64130;

class Class_2_BBC3FCD21050B76F : public ::System::Attribute
{
public:
	::RPG::Client::RogueBlackboardResultHandleTime _HandleTime_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::Client::RogueBlackboardResultHandleTime a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBlackboardResultHandleTime))((::PBYTE)hIl2Cpp + CLASS_2_BBC3FCD21050B76F__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::RogueBlackboardResultHandleTime get_HandleTime()
	{
		return ((::RPG::Client::RogueBlackboardResultHandleTime(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BBC3FCD21050B76F_GET_HANDLETIME_OFFSET))(this);
	}
};
