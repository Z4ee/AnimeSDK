#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_2_7102B70A7EF1DE8E;

#define CLASS_2_944CCB987175EFCD_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0xB0E4350)
#define CLASS_2_944CCB987175EFCD__CTOR_OFFSET UNITYSDK_OFFSET(0xB0E43B0)
#define CLASS_2_944CCB987175EFCD__ONBIND_OFFSET UNITYSDK_OFFSET(0xB0E42F0)

inline static constexpr unsigned int Class_2_944CCB987175EFCD_TypeDefinitionIndex = 71836;

class Class_2_944CCB987175EFCD : public ::Class_1_34917908B7833130
{
public:
	::Class_2_7102B70A7EF1DE8E* IAAEBPABFFB; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_944CCB987175EFCD__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_944CCB987175EFCD__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_944CCB987175EFCD_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
	}
};
