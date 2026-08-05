#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F5ACAAB9AA1EB49.h"
#include "unitysdk/Class_2_940A1D9EF1C28B1E_Struct_2_A0C40EC639558446.h"

class Class_0_16E4307DCC419505_135;
class Class_2_4BE21148C8967B21_1;
class Class_2_B994F46AE011E30F_Class_3_39A40967163C2EB6;
class Class_3_1A345EAE5F749316_28;
class Class_3_EC29F18BBE7CB327;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_152;
template <typename T> class Class_0_16E4307DCC41950C_14;

#define CLASS_2_B994F46AE011E30F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1683AB60)
#define CLASS_2_B994F46AE011E30F_METHOD_2_042CACFBE48A6E91_OFFSET UNITYSDK_OFFSET(0x1683CFD0)
#define CLASS_2_B994F46AE011E30F_METHOD_2_182CD42E5078143A_OFFSET UNITYSDK_OFFSET(0x1683B220)
#define CLASS_2_B994F46AE011E30F_METHOD_2_591422C7528B58C8_OFFSET UNITYSDK_OFFSET(0x1683B750)
#define CLASS_2_B994F46AE011E30F_METHOD_2_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x1683C440)
#define CLASS_2_B994F46AE011E30F_METHOD_2_9361EDC21D83DCE2_OFFSET UNITYSDK_OFFSET(0x1683C450)
#define CLASS_2_B994F46AE011E30F_METHOD_2_AE9D180BC3B04D1A_OFFSET UNITYSDK_OFFSET(0x1683A120)
#define CLASS_2_B994F46AE011E30F_METHOD_2_B950D774316E97B5_OFFSET UNITYSDK_OFFSET(0x1683AC90)
#define CLASS_2_B994F46AE011E30F_METHOD_2_C8334045F249DF96_OFFSET UNITYSDK_OFFSET(0x1683AF40)
#define CLASS_2_B994F46AE011E30F_METHOD_2_F8DD904435F624C4_OFFSET UNITYSDK_OFFSET(0x1683D0D0)
#define CLASS_2_B994F46AE011E30F_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x16839630)
#define CLASS_2_B994F46AE011E30F__CTOR_OFFSET UNITYSDK_OFFSET(0x1683AC80)

inline static constexpr unsigned int Class_2_B994F46AE011E30F_TypeDefinitionIndex = 64299;

class Class_2_B994F46AE011E30F : public ::Class_1_5F5ACAAB9AA1EB49
{
public:
	::Class_0_16E4307DCC419505_135* Field_2_10; // 0x80
	::Class_2_4BE21148C8967B21_1* Field_2_0; // 0x88
	::Class_0_16E4307DCC419505_152<::System::Boolean>* Field_2_5; // 0x90
	::Class_2_B994F46AE011E30F_Class_3_39A40967163C2EB6* Field_2_1; // 0x98
	::Class_0_16E4307DCC419505_152<::System::Boolean>* Field_2_6; // 0xA0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_0_16E4307DCC419505_152<::System::Int32>*>* Field_2_11; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_0_16E4307DCC419505_152<::System::Int32>*>* Field_2_4; // 0xB0
	::Class_0_16E4307DCC41950C_14<::Class_2_940A1D9EF1C28B1E_Struct_2_A0C40EC639558446>* Field_2_7; // 0xB8
	::System::UInt32 Field_2_2; // 0xC0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B950D774316E97B5(::Class_3_EC29F18BBE7CB327* a1, ::Class_3_1A345EAE5F749316_28* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC29F18BBE7CB327*, ::Class_3_1A345EAE5F749316_28*))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_B950D774316E97B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8334045F249DF96(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_C8334045F249DF96_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AE9D180BC3B04D1A(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_AE9D180BC3B04D1A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_182CD42E5078143A(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_182CD42E5078143A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_591422C7528B58C8(::Class_2_B994F46AE011E30F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B994F46AE011E30F*))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_591422C7528B58C8_OFFSET))(this, a1);
	}

	::System::Void Method_2_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_2_9361EDC21D83DCE2(::Class_2_B994F46AE011E30F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B994F46AE011E30F*))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_9361EDC21D83DCE2_OFFSET))(this, a1);
	}

	::System::Void Method_2_042CACFBE48A6E91(::System::Collections::Generic::List_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_042CACFBE48A6E91_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F8DD904435F624C4(::System::UInt32 a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_B994F46AE011E30F_METHOD_2_F8DD904435F624C4_OFFSET))(this, a1, a2);
	}
};
