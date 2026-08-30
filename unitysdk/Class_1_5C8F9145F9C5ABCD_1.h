#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F47F7A3F5E97970D;
class Class_3_1E4F9B0ED3BF21DE;
namespace System { class String; }

#define CLASS_1_5C8F9145F9C5ABCD_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1599F610)
#define CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x1599F560)
#define CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_A37EF40E0E62AE02_OFFSET UNITYSDK_OFFSET(0x1599F4F0)
#define CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_C9B1A5C2559C8ED0_OFFSET UNITYSDK_OFFSET(0x1599F5B0)
#define CLASS_1_5C8F9145F9C5ABCD_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1599F4E0)

inline static constexpr unsigned int Class_1_5C8F9145F9C5ABCD_1_TypeDefinitionIndex = 76419;

class Class_1_5C8F9145F9C5ABCD_1 : public ::System::Object
{
public:
	::Class_3_1E4F9B0ED3BF21DE* PDENFEFCAGN; // 0x10
	::Class_2_F47F7A3F5E97970D* FKINCGODJEP; // 0x18

	::System::Void _ctor(::Class_2_F47F7A3F5E97970D* a1, ::Class_3_1E4F9B0ED3BF21DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F47F7A3F5E97970D*, ::Class_3_1E4F9B0ED3BF21DE*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A37EF40E0E62AE02(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_A37EF40E0E62AE02_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_C9B1A5C2559C8ED0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_METHOD_1_C9B1A5C2559C8ED0_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5C8F9145F9C5ABCD_1_DISPOSE_OFFSET))(this);
	}
};
