#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1272;

#define CLASS_1_158BD2613EA7A083_METHOD_1_0979F42195623A14_OFFSET UNITYSDK_OFFSET(0x1598E7D0)

inline static constexpr unsigned int Class_1_158BD2613EA7A083_TypeDefinitionIndex = 76825;

class Class_1_158BD2613EA7A083 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_1272* Method_1_0979F42195623A14(::RPG::GameCore::PixAirEventType a1)
	{
		return ((::Class_0_16E4307DCC419505_1272*(*)(::RPG::GameCore::PixAirEventType))((::PBYTE)hIl2Cpp + CLASS_1_158BD2613EA7A083_METHOD_1_0979F42195623A14_OFFSET))(a1);
	}
};
