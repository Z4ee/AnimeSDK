#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_32773243FC0F63F3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0749F84918A525A9_METHOD_1_FA4AF8FC942DAFA0_OFFSET UNITYSDK_OFFSET(0x150183D0)
#define CLASS_1_0749F84918A525A9__CTOR_OFFSET UNITYSDK_OFFSET(0x150182F0)

inline static constexpr unsigned int Class_1_0749F84918A525A9_TypeDefinitionIndex = 15702;

class Class_1_0749F84918A525A9 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::Double>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Double>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::System::Double>* Field_1_3; // 0x28
	::System::Int32 Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0749F84918A525A9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FA4AF8FC942DAFA0(::Class_2_32773243FC0F63F3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_32773243FC0F63F3*))((::PBYTE)hIl2Cpp + CLASS_1_0749F84918A525A9_METHOD_1_FA4AF8FC942DAFA0_OFFSET))(this, a1);
	}
};
