#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FD6CE828EA52CE76_METHOD_1_2415334A88CE1912_OFFSET UNITYSDK_OFFSET(0x10473520)

inline static constexpr unsigned int Class_1_FD6CE828EA52CE76_TypeDefinitionIndex = 51086;

class Class_1_FD6CE828EA52CE76 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_2415334A88CE1912(::MoleMole::EntityHandle a1)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_1_FD6CE828EA52CE76_METHOD_1_2415334A88CE1912_OFFSET))(a1);
	}
};
