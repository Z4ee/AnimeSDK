#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9505641EB996F055.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_420B9A7615F4ACC2__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7B700)

inline static constexpr unsigned int Class_1_420B9A7615F4ACC2_TypeDefinitionIndex = 80134;

class Class_1_420B9A7615F4ACC2 : public ::System::Object
{
public:
	::Struct_2_9505641EB996F055 Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Int32 Field_1_6; // 0x18
	::System::Int32 Field_1_7; // 0x1C
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_420B9A7615F4ACC2__CTOR_OFFSET))(this);
	}
};
