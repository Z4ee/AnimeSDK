#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
template <typename T> class Class_1_2E4F8309DC17256A;

inline static constexpr unsigned int Class_1_2E4F8309DC17256A_TypeDefinitionIndex = 47284;

template <typename T>
class Class_1_2E4F8309DC17256A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Queue_1<::Class_1_2E4F8309DC17256A<T>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Queue_1<::Class_1_2E4F8309DC17256A<T>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E4F8309DC17256A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Class_1_2E4F8309DC17256A<T>** StaticGet_Field_1_1()
	{
		return (::Class_1_2E4F8309DC17256A<T>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E4F8309DC17256A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::HashSet_1<T>* Field_1_2; // 0x0
};
