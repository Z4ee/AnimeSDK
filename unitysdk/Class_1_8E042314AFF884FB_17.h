#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3B1EA953A4067E26_2;
class Class_3_E87E81F3A9C4E052;

#define CLASS_1_8E042314AFF884FB_17_EXECUTE_OFFSET UNITYSDK_OFFSET(0x175FA0B0)
#define CLASS_1_8E042314AFF884FB_17_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x175FA2D0)
#define CLASS_1_8E042314AFF884FB_17__CTOR_OFFSET UNITYSDK_OFFSET(0x175FA0A0)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_17_TypeDefinitionIndex = 73360;

class Class_1_8E042314AFF884FB_17 : public ::System::Object
{
public:
	::Class_1_3B1EA953A4067E26_2* Field_1_0; // 0x10
	::Class_3_E87E81F3A9C4E052* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_3B1EA953A4067E26_2* a1, ::Class_3_E87E81F3A9C4E052* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B1EA953A4067E26_2*, ::Class_3_E87E81F3A9C4E052*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_17__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_17_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_17_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}
};
