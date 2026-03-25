#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6945A1468A989492;
class Class_1_AB46F46A9A2F4F71;

#define CLASS_1_F9FBCC956DFCF137_6_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11980860)
#define CLASS_1_F9FBCC956DFCF137_6__CTOR_OFFSET UNITYSDK_OFFSET(0x11980850)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_6_TypeDefinitionIndex = 50614;

class Class_1_F9FBCC956DFCF137_6 : public ::System::Object
{
public:
	::Class_1_6945A1468A989492* Field_1_1; // 0x10
	::Class_1_AB46F46A9A2F4F71* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_AB46F46A9A2F4F71* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AB46F46A9A2F4F71*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_6945A1468A989492* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6945A1468A989492*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
