#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5B5094F4A6448D81;
class Class_2_6DE5FBED45BCAC88;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_177B5AC7D9CBB7CA_METHOD_1_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x141C0D00)
#define CLASS_1_177B5AC7D9CBB7CA_METHOD_1_AD464DD6CDC243C2_OFFSET UNITYSDK_OFFSET(0x141C13F0)
#define CLASS_1_177B5AC7D9CBB7CA__CTOR_OFFSET UNITYSDK_OFFSET(0x141C0CF0)

inline static constexpr unsigned int Class_1_177B5AC7D9CBB7CA_TypeDefinitionIndex = 48004;

class Class_1_177B5AC7D9CBB7CA : public ::System::Object
{
public:
	::Class_2_6DE5FBED45BCAC88* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5B5094F4A6448D81*>*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_6DE5FBED45BCAC88* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_6DE5FBED45BCAC88*))((::PBYTE)hIl2Cpp + CLASS_1_177B5AC7D9CBB7CA__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_177B5AC7D9CBB7CA_METHOD_1_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5B5094F4A6448D81*>*>* Method_1_AD464DD6CDC243C2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_5B5094F4A6448D81*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_177B5AC7D9CBB7CA_METHOD_1_AD464DD6CDC243C2_OFFSET))(this);
	}
};
