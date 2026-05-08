#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_256_Struct_2_6815B1DEBF66D9E3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_206;
class Class_1_1CAC0F23A7272040;
class Class_1_2AD007055AA355A8;
class Class_1_534AF681CC2BD5FD_256_Class_1_E0B86C768795BFD2;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11960970)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_0089E869E2D4144B_OFFSET UNITYSDK_OFFSET(0x11961790)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x11964A70)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x11961910)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x11961990)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_207A95A4E1CA801D_OFFSET UNITYSDK_OFFSET(0x11962420)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_228D181003C9D416_OFFSET UNITYSDK_OFFSET(0x11962D00)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11964A60)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_2D8C83D23ED3B8EC_OFFSET UNITYSDK_OFFSET(0x11963440)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x11964AC0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x11963530)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x11962320)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_5A7C8C5323EFAD78_OFFSET UNITYSDK_OFFSET(0x11964AD0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_5FEE753951C20AC1_OFFSET UNITYSDK_OFFSET(0x119649C0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_86763F08FFA3665D_OFFSET UNITYSDK_OFFSET(0x11964880)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x11960D00)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_961C8076180B150D_OFFSET UNITYSDK_OFFSET(0x11961C20)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_9AC0642BDB45CE2B_OFFSET UNITYSDK_OFFSET(0x11960D10)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_9ED0D0C8E6E70ECA_OFFSET UNITYSDK_OFFSET(0x119633C0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x11962170)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_B167400533B0B617_OFFSET UNITYSDK_OFFSET(0x119619F0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x11964000)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_C975328F451A3BA7_OFFSET UNITYSDK_OFFSET(0x11964220)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_D890CE7609917E81_OFFSET UNITYSDK_OFFSET(0x11964C90)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x11961AA0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_F76F7681A67EEF66_OFFSET UNITYSDK_OFFSET(0x119636F0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x11961820)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x11963610)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x11961B80)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FF9258F34D70D4D9_OFFSET UNITYSDK_OFFSET(0x119621F0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A__CCTOR_OFFSET UNITYSDK_OFFSET(0x11960BC0)
#define CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x11960A60)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_TypeDefinitionIndex = 40181;

class Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet_Field_1_23()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0x2AB70);
	}
	static ::System::Boolean* StaticGet_Field_1_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0x9750);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0x9754);
	}
	// static const ::System::String* Field_1_14; // 0x0
	::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02>* Field_1_18; // 0x10
	::MoleMole::Config::GuidePoint_AutoGenStrategy Field_1_15; // 0x18
	::System::Collections::Generic::List_1<::System::Single>* Field_1_8; // 0x60
	::Class_0_16E4307DCC419505_206* Field_1_1; // 0x68
	::System::String* Field_1_9; // 0x70
	::Class_1_1CAC0F23A7272040* Field_1_4; // 0x78
	::Class_1_534AF681CC2BD5FD_256_Class_1_E0B86C768795BFD2* Field_1_0; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_5; // 0x88
	::Class_1_2AD007055AA355A8* Field_1_11; // 0x90
	::System::Object* Field_1_10; // 0x98
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0xA0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_24; // 0xA8
	::UnityEngine::Vector3 Field_1_7; // 0xB0
	::System::Single Field_1_16; // 0xBC
	::System::Boolean Field_1_19; // 0xC0
	::System::Boolean Field_1_3; // 0xC1
	::System::Boolean Field_1_26; // 0xC2
	::System::Boolean Field_1_21; // 0xC3
	::System::Int32 Field_1_27; // 0xC4
	::System::Int32 Field_1_22; // 0xC8
	::System::Single Field_1_20; // 0xCC
	::Foundation::Coroutine::CoroutineHandle Field_1_2; // 0xD0
	::System::Boolean Field_1_6; // 0xD4
	::System::Boolean Field_1_25; // 0xD5

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CAC0F23A7272040* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CAC0F23A7272040*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9AC0642BDB45CE2B(::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_256_Struct_2_6815B1DEBF66D9E3>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_256_Struct_2_6815B1DEBF66D9E3>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_9AC0642BDB45CE2B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_0089E869E2D4144B(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_0089E869E2D4144B_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_B167400533B0B617()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_B167400533B0B617_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Boolean Method_1_961C8076180B150D(::System::Boolean& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_961C8076180B150D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_FF9258F34D70D4D9(::Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_534AF681CC2BD5FD_256_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FF9258F34D70D4D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_207A95A4E1CA801D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_207A95A4E1CA801D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_9ED0D0C8E6E70ECA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_9ED0D0C8E6E70ECA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_2D8C83D23ED3B8EC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_2D8C83D23ED3B8EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Void Method_1_F76F7681A67EEF66(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_F76F7681A67EEF66_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C975328F451A3BA7(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7, ::System::Boolean a8)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_C975328F451A3BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Int32 Method_1_86763F08FFA3665D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_86763F08FFA3665D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>* Method_1_5FEE753951C20AC1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AD007055AA355A8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_5FEE753951C20AC1_OFFSET))(this);
	}

	::System::Void Method_1_228D181003C9D416(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_228D181003C9D416_OFFSET))(this, a1);
	}

	::Class_1_1CAC0F23A7272040* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CAC0F23A7272040*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_5A7C8C5323EFAD78(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_5A7C8C5323EFAD78_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_D890CE7609917E81()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_256_CLASS_1_481A253ED6F79F1A_METHOD_1_D890CE7609917E81_OFFSET))(this);
	}
};
