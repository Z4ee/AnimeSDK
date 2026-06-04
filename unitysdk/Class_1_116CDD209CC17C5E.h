#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;

#define CLASS_1_116CDD209CC17C5E_METHOD_1_AE5D64AFF5895646_OFFSET UNITYSDK_OFFSET(0x1AC2EC90)
#define CLASS_1_116CDD209CC17C5E_METHOD_1_C8BCEF0B0E185EF7_OFFSET UNITYSDK_OFFSET(0x1AC2EBE0)
#define CLASS_1_116CDD209CC17C5E_METHOD_1_CB06FC0C3AF79E07_OFFSET UNITYSDK_OFFSET(0x1AC2EC30)
#define CLASS_1_116CDD209CC17C5E__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC2EFF0)

inline static constexpr unsigned int Class_1_116CDD209CC17C5E_TypeDefinitionIndex = 40691;

class Class_1_116CDD209CC17C5E : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_116CDD209CC17C5E__CTOR_OFFSET))(this);
	}

	::System::Object* Method_1_C8BCEF0B0E185EF7(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_116CDD209CC17C5E_METHOD_1_C8BCEF0B0E185EF7_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB06FC0C3AF79E07(::System::Object* a1, ::Class_1_7B4E9156998275BE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_116CDD209CC17C5E_METHOD_1_CB06FC0C3AF79E07_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AE5D64AFF5895646(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_116CDD209CC17C5E_METHOD_1_AE5D64AFF5895646_OFFSET))(this, a1);
	}
};
