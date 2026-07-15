#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E40337C55D87F197;
namespace System { class String; }

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS56_0__ADDTEM_B__0_OFFSET UNITYSDK_OFFSET(0x162EAD30)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS56_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162E76A0)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass56_0_TypeDefinitionIndex = 56956;

class Class_2_54CCD44980580DB7___c__DisplayClass56_0 : public ::System::Object
{
public:
	::System::String* path; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS56_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _Addtem_b__0(::Class_1_E40337C55D87F197* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E40337C55D87F197*))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS56_0__ADDTEM_B__0_OFFSET))(this, a1);
	}
};
