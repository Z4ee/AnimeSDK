#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF8E829F802476F6;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F42B4A17001C2F64_METHOD_1_EC7DC7FA5B23736B_OFFSET UNITYSDK_OFFSET(0x117CBA40)
#define CLASS_1_F42B4A17001C2F64__CTOR_OFFSET UNITYSDK_OFFSET(0x117CB9C0)

inline static constexpr unsigned int Class_1_F42B4A17001C2F64_TypeDefinitionIndex = 65549;

class Class_1_F42B4A17001C2F64 : public ::System::Object
{
public:
	::System::String* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CF8E829F802476F6*>* Field_1_6; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F42B4A17001C2F64__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC7DC7FA5B23736B(::Class_1_CF8E829F802476F6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CF8E829F802476F6*))((::PBYTE)hIl2Cpp + CLASS_1_F42B4A17001C2F64_METHOD_1_EC7DC7FA5B23736B_OFFSET))(this, a1);
	}
};
