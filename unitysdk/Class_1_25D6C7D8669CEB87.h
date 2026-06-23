#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_25D6C7D8669CEB87_METHOD_1_537A7BA45506EEB5_OFFSET UNITYSDK_OFFSET(0x127725A0)
#define CLASS_1_25D6C7D8669CEB87_METHOD_1_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x12772550)
#define CLASS_1_25D6C7D8669CEB87__CTOR_OFFSET UNITYSDK_OFFSET(0x12772540)

inline static constexpr unsigned int Class_1_25D6C7D8669CEB87_TypeDefinitionIndex = 84276;

class Class_1_25D6C7D8669CEB87 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x20
	::System::Boolean Field_1_2; // 0x28
	::System::Int32 Field_1_1; // 0x2C
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25D6C7D8669CEB87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_25D6C7D8669CEB87_METHOD_1_7E692C4823C131A7_OFFSET))(this, a1);
	}

	::System::Void Method_1_537A7BA45506EEB5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_25D6C7D8669CEB87_METHOD_1_537A7BA45506EEB5_OFFSET))(this, a1);
	}
};
