#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_32;
class Class_0_16E4307DCC419505_46;

#define CLASS_1_FD893FD36F6A3A6D_METHOD_1_66F6D05493E82CD1_OFFSET UNITYSDK_OFFSET(0x1C262D40)
#define CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C262D30)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_TypeDefinitionIndex = 25762;

class Class_1_FD893FD36F6A3A6D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_32* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_46* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_32* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_32*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_46* Method_1_66F6D05493E82CD1()
	{
		return ((::Class_0_16E4307DCC419505_46*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_METHOD_1_66F6D05493E82CD1_OFFSET))(this);
	}
};
