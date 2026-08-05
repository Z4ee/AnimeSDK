#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97C63D8E928BBCB1_METHOD_1_C9C6ADB226061210_OFFSET UNITYSDK_OFFSET(0x1289EFF0)
#define CLASS_1_97C63D8E928BBCB1_METHOD_1_FB1C2CA2727E085A_OFFSET UNITYSDK_OFFSET(0x1289EF50)
#define CLASS_1_97C63D8E928BBCB1__CTOR_OFFSET UNITYSDK_OFFSET(0x1289EF40)

inline static constexpr unsigned int Class_1_97C63D8E928BBCB1_TypeDefinitionIndex = 65701;

class Class_1_97C63D8E928BBCB1 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97C63D8E928BBCB1__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_1_FB1C2CA2727E085A(::Class_1_97C63D8E928BBCB1* a1, ::Class_1_97C63D8E928BBCB1* a2)
	{
		return ((::System::Int32(*)(::Class_1_97C63D8E928BBCB1*, ::Class_1_97C63D8E928BBCB1*))((::PBYTE)hIl2Cpp + CLASS_1_97C63D8E928BBCB1_METHOD_1_FB1C2CA2727E085A_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_C9C6ADB226061210(::Class_1_97C63D8E928BBCB1* a1)
	{
		return ((::System::Int32(*)(::Class_1_97C63D8E928BBCB1*))((::PBYTE)hIl2Cpp + CLASS_1_97C63D8E928BBCB1_METHOD_1_C9C6ADB226061210_OFFSET))(a1);
	}
};
