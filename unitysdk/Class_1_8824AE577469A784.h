#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_52A902145F5BE513_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8824AE577469A784_CLEAR_OFFSET UNITYSDK_OFFSET(0x180EADD0)
#define CLASS_1_8824AE577469A784__CTOR_OFFSET UNITYSDK_OFFSET(0x180EB110)

inline static constexpr unsigned int Class_1_8824AE577469A784_TypeDefinitionIndex = 40763;

class Class_1_8824AE577469A784 : public ::System::Object
{
public:
	::Struct_2_52A902145F5BE513_1 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8824AE577469A784__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8824AE577469A784_CLEAR_OFFSET))(this);
	}
};
