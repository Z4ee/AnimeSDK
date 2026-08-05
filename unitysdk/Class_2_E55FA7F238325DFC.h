#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_E55FA7F238325DFC_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x12783260)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x12783650)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x127833E0)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_7856135E507F55C9_OFFSET UNITYSDK_OFFSET(0x12783510)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x12783670)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x127835B0)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12783470)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12783660)
#define CLASS_2_E55FA7F238325DFC_METHOD_2_F5CD8BFA444150BD_OFFSET UNITYSDK_OFFSET(0x12783500)
#define CLASS_2_E55FA7F238325DFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12783360)
#define CLASS_2_E55FA7F238325DFC__CTOR_OFFSET UNITYSDK_OFFSET(0x127833D0)

inline static constexpr unsigned int Class_2_E55FA7F238325DFC_TypeDefinitionIndex = 62652;

class Class_2_E55FA7F238325DFC : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0x10D; // 0x0
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F5CD8BFA444150BD(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_F5CD8BFA444150BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_7856135E507F55C9(::System::UInt32 a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_7856135E507F55C9_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E55FA7F238325DFC_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}
};
