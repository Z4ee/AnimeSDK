#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5B09D01242BFD305_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17FE1460)
#define CLASS_1_5B09D01242BFD305__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE1180)

inline static constexpr unsigned int Class_1_5B09D01242BFD305_TypeDefinitionIndex = 70114;

class Class_1_5B09D01242BFD305 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KMNGCDGOEDH; // 0x10
	::Il2CppArray<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>* OABGIBHDCGE; // 0x18
	::Il2CppArray<::System::Int32>* FEECLLNNNLF; // 0x20

	::System::Void _ctor(::Il2CppArray<::System::Int32>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5B09D01242BFD305__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B09D01242BFD305_DISPOSE_OFFSET))(this);
	}
};
