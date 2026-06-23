#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_1C02EBEB9BBFB46F.h"
#include "unitysdk/Struct_2_262B2CF9D98CE442.h"
#include "unitysdk/Struct_2_4660A8BF385C2B6D.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E_1.h"
#include "unitysdk/Struct_2_B480C447482976AA.h"
#include "unitysdk/Struct_2_D7552A7A8FE32848.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01F9C1B9491C656B;
class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
class Class_3_4875884AB352B34E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2> class Class_1_5CF0EC0BFBEDEBC5;

#define CLASS_2_738684AF001A78DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x145DC280)
#define CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x145DF7C0)
#define CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x145DF010)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_1_OFFSET UNITYSDK_OFFSET(0x145E0D40)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_2_OFFSET UNITYSDK_OFFSET(0x145E1350)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_3_OFFSET UNITYSDK_OFFSET(0x145E1590)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x145E0900)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_1_OFFSET UNITYSDK_OFFSET(0x145E0C10)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_2_OFFSET UNITYSDK_OFFSET(0x145E18D0)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_3_OFFSET UNITYSDK_OFFSET(0x145E1930)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x145DDC90)
#define CLASS_2_738684AF001A78DA_METHOD_2_31D2DFCB01965F15_OFFSET UNITYSDK_OFFSET(0x145DEEE0)
#define CLASS_2_738684AF001A78DA_METHOD_2_3CD0220E584C4BE6_OFFSET UNITYSDK_OFFSET(0x145DFE10)
#define CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_1_OFFSET UNITYSDK_OFFSET(0x145E0C70)
#define CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_OFFSET UNITYSDK_OFFSET(0x145E0B40)
#define CLASS_2_738684AF001A78DA_METHOD_2_433E5B45A27FACEC_OFFSET UNITYSDK_OFFSET(0x145E0380)
#define CLASS_2_738684AF001A78DA_METHOD_2_490CA2A07334B2BF_OFFSET UNITYSDK_OFFSET(0x145E0460)
#define CLASS_2_738684AF001A78DA_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x145E04F0)
#define CLASS_2_738684AF001A78DA_METHOD_2_695C442400A258C7_OFFSET UNITYSDK_OFFSET(0x145DDCF0)
#define CLASS_2_738684AF001A78DA_METHOD_2_8F1C762667042D16_OFFSET UNITYSDK_OFFSET(0x145DFB90)
#define CLASS_2_738684AF001A78DA_METHOD_2_91A04AAB5E2A212F_OFFSET UNITYSDK_OFFSET(0x145E1B10)
#define CLASS_2_738684AF001A78DA_METHOD_2_97DBEBE14643001A_OFFSET UNITYSDK_OFFSET(0x145DDF80)
#define CLASS_2_738684AF001A78DA_METHOD_2_98710A5E8A56A8E3_OFFSET UNITYSDK_OFFSET(0x145DF160)
#define CLASS_2_738684AF001A78DA_METHOD_2_A7B0EF5061C2B565_OFFSET UNITYSDK_OFFSET(0x145DF920)
#define CLASS_2_738684AF001A78DA_METHOD_2_AF0217B75A766CB5_OFFSET UNITYSDK_OFFSET(0x145E17D0)
#define CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_1_OFFSET UNITYSDK_OFFSET(0x145DCA80)
#define CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_OFFSET UNITYSDK_OFFSET(0x145DD160)
#define CLASS_2_738684AF001A78DA_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x145DC5F0)
#define CLASS_2_738684AF001A78DA_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x145DC650)
#define CLASS_2_738684AF001A78DA_METHOD_2_DAA303608BA32359_OFFSET UNITYSDK_OFFSET(0x145DD840)
#define CLASS_2_738684AF001A78DA_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x145E1990)
#define CLASS_2_738684AF001A78DA_METHOD_2_E89B5E85E1E3F103_OFFSET UNITYSDK_OFFSET(0x145E0160)
#define CLASS_2_738684AF001A78DA_METHOD_2_F1847A5673A1221F_OFFSET UNITYSDK_OFFSET(0x145E0F80)
#define CLASS_2_738684AF001A78DA_METHOD_2_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x145DFB10)
#define CLASS_2_738684AF001A78DA_ONCREATE_OFFSET UNITYSDK_OFFSET(0x145DBF20)
#define CLASS_2_738684AF001A78DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x145DC520)
#define CLASS_2_738684AF001A78DA__CTOR_OFFSET UNITYSDK_OFFSET(0x145DC480)

inline static constexpr unsigned int Class_2_738684AF001A78DA_TypeDefinitionIndex = 72411;

class Class_2_738684AF001A78DA : public ::Foundation::SingletonDisposable_1<::Class_2_738684AF001A78DA*>
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_D7552A7A8FE32848>** StaticGet_Field_2_15()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_D7552A7A8FE32848>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0x35530);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_B480C447482976AA>** StaticGet_Field_2_16()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_B480C447482976AA>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0x35538);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD350);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD351);
	}
	static ::System::Boolean* StaticGet_Field_2_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD352);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD353);
	}
	static ::System::Single* StaticGet_Field_2_11()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD354);
	}
	static ::System::Single* StaticGet_Field_2_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD358);
	}
	static ::System::Boolean* StaticGet_Field_2_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD35C);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD35D);
	}
	static ::System::Boolean* StaticGet_Field_2_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD35E);
	}
	static ::System::Boolean* StaticGet_Field_2_24()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD35F);
	}
	static ::System::Single* StaticGet_Field_2_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD360);
	}
	static ::System::Single* StaticGet_Field_2_14()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD364);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD368);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD369);
	}
	static ::System::Boolean* StaticGet_Field_2_13()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xD36A);
	}
	// static const ::System::Int32 Field_2_0 = 0x80; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Boolean Field_2_2; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_3_4875884AB352B34E*>* Field_2_17; // 0x10
	::Class_1_5CF0EC0BFBEDEBC5<::UnityEngine::GameObject*, ::Class_1_01F9C1B9491C656B*>* Field_2_18; // 0x18
	::Struct_2_4660A8BF385C2B6D Field_2_25; // 0x20
	::Unity::Jobs::JobHandle Field_2_21; // 0x58
	::Unity::Collections::NativeList_1<::Struct_2_9B079B18CA73BD4E_1> Field_2_20; // 0x68
	::Struct_2_262B2CF9D98CE442 Field_2_26; // 0x78
	::Unity::Collections::NativeList_1<::Struct_2_1C02EBEB9BBFB46F> Field_2_19; // 0x98
	::System::Single Field_2_27; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_DISPOSE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	static ::System::Single Method_2_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_OFFSET))();
	}

	::System::Void Method_2_695C442400A258C7(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_695C442400A258C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_DAA303608BA32359(::Class_1_01F9C1B9491C656B* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01F9C1B9491C656B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_DAA303608BA32359_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_97DBEBE14643001A(::UnityEngine::GameObject* a1, ::Class_1_01F9C1B9491C656B*& a2, ::Struct_2_1C02EBEB9BBFB46F& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_01F9C1B9491C656B*&, ::Struct_2_1C02EBEB9BBFB46F&))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_97DBEBE14643001A_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_31D2DFCB01965F15(::Class_3_4875884AB352B34E* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_31D2DFCB01965F15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_BE9B2ED1F0FC9B9F(::Class_1_01F9C1B9491C656B* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01F9C1B9491C656B*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	static ::System::Void Method_2_A7B0EF5061C2B565(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_A7B0EF5061C2B565_OFFSET))(a1);
	}

	static ::System::Void Method_2_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_F730968E2645E14B_OFFSET))();
	}

	::System::Void Method_2_8F1C762667042D16(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_8F1C762667042D16_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_433E5B45A27FACEC(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_433E5B45A27FACEC_OFFSET))(a1, a2);
	}

	::System::Void Method_2_BE9B2ED1F0FC9B9F_1(::Class_1_01F9C1B9491C656B* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_01F9C1B9491C656B*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_490CA2A07334B2BF(::Class_3_4875884AB352B34E* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_490CA2A07334B2BF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E89B5E85E1E3F103(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_E89B5E85E1E3F103_OFFSET))(this, a1);
	}

	::System::Void Method_2_3CD0220E584C4BE6(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3CD0220E584C4BE6_OFFSET))(this, a1);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	static ::System::Void Method_2_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_OFFSET))(a1);
	}

	static ::System::Void Method_2_42D1298D8E037B95(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_OFFSET))(a1);
	}

	static ::System::Single Method_2_3150507749BCEAEC_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_1_OFFSET))();
	}

	static ::System::Void Method_2_42D1298D8E037B95_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_1_OFFSET))(a1);
	}

	static ::System::Void Method_2_2898E3EC91BCF259_1(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_1_OFFSET))(a1);
	}

	::System::Void Method_2_98710A5E8A56A8E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_98710A5E8A56A8E3_OFFSET))(this);
	}

	static ::System::Void Method_2_2898E3EC91BCF259_2(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_2_OFFSET))(a1);
	}

	static ::System::Void Method_2_2898E3EC91BCF259_3(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_3_OFFSET))(a1);
	}

	::System::Void Method_2_AF0217B75A766CB5(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_AF0217B75A766CB5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F1847A5673A1221F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_F1847A5673A1221F_OFFSET))(this, a1);
	}

	static ::System::Single Method_2_3150507749BCEAEC_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_2_OFFSET))();
	}

	static ::System::Single Method_2_3150507749BCEAEC_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_3_OFFSET))();
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	static ::System::Boolean Method_2_91A04AAB5E2A212F(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_91A04AAB5E2A212F_OFFSET))(a1);
	}
};
