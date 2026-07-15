#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_E5D42258D5812C5D_METHOD_1_12C6880CB9F722B6_OFFSET UNITYSDK_OFFSET(0x16724980)
#define CLASS_1_E5D42258D5812C5D__CTOR_OFFSET UNITYSDK_OFFSET(0x16724A10)

inline static constexpr unsigned int Class_1_E5D42258D5812C5D_TypeDefinitionIndex = 76092;

class Class_1_E5D42258D5812C5D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5D42258D5812C5D__CTOR_OFFSET))(this);
	}

	::RPG::CustomRP::Quality Method_1_12C6880CB9F722B6()
	{
		return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E5D42258D5812C5D_METHOD_1_12C6880CB9F722B6_OFFSET))(this);
	}
};
