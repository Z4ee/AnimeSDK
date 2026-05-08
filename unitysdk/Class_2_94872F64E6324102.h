#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/Struct_2_6D798C312C19218B.h"
#include "unitysdk/Struct_2_9B079B18CA73BD4E.h"
#include "unitysdk/Unity/Collections/NativeList_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/UnityEngine/Jobs/TransformAccessArray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1ECECFF61CDF060B;
class Class_3_4875884AB352B34E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
template <typename T1, typename T2> class Class_1_5CF0EC0BFBEDEBC5;

#define CLASS_2_94872F64E6324102_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140B15D0)
#define CLASS_2_94872F64E6324102_METHOD_2_0899A62ED8A05541_OFFSET UNITYSDK_OFFSET(0x140B3D40)
#define CLASS_2_94872F64E6324102_METHOD_2_266B82378315365A_1_OFFSET UNITYSDK_OFFSET(0x140B5760)
#define CLASS_2_94872F64E6324102_METHOD_2_266B82378315365A_OFFSET UNITYSDK_OFFSET(0x140B5640)
#define CLASS_2_94872F64E6324102_METHOD_2_31D2DFCB01965F15_OFFSET UNITYSDK_OFFSET(0x140B1A40)
#define CLASS_2_94872F64E6324102_METHOD_2_35EA6E83CC66E192_OFFSET UNITYSDK_OFFSET(0x140B41C0)
#define CLASS_2_94872F64E6324102_METHOD_2_490CA2A07334B2BF_OFFSET UNITYSDK_OFFSET(0x140B55B0)
#define CLASS_2_94872F64E6324102_METHOD_2_4BE99DDCF7F1FD88_OFFSET UNITYSDK_OFFSET(0x140B4600)
#define CLASS_2_94872F64E6324102_METHOD_2_83A2D2FF4410F4BE_OFFSET UNITYSDK_OFFSET(0x140B30A0)
#define CLASS_2_94872F64E6324102_METHOD_2_89D1F247B9D324EE_1_OFFSET UNITYSDK_OFFSET(0x140B4EB0)
#define CLASS_2_94872F64E6324102_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x140B1CF0)
#define CLASS_2_94872F64E6324102_METHOD_2_AAE2380A4AD9C102_OFFSET UNITYSDK_OFFSET(0x140B3BB0)
#define CLASS_2_94872F64E6324102_METHOD_2_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0x140B4FA0)
#define CLASS_2_94872F64E6324102_METHOD_2_D605B9C702AD1374_OFFSET UNITYSDK_OFFSET(0x140B2D20)
#define CLASS_2_94872F64E6324102_METHOD_2_DED295B47DC8B418_OFFSET UNITYSDK_OFFSET(0x140B28A0)
#define CLASS_2_94872F64E6324102_METHOD_2_DF020A3AEF2B8AFC_OFFSET UNITYSDK_OFFSET(0x140B23E0)
#define CLASS_2_94872F64E6324102_METHOD_2_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x140B1DE0)
#define CLASS_2_94872F64E6324102_METHOD_2_E26DE46BC5335E39_OFFSET UNITYSDK_OFFSET(0x140B4A10)
#define CLASS_2_94872F64E6324102_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0x140B1B70)
#define CLASS_2_94872F64E6324102_METHOD_2_F2168A921D13D37F_OFFSET UNITYSDK_OFFSET(0x140B3150)
#define CLASS_2_94872F64E6324102_ONCREATE_OFFSET UNITYSDK_OFFSET(0x140B14E0)
#define CLASS_2_94872F64E6324102__CCTOR_OFFSET UNITYSDK_OFFSET(0x140B1880)
#define CLASS_2_94872F64E6324102__CTOR_OFFSET UNITYSDK_OFFSET(0x140B17C0)

inline static constexpr unsigned int Class_2_94872F64E6324102_TypeDefinitionIndex = 45258;

class Class_2_94872F64E6324102 : public ::Foundation::SingletonDisposable_1<::Class_2_94872F64E6324102*>
{
public:
	static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_Field_2_16()
	{
		return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0x3BAE0);
	}
	static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_Field_2_17()
	{
		return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0x3BAE8);
	}
	static ::System::Single* StaticGet_Field_2_12()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAE0);
	}
	static ::System::Single* StaticGet_Field_2_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAE4);
	}
	static ::System::Single* StaticGet_Field_2_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAE8);
	}
	static ::System::Single* StaticGet_Field_2_15()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAEC);
	}
	static ::System::Single* StaticGet_Field_2_6()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAF0);
	}
	static ::System::Boolean* StaticGet_Field_2_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAF4);
	}
	static ::System::Boolean* StaticGet_Field_2_9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAF5);
	}
	static ::System::Boolean* StaticGet_Field_2_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAF6);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAF8);
	}
	static ::System::Boolean* StaticGet_Field_2_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAFC);
	}
	static ::System::Boolean* StaticGet_Field_2_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAFD);
	}
	static ::System::Boolean* StaticGet_Field_2_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAFE);
	}
	static ::System::Boolean* StaticGet_Field_2_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_2_94872F64E6324102_TypeDefinitionIndex)->GetStaticField(0xEAFF);
	}
	// static const ::System::Int32 Field_2_0 = 0x80; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::Boolean Field_2_2; // 0x0
	::Class_1_5CF0EC0BFBEDEBC5<::UnityEngine::GameObject*, ::Class_1_1ECECFF61CDF060B*>* Field_2_19; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_25; // 0x18
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_3_4875884AB352B34E*>* Field_2_18; // 0x20
	::Unity::Collections::NativeList_1<::Struct_2_6D798C312C19218B> Field_2_20; // 0x28
	::System::Single Field_2_24; // 0x38
	::Unity::Jobs::JobHandle Field_2_23; // 0x40
	::UnityEngine::Jobs::TransformAccessArray Field_2_21; // 0x50
	::Unity::Collections::NativeList_1<::Struct_2_9B079B18CA73BD4E> Field_2_22; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102__CCTOR_OFFSET))();
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_31D2DFCB01965F15(::Class_3_4875884AB352B34E* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_31D2DFCB01965F15_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_DF020A3AEF2B8AFC(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_DF020A3AEF2B8AFC_OFFSET))(a1);
	}

	::System::Void Method_2_DED295B47DC8B418(::Class_1_1ECECFF61CDF060B* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ECECFF61CDF060B*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_DED295B47DC8B418_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D605B9C702AD1374(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_D605B9C702AD1374_OFFSET))(this, a1);
	}

	::System::Void Method_2_83A2D2FF4410F4BE(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_83A2D2FF4410F4BE_OFFSET))(this, a1);
	}

	::System::Void Method_2_0899A62ED8A05541(::Class_1_1ECECFF61CDF060B* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ECECFF61CDF060B*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_0899A62ED8A05541_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35EA6E83CC66E192(::Class_1_1ECECFF61CDF060B* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1ECECFF61CDF060B*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_35EA6E83CC66E192_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4BE99DDCF7F1FD88()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_4BE99DDCF7F1FD88_OFFSET))(this);
	}

	::System::Void Method_2_E26DE46BC5335E39()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_E26DE46BC5335E39_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_89D1F247B9D324EE_1_OFFSET))(this);
	}

	::System::Boolean Method_2_F2168A921D13D37F(::UnityEngine::GameObject* a1, ::Class_1_1ECECFF61CDF060B*& a2, ::System::Single& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::Class_1_1ECECFF61CDF060B*&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_F2168A921D13D37F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_2_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_CD8EB704BDED69B6_OFFSET))(this);
	}

	::System::Void Method_2_490CA2A07334B2BF(::Class_3_4875884AB352B34E* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_4875884AB352B34E*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_490CA2A07334B2BF_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_2_266B82378315365A(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_266B82378315365A_OFFSET))(a1);
	}

	::System::Void Method_2_AAE2380A4AD9C102(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_AAE2380A4AD9C102_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_266B82378315365A_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_94872F64E6324102_METHOD_2_266B82378315365A_1_OFFSET))(a1);
	}
};
