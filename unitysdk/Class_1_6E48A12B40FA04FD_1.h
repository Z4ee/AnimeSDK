#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6E48A12B40FA04FD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9708760)

inline static constexpr unsigned int Class_1_6E48A12B40FA04FD_1_TypeDefinitionIndex = 57125;

class Class_1_6E48A12B40FA04FD_1 : public ::System::Object
{
public:
	::System::Double Field_1_2; // 0x10
	::System::Double Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::System::Double Field_1_6; // 0x28
	::System::UInt32 Field_1_5; // 0x30
	::System::UInt32 Field_1_4; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E48A12B40FA04FD_1__CTOR_OFFSET))(this);
	}
};
