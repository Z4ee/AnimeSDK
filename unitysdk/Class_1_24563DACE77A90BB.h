#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47B7080AF3019ED1;

#define CLASS_1_24563DACE77A90BB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170A3850)
#define CLASS_1_24563DACE77A90BB__CTOR_OFFSET UNITYSDK_OFFSET(0x170A35D0)

inline static constexpr unsigned int Class_1_24563DACE77A90BB_TypeDefinitionIndex = 66439;

class Class_1_24563DACE77A90BB : public ::System::Object
{
public:
	::Class_1_47B7080AF3019ED1* Field_1_0; // 0x10
	::Class_1_47B7080AF3019ED1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24563DACE77A90BB__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24563DACE77A90BB_DISPOSE_OFFSET))(this);
	}
};
