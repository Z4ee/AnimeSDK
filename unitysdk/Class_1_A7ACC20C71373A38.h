#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"

class Class_1_105C32866538BE74;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A7ACC20C71373A38_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D0EA1A0)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1D0EA500)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_5C6E1CA11918F3B1_OFFSET UNITYSDK_OFFSET(0x1D0EA090)
#define CLASS_1_A7ACC20C71373A38_METHOD_1_71FA9DF61A88645A_OFFSET UNITYSDK_OFFSET(0x1D0E9D10)
#define CLASS_1_A7ACC20C71373A38__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0EA5C0)

inline static constexpr unsigned int Class_1_A7ACC20C71373A38_TypeDefinitionIndex = 41513;

class Class_1_A7ACC20C71373A38 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Guid, ::System::Object*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_71FA9DF61A88645A(::Class_1_105C32866538BE74* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_105C32866538BE74*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_71FA9DF61A88645A_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_1_5C6E1CA11918F3B1(::Class_1_105C32866538BE74* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_105C32866538BE74*))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_5C6E1CA11918F3B1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_DISPOSE_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7ACC20C71373A38_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
