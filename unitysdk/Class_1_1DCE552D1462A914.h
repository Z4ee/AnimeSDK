#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1DCE552D1462A914__CTOR_OFFSET UNITYSDK_OFFSET(0x148B55E0)

inline static constexpr unsigned int Class_1_1DCE552D1462A914_TypeDefinitionIndex = 64443;

class Class_1_1DCE552D1462A914 : public ::System::Object
{
public:
	::Struct_2_E614D3B245F96744 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DCE552D1462A914__CTOR_OFFSET))(this);
	}
};
