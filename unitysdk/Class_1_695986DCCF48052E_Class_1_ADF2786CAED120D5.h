#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2626D71FD1EE4F41;
class Class_1_695986DCCF48052E;
class Class_1_695986DCCF48052E_Class_1_ADF2786CAED120D5_Class_1_2F40B79DEBAF2C3A;
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17B5ADD0)
#define CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17B75B50)
#define CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B75990)
#define CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17B75960)

inline static constexpr unsigned int Class_1_695986DCCF48052E_Class_1_ADF2786CAED120D5_TypeDefinitionIndex = 37841;

class Class_1_695986DCCF48052E_Class_1_ADF2786CAED120D5 : public ::System::Object
{
public:
	::Class_1_695986DCCF48052E_Class_1_ADF2786CAED120D5_Class_1_2F40B79DEBAF2C3A* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_695986DCCF48052E* a1, ::System::Int32 a2, ::Class_1_2626D71FD1EE4F41* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_695986DCCF48052E*, ::System::Int32, ::Class_1_2626D71FD1EE4F41*))((::PBYTE)hIl2Cpp + CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Int32>* GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5_GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_695986DCCF48052E_CLASS_1_ADF2786CAED120D5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
