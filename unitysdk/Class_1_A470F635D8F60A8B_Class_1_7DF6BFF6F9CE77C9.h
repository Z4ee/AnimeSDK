#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D46F243DAF6A123;
class Class_1_A470F635D8F60A8B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A470F635D8F60A8B_CLASS_1_7DF6BFF6F9CE77C9_METHOD_1_A8BE3EB229263387_OFFSET UNITYSDK_OFFSET(0x12B6F100)
#define CLASS_1_A470F635D8F60A8B_CLASS_1_7DF6BFF6F9CE77C9__CTOR_OFFSET UNITYSDK_OFFSET(0x12B6F0F0)

inline static constexpr unsigned int Class_1_A470F635D8F60A8B_Class_1_7DF6BFF6F9CE77C9_TypeDefinitionIndex = 86678;

class Class_1_A470F635D8F60A8B_Class_1_7DF6BFF6F9CE77C9 : public ::System::Object
{
public:
	::System::Int32 Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_CLASS_1_7DF6BFF6F9CE77C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_4D46F243DAF6A123*>* Method_1_A8BE3EB229263387(::Class_1_A470F635D8F60A8B* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4D46F243DAF6A123*>*(*)(::PVOID, ::Class_1_A470F635D8F60A8B*))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_CLASS_1_7DF6BFF6F9CE77C9_METHOD_1_A8BE3EB229263387_OFFSET))(this, a1);
	}
};
