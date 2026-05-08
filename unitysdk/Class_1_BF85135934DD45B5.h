#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

class Class_0_16E4307DCC419505_480;
class Class_1_769471637ABAF003;
class Class_2_16B9C35244A9496A_1;
class Class_3_8840398725162854;
class Class_3_8840398725162854_1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }

#define CLASS_1_BF85135934DD45B5_FINALIZE_OFFSET UNITYSDK_OFFSET(0x13F1C860)
#define CLASS_1_BF85135934DD45B5_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x13F1D920)
#define CLASS_1_BF85135934DD45B5_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x13F1CAF0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13F1DA70)
#define CLASS_1_BF85135934DD45B5_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x13F1C9F0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_162A86A145B88DDA_OFFSET UNITYSDK_OFFSET(0x13F1D730)
#define CLASS_1_BF85135934DD45B5_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x13F1CE20)
#define CLASS_1_BF85135934DD45B5_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x13F1D8A0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_3FAD7453A3C18853_OFFSET UNITYSDK_OFFSET(0x13F1D520)
#define CLASS_1_BF85135934DD45B5_METHOD_1_44427657F0D8DA90_1_OFFSET UNITYSDK_OFFSET(0x13F1DC70)
#define CLASS_1_BF85135934DD45B5_METHOD_1_44427657F0D8DA90_OFFSET UNITYSDK_OFFSET(0x13F1DA80)
#define CLASS_1_BF85135934DD45B5_METHOD_1_564449629429CB8C_OFFSET UNITYSDK_OFFSET(0x13F1CCF0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_597C36298FA1754B_OFFSET UNITYSDK_OFFSET(0x13F1D720)
#define CLASS_1_BF85135934DD45B5_METHOD_1_5C3DE6944E8BEF2A_OFFSET UNITYSDK_OFFSET(0x13F1D850)
#define CLASS_1_BF85135934DD45B5_METHOD_1_645EB903F9235220_1_OFFSET UNITYSDK_OFFSET(0x13F1D8B0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_645EB903F9235220_OFFSET UNITYSDK_OFFSET(0x13F1CC90)
#define CLASS_1_BF85135934DD45B5_METHOD_1_7623AF24CA6043B1_OFFSET UNITYSDK_OFFSET(0x13F1C920)
#define CLASS_1_BF85135934DD45B5_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x13F1D840)
#define CLASS_1_BF85135934DD45B5_METHOD_1_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x13F1DBB0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_ADC3869DB41A33AB_OFFSET UNITYSDK_OFFSET(0x13F1D930)
#define CLASS_1_BF85135934DD45B5_METHOD_1_BD3078E21D74E44F_OFFSET UNITYSDK_OFFSET(0x13F1D960)
#define CLASS_1_BF85135934DD45B5_METHOD_1_C43F5FABBA68414A_OFFSET UNITYSDK_OFFSET(0x13F1D440)
#define CLASS_1_BF85135934DD45B5_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x13F1D900)
#define CLASS_1_BF85135934DD45B5_METHOD_1_DF7A378807C2178F_OFFSET UNITYSDK_OFFSET(0x13F1DDA0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_E867027E5DA8665C_OFFSET UNITYSDK_OFFSET(0x13F1CE80)
#define CLASS_1_BF85135934DD45B5_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x13F1D910)
#define CLASS_1_BF85135934DD45B5_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13F1CCE0)
#define CLASS_1_BF85135934DD45B5_METHOD_1_F10BC7BFD4954DDA_OFFSET UNITYSDK_OFFSET(0x13F1D5E0)
#define CLASS_1_BF85135934DD45B5__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1C770)

inline static constexpr unsigned int Class_1_BF85135934DD45B5_TypeDefinitionIndex = 52791;

class Class_1_BF85135934DD45B5 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_BF85135934DD45B5*>** StaticGet_Field_1_8()
	{
		return (::System::Action_1<::Class_1_BF85135934DD45B5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF85135934DD45B5_TypeDefinitionIndex)->GetStaticField(0x3E470);
	}
	static ::System::Action_1<::Class_1_BF85135934DD45B5*>** StaticGet_Field_1_7()
	{
		return (::System::Action_1<::Class_1_BF85135934DD45B5*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF85135934DD45B5_TypeDefinitionIndex)->GetStaticField(0x3E478);
	}
	static ::System::Action_1<::System::UInt32>** StaticGet_Field_1_9()
	{
		return (::System::Action_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF85135934DD45B5_TypeDefinitionIndex)->GetStaticField(0x3E480);
	}
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_480*>* Field_1_4; // 0x10
	::System::String* Field_1_5; // 0x18
	::Class_1_769471637ABAF003* Field_1_2; // 0x20
	::System::Threading::CancellationTokenSource* Field_1_3; // 0x28
	::System::UInt32 Field_1_6; // 0x30
	::System::Int32 Field_1_1; // 0x34
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7623AF24CA6043B1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_7623AF24CA6043B1_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_645EB903F9235220(::System::Action_1<::Class_1_BF85135934DD45B5*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_BF85135934DD45B5*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_645EB903F9235220_OFFSET))(a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_16B9C35244A9496A_1* Method_1_564449629429CB8C(::System::String* a1, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* a2)
	{
		return ((::Class_2_16B9C35244A9496A_1*(*)(::PVOID, ::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_564449629429CB8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_2439B52C953E2E46_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::String* Method_1_E867027E5DA8665C()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_E867027E5DA8665C_OFFSET))(this);
	}

	::System::Void Method_1_C43F5FABBA68414A(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_C43F5FABBA68414A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F10BC7BFD4954DDA(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_F10BC7BFD4954DDA_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Action_1<::System::UInt32>* Method_1_597C36298FA1754B()
	{
		return ((::System::Action_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_597C36298FA1754B_OFFSET))();
	}

	::Class_2_16B9C35244A9496A_1* Method_1_162A86A145B88DDA(::System::String* a1, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* a2)
	{
		return ((::Class_2_16B9C35244A9496A_1*(*)(::PVOID, ::System::String*, ::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_162A86A145B88DDA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_480*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_480*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	static ::System::Void Method_1_5C3DE6944E8BEF2A(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_5C3DE6944E8BEF2A_OFFSET))(a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::Class_1_769471637ABAF003* Method_1_24748FC20F375725()
	{
		return ((::Class_1_769471637ABAF003*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Void Method_1_645EB903F9235220_1(::System::Action_1<::Class_1_BF85135934DD45B5*>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::Class_1_BF85135934DD45B5*>*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_645EB903F9235220_1_OFFSET))(a1);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Threading::CancellationToken Method_1_ADC3869DB41A33AB()
	{
		return ((::System::Threading::CancellationToken(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_ADC3869DB41A33AB_OFFSET))(this);
	}

	::System::Void Method_1_BD3078E21D74E44F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_BD3078E21D74E44F_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::Class_3_8840398725162854* Method_1_44427657F0D8DA90(::System::String* a1)
	{
		return ((::Class_3_8840398725162854*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_44427657F0D8DA90_OFFSET))(this, a1);
	}

	::System::Void Method_1_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FAD7453A3C18853(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_3FAD7453A3C18853_OFFSET))(this, a1, a2);
	}

	::Class_3_8840398725162854_1* Method_1_44427657F0D8DA90_1(::System::String* a1)
	{
		return ((::Class_3_8840398725162854_1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_44427657F0D8DA90_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_480* Method_1_DF7A378807C2178F(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_480*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF85135934DD45B5_METHOD_1_DF7A378807C2178F_OFFSET))(this, a1);
	}
};
