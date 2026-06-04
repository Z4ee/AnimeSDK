#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F713D8ADA87F44A;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE2C11D41E955545_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13912D80)
#define CLASS_1_BE2C11D41E955545_METHOD_1_2F61F9679BAC0084_OFFSET UNITYSDK_OFFSET(0x13912720)
#define CLASS_1_BE2C11D41E955545_METHOD_1_2F7E7A0CBFFDFF0D_OFFSET UNITYSDK_OFFSET(0x13912B00)
#define CLASS_1_BE2C11D41E955545_METHOD_1_69C99C07E3B7351D_OFFSET UNITYSDK_OFFSET(0x13912CD0)
#define CLASS_1_BE2C11D41E955545_METHOD_1_777B0266200FB1A1_OFFSET UNITYSDK_OFFSET(0x13912900)
#define CLASS_1_BE2C11D41E955545_METHOD_1_BE4BBAC81A38FEE6_OFFSET UNITYSDK_OFFSET(0x139122B0)
#define CLASS_1_BE2C11D41E955545__CTOR_OFFSET UNITYSDK_OFFSET(0x139122A0)

inline static constexpr unsigned int Class_1_BE2C11D41E955545_TypeDefinitionIndex = 69108;

class Class_1_BE2C11D41E955545 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_8F713D8ADA87F44A*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE4BBAC81A38FEE6(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_BE4BBAC81A38FEE6_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F61F9679BAC0084(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_2F61F9679BAC0084_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_777B0266200FB1A1(::System::Collections::Generic::List_1<::Class_1_8F713D8ADA87F44A*>* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8F713D8ADA87F44A*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_777B0266200FB1A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2F7E7A0CBFFDFF0D(::Class_1_BE2C11D41E955545* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE2C11D41E955545*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_2F7E7A0CBFFDFF0D_OFFSET))(this, a1);
	}

	::Class_1_8F713D8ADA87F44A* Method_1_69C99C07E3B7351D(::System::Type* a1)
	{
		return ((::Class_1_8F713D8ADA87F44A*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_METHOD_1_69C99C07E3B7351D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BE2C11D41E955545_DISPOSE_OFFSET))(this);
	}
};
