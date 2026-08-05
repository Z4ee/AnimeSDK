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

class Class_1_7D0B4A18BCA81BF8;
class Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6;
class Class_3_4875884AB352B34E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2> class Class_1_A526F8631075D3FD;

#define CLASS_2_738684AF001A78DA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x138A3030)
#define CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x138A6620)
#define CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x138A5000)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_1_OFFSET UNITYSDK_OFFSET(0x138A8620)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_2_OFFSET UNITYSDK_OFFSET(0x138A88C0)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_3_OFFSET UNITYSDK_OFFSET(0x138A8B00)
#define CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_OFFSET UNITYSDK_OFFSET(0x138A8250)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_1_OFFSET UNITYSDK_OFFSET(0x138A6CA0)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_2_OFFSET UNITYSDK_OFFSET(0x138A7710)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_3_OFFSET UNITYSDK_OFFSET(0x138A8490)
#define CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x138A33A0)
#define CLASS_2_738684AF001A78DA_METHOD_2_31D2DFCB01965F15_OFFSET UNITYSDK_OFFSET(0x138A84F0)
#define CLASS_2_738684AF001A78DA_METHOD_2_353DAAE369AAEE14_OFFSET UNITYSDK_OFFSET(0x138A5BA0)
#define CLASS_2_738684AF001A78DA_METHOD_2_3CD0220E584C4BE6_OFFSET UNITYSDK_OFFSET(0x138A5840)
#define CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_1_OFFSET UNITYSDK_OFFSET(0x138A6DD0)
#define CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_OFFSET UNITYSDK_OFFSET(0x138A6D00)
#define CLASS_2_738684AF001A78DA_METHOD_2_433E5B45A27FACEC_OFFSET UNITYSDK_OFFSET(0x138A6BC0)
#define CLASS_2_738684AF001A78DA_METHOD_2_5A8321117321ED7A_OFFSET UNITYSDK_OFFSET(0x138A5F40)
#define CLASS_2_738684AF001A78DA_METHOD_2_695C442400A258C7_OFFSET UNITYSDK_OFFSET(0x138A6390)
#define CLASS_2_738684AF001A78DA_METHOD_2_8F1C762667042D16_OFFSET UNITYSDK_OFFSET(0x138A37D0)
#define CLASS_2_738684AF001A78DA_METHOD_2_91A04AAB5E2A212F_OFFSET UNITYSDK_OFFSET(0x138A4B30)
#define CLASS_2_738684AF001A78DA_METHOD_2_97DBEBE14643001A_OFFSET UNITYSDK_OFFSET(0x138A3A50)
#define CLASS_2_738684AF001A78DA_METHOD_2_98710A5E8A56A8E3_OFFSET UNITYSDK_OFFSET(0x138A5150)
#define CLASS_2_738684AF001A78DA_METHOD_2_9C49B352E43CC9D6_OFFSET UNITYSDK_OFFSET(0x138A6EA0)
#define CLASS_2_738684AF001A78DA_METHOD_2_A7B0EF5061C2B565_OFFSET UNITYSDK_OFFSET(0x138A4930)
#define CLASS_2_738684AF001A78DA_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x138A6780)
#define CLASS_2_738684AF001A78DA_METHOD_2_AF0217B75A766CB5_OFFSET UNITYSDK_OFFSET(0x138A7610)
#define CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_1_OFFSET UNITYSDK_OFFSET(0x138A7770)
#define CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_OFFSET UNITYSDK_OFFSET(0x138A6F30)
#define CLASS_2_738684AF001A78DA_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x138A8860)
#define CLASS_2_738684AF001A78DA_METHOD_2_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x138A7E50)
#define CLASS_2_738684AF001A78DA_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x138A5DC0)
#define CLASS_2_738684AF001A78DA_METHOD_2_F1847A5673A1221F_OFFSET UNITYSDK_OFFSET(0x138A3400)
#define CLASS_2_738684AF001A78DA_METHOD_2_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x138A57B0)
#define CLASS_2_738684AF001A78DA_ONCREATE_OFFSET UNITYSDK_OFFSET(0x138A2CC0)
#define CLASS_2_738684AF001A78DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x138A32D0)
#define CLASS_2_738684AF001A78DA__CTOR_OFFSET UNITYSDK_OFFSET(0x138A3230)

inline static constexpr unsigned int Class_2_738684AF001A78DA_TypeDefinitionIndex = 48703;

class Class_2_738684AF001A78DA : public ::Foundation::SingletonDisposable_1<::Class_2_738684AF001A78DA*>
{
public:
	static ::System::Collections::Generic::List_1<::Struct_2_B480C447482976AA>** StaticGet_Field_2_19()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_B480C447482976AA>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0x312C0);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_D7552A7A8FE32848>** StaticGet_Field_2_12()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_D7552A7A8FE32848>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0x312C8);
	}
	static ::System::Boolean* StaticGet_Field_2_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F0);
	}
	static ::System::Boolean* StaticGet_Field_2_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F1);
	}
	static ::System::Boolean* StaticGet_Field_2_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F2);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F3);
	}
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F4);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F8);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8F9);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8FA);
	}
	static ::System::Boolean* StaticGet_Field_2_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8FB);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8FC);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8FD);
	}
	static ::System::Boolean* StaticGet_Field_2_7()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA8FE);
	}
	static ::System::Single* StaticGet_Field_2_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA900);
	}
	static ::System::Single* StaticGet_Field_2_15()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA904);
	}
	static ::System::Single* StaticGet_Field_2_9()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_738684AF001A78DA_TypeDefinitionIndex)->GetStaticField(0xA908);
	}
	// static const ::System::Int32 Field_2_3 = 0x80; // 0x0
	// static const ::System::Single Field_2_2; // 0x0
	// static const ::System::Boolean Field_2_1; // 0x0
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_3_4875884AB352B34E*>* Field_2_18; // 0x10
	::Class_1_A526F8631075D3FD<::UnityEngine::GameObject*, ::Class_1_7D0B4A18BCA81BF8*>* Field_2_17; // 0x18
	::Unity::Jobs::JobHandle Field_2_22; // 0x20
	::Unity::Collections::NativeList_1<::Struct_2_9B079B18CA73BD4E_1> Field_2_23; // 0x30
	::System::Single Field_2_24; // 0x40
	::Unity::Collections::NativeList_1<::Struct_2_1C02EBEB9BBFB46F> Field_2_16; // 0x48
	::Struct_2_262B2CF9D98CE442 Field_2_25; // 0x58
	::Struct_2_4660A8BF385C2B6D Field_2_26; // 0x78

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

	static ::System::Single Method_2_3150507749BCEAEC()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_OFFSET))();
	}

	::System::Void Method_2_F1847A5673A1221F(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_F1847A5673A1221F_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_A7B0EF5061C2B565(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_A7B0EF5061C2B565_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_91A04AAB5E2A212F(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_91A04AAB5E2A212F_OFFSET))(a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_8F1C762667042D16(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_8F1C762667042D16_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_5A8321117321ED7A(::Class_1_7D0B4A18BCA81BF8* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D0B4A18BCA81BF8*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_5A8321117321ED7A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_695C442400A258C7(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_695C442400A258C7_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_1290EA767C459179_1_OFFSET))(this);
	}

	static ::System::Void Method_2_433E5B45A27FACEC(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_433E5B45A27FACEC_OFFSET))(a1, a2);
	}

	static ::System::Single Method_2_3150507749BCEAEC_1()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_1_OFFSET))();
	}

	static ::System::Void Method_2_42D1298D8E037B95(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_OFFSET))(a1);
	}

	static ::System::Void Method_2_42D1298D8E037B95_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_42D1298D8E037B95_1_OFFSET))(a1);
	}

	::System::Void Method_2_9C49B352E43CC9D6(::Class_3_4875884AB352B34E* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_9C49B352E43CC9D6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BE9B2ED1F0FC9B9F(::Class_1_7D0B4A18BCA81BF8* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D0B4A18BCA81BF8*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AF0217B75A766CB5(::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7D620EB320D6014E_Class_1_04B7F1C97F0C29A6*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_AF0217B75A766CB5_OFFSET))(this, a1);
	}

	static ::System::Single Method_2_3150507749BCEAEC_2()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_2_OFFSET))();
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::System::Void Method_2_98710A5E8A56A8E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_98710A5E8A56A8E3_OFFSET))(this);
	}

	static ::System::Void Method_2_2898E3EC91BCF259(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_OFFSET))(a1);
	}

	static ::System::Single Method_2_3150507749BCEAEC_3()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3150507749BCEAEC_3_OFFSET))();
	}

	::System::Void Method_2_31D2DFCB01965F15(::Class_3_4875884AB352B34E* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_31D2DFCB01965F15_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_2898E3EC91BCF259_1(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_2_2898E3EC91BCF259_2(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_2_OFFSET))(a1);
	}

	::System::Void Method_2_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_2_BE9B2ED1F0FC9B9F_1(::Class_1_7D0B4A18BCA81BF8* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D0B4A18BCA81BF8*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_BE9B2ED1F0FC9B9F_1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_97DBEBE14643001A(::UnityEngine::GameObject* a1, ::Class_1_7D0B4A18BCA81BF8*& a2, ::Struct_2_1C02EBEB9BBFB46F& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_7D0B4A18BCA81BF8*&, ::Struct_2_1C02EBEB9BBFB46F&))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_97DBEBE14643001A_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_F730968E2645E14B_OFFSET))();
	}

	::System::Void Method_2_3CD0220E584C4BE6(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_3CD0220E584C4BE6_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_2898E3EC91BCF259_3(::System::Single a1)
	{
		return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_2898E3EC91BCF259_3_OFFSET))(a1);
	}

	::System::Void Method_2_353DAAE369AAEE14(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_738684AF001A78DA_METHOD_2_353DAAE369AAEE14_OFFSET))(this, a1);
	}
};
