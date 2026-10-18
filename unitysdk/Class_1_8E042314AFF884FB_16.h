#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_49BF32227D4B78A8;

#define CLASS_1_8E042314AFF884FB_16_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE240810)
#define CLASS_1_8E042314AFF884FB_16_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xE240A30)
#define CLASS_1_8E042314AFF884FB_16__CTOR_OFFSET UNITYSDK_OFFSET(0xE240800)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_16_TypeDefinitionIndex = 77310;

class Class_1_8E042314AFF884FB_16 : public ::System::Object
{
public:
	::Class_3_49BF32227D4B78A8* PDENFEFCAGN; // 0x10
	::Class_1_3B1EA953A4067E26_2* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_49BF32227D4B78A8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_49BF32227D4B78A8*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_16__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_16_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_16_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}
};
