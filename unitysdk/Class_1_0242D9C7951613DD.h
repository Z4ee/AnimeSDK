#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0242D9C7951613DD_METHOD_1_43C914C6B1898622_OFFSET UNITYSDK_OFFSET(0x15BBB3F0)
#define CLASS_1_0242D9C7951613DD_METHOD_1_9715923A1DE1FFDF_OFFSET UNITYSDK_OFFSET(0x15BBB3E0)
#define CLASS_1_0242D9C7951613DD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15BBB3C0)
#define CLASS_1_0242D9C7951613DD__CTOR_OFFSET UNITYSDK_OFFSET(0x15BBB3B0)

inline static constexpr unsigned int Class_1_0242D9C7951613DD_TypeDefinitionIndex = 67799;

class Class_1_0242D9C7951613DD : public ::System::Object
{
public:
	::System::Nullable_1<::System::DateTime> Field_1_0; // 0x10

	::System::Void _ctor(::System::Nullable_1<::System::DateTime> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + CLASS_1_0242D9C7951613DD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_0242D9C7951613DD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0242D9C7951613DD*))((::PBYTE)hIl2Cpp + CLASS_1_0242D9C7951613DD__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_9715923A1DE1FFDF(::System::Nullable_1<::System::DateTime> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::DateTime>))((::PBYTE)hIl2Cpp + CLASS_1_0242D9C7951613DD_METHOD_1_9715923A1DE1FFDF_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::DateTime> Method_1_43C914C6B1898622()
	{
		return ((::System::Nullable_1<::System::DateTime>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0242D9C7951613DD_METHOD_1_43C914C6B1898622_OFFSET))(this);
	}
};
