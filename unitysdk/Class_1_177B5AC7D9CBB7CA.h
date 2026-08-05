#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5B5094F4A6448D81;
class Class_2_6DE5FBED45BCAC88;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_177B5AC7D9CBB7CA_METHOD_1_AD464DD6CDC243C2_OFFSET UNITYSDK_OFFSET(0x1249C2F0)
#define CLASS_1_177B5AC7D9CBB7CA_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1249C350)
#define CLASS_1_177B5AC7D9CBB7CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1249C2E0)

inline static constexpr unsigned int Class_1_177B5AC7D9CBB7CA_TypeDefinitionIndex = 50734;

class Class_1_177B5AC7D9CBB7CA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5B5094F4A6448D81*>*>* Field_1_0; // 0x10
	::Class_2_6DE5FBED45BCAC88* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_6DE5FBED45BCAC88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6DE5FBED45BCAC88*))((::PBYTE)hIl2Cpp + CLASS_1_177B5AC7D9CBB7CA__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5B5094F4A6448D81*>*>* Method_1_AD464DD6CDC243C2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5B5094F4A6448D81*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_177B5AC7D9CBB7CA_METHOD_1_AD464DD6CDC243C2_OFFSET))(this);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_177B5AC7D9CBB7CA_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}
};
