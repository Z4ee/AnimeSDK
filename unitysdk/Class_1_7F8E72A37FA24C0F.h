#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_190E3717882702BE_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7F8E72A37FA24C0F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x11B3EAD0)
#define CLASS_1_7F8E72A37FA24C0F_METHOD_1_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x11B3EAB0)
#define CLASS_1_7F8E72A37FA24C0F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11B3EAC0)
#define CLASS_1_7F8E72A37FA24C0F__CTOR_OFFSET UNITYSDK_OFFSET(0x11B3EAA0)

inline static constexpr unsigned int Class_1_7F8E72A37FA24C0F_TypeDefinitionIndex = 71674;

class Class_1_7F8E72A37FA24C0F : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x3E7; // 0x0
	::System::Boolean Field_1_2; // 0x10
	::Enum_3_190E3717882702BE_1 Field_1_5; // 0x14
	::System::Int32 Field_1_4; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F8E72A37FA24C0F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7F8E72A37FA24C0F_METHOD_1_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F8E72A37FA24C0F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7F8E72A37FA24C0F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};
