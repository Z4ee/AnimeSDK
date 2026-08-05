#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_90DF5B862A50C369_METHOD_1_7E692C4823C131A7_OFFSET UNITYSDK_OFFSET(0x180E9560)
#define CLASS_1_90DF5B862A50C369_METHOD_1_96AA0089A7F831C0_OFFSET UNITYSDK_OFFSET(0x180E94B0)
#define CLASS_1_90DF5B862A50C369__CTOR_OFFSET UNITYSDK_OFFSET(0x180E94A0)

inline static constexpr unsigned int Class_1_90DF5B862A50C369_TypeDefinitionIndex = 89150;

class Class_1_90DF5B862A50C369 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20
	::System::Boolean Field_1_1; // 0x28
	::System::Int32 Field_1_3; // 0x2C
	::System::Int32 Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_90DF5B862A50C369__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96AA0089A7F831C0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_90DF5B862A50C369_METHOD_1_96AA0089A7F831C0_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E692C4823C131A7(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_90DF5B862A50C369_METHOD_1_7E692C4823C131A7_OFFSET))(this, a1);
	}
};
