#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26;
class Class_3_D637C1E17FCBBFB0;
class Class_3_DCB7F8B839F0C44B_3;

#define CLASS_1_8E042314AFF884FB_18_EXECUTE_OFFSET UNITYSDK_OFFSET(0x119E5A30)
#define CLASS_1_8E042314AFF884FB_18_METHOD_1_4AA7827CFB505DDD_OFFSET UNITYSDK_OFFSET(0x119E6D40)
#define CLASS_1_8E042314AFF884FB_18__CTOR_OFFSET UNITYSDK_OFFSET(0x119E5A20)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_18_TypeDefinitionIndex = 71192;

class Class_1_8E042314AFF884FB_18 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26* Field_1_0; // 0x10
	::Class_3_D637C1E17FCBBFB0* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_3B1EA953A4067E26* a1, ::Class_3_D637C1E17FCBBFB0* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26*, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_18__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_18_EXECUTE_OFFSET))(this);
	}

	::Class_3_DCB7F8B839F0C44B_3* Method_1_4AA7827CFB505DDD()
	{
		return ((::Class_3_DCB7F8B839F0C44B_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_18_METHOD_1_4AA7827CFB505DDD_OFFSET))(this);
	}
};
