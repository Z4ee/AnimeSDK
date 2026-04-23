#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A0302E9AE0B8A2B9;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedListNode_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_50CE674A1CC8D339_METHOD_1_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0x128EABA0)
#define CLASS_1_50CE674A1CC8D339_METHOD_1_358A144584A5DBFC_OFFSET UNITYSDK_OFFSET(0x128EB070)
#define CLASS_1_50CE674A1CC8D339_METHOD_1_6B042234886E3394_OFFSET UNITYSDK_OFFSET(0x128EB140)
#define CLASS_1_50CE674A1CC8D339_METHOD_1_8E47676A7A416868_OFFSET UNITYSDK_OFFSET(0x128EAF10)
#define CLASS_1_50CE674A1CC8D339_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x128EB0E0)
#define CLASS_1_50CE674A1CC8D339_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x128EB130)
#define CLASS_1_50CE674A1CC8D339__CTOR_OFFSET UNITYSDK_OFFSET(0x128EB290)

inline static constexpr unsigned int Class_1_50CE674A1CC8D339_TypeDefinitionIndex = 54787;

class Class_1_50CE674A1CC8D339 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_1_A0302E9AE0B8A2B9*, ::System::Collections::Generic::LinkedListNode_1<::Class_1_A0302E9AE0B8A2B9*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::LinkedListNode_1<::Class_1_A0302E9AE0B8A2B9*>*>* Field_1_3; // 0x18
	::System::Collections::Generic::LinkedList_1<::Class_1_A0302E9AE0B8A2B9*>* Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_32460A23F1A1DEF1(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339_METHOD_1_32460A23F1A1DEF1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8E47676A7A416868(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339_METHOD_1_8E47676A7A416868_OFFSET))(this, a1);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_358A144584A5DBFC()
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339_METHOD_1_358A144584A5DBFC_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_6B042234886E3394(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_50CE674A1CC8D339_METHOD_1_6B042234886E3394_OFFSET))(this, a1);
	}
};
