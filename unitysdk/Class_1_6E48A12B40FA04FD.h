#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6E48A12B40FA04FD__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0F8A0)

inline static constexpr unsigned int Class_1_6E48A12B40FA04FD_TypeDefinitionIndex = 53551;

class Class_1_6E48A12B40FA04FD : public ::System::Object
{
public:
	::System::Double Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Double Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6E48A12B40FA04FD__CTOR_OFFSET))(this);
	}
};
