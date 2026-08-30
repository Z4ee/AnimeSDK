#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_5B95CBB327906B08_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x15590D10)
#define CLASS_1_5B95CBB327906B08__CTOR_OFFSET UNITYSDK_OFFSET(0x15590D00)

inline static constexpr unsigned int Class_1_5B95CBB327906B08_TypeDefinitionIndex = 67038;

class Class_1_5B95CBB327906B08 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B95CBB327906B08__CTOR_OFFSET))(this);
	}

	::System::Void TriggerAction()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B95CBB327906B08_TRIGGERACTION_OFFSET))(this);
	}
};
