#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_8F66FFADBFCCA23B.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_226_Struct_2_A5CD2210DD9DDC8E.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshPathStatus.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_326;
class Class_0_16E4307DCC419505_524;
class Class_1_534AF681CC2BD5FD_226_Class_1_E0B86C768795BFD2;
class Class_1_D7E535A5B5558900;
class Class_1_E319123DCDD91C39;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157145A0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_0089E869E2D4144B_OFFSET UNITYSDK_OFFSET(0x15715BB0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x1571A5F0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_11029E2AFF967B64_OFFSET UNITYSDK_OFFSET(0x1571B010)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_1A3EE570D04055D3_OFFSET UNITYSDK_OFFSET(0x1571AD80)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_207A95A4E1CA801D_OFFSET UNITYSDK_OFFSET(0x15715C40)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_228D181003C9D416_OFFSET UNITYSDK_OFFSET(0x15718730)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x15718F80)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x15718F00)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_2D8C83D23ED3B8EC_OFFSET UNITYSDK_OFFSET(0x15716550)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15719A90)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_4206FD8B57CC947E_OFFSET UNITYSDK_OFFSET(0x15718400)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_4532289116D98671_OFFSET UNITYSDK_OFFSET(0x15719720)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_4603F1CCF09FA9C0_OFFSET UNITYSDK_OFFSET(0x15718050)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_5A7C8C5323EFAD78_OFFSET UNITYSDK_OFFSET(0x1571A430)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_71647BB4C33349D2_OFFSET UNITYSDK_OFFSET(0x15718FE0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_73C4D9A4D38AC3D3_OFFSET UNITYSDK_OFFSET(0x157171D0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_758999B3843B89CD_OFFSET UNITYSDK_OFFSET(0x15718F10)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x15718720)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_8DCC2183161440E1_OFFSET UNITYSDK_OFFSET(0x15719230)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_92E06B09841507ED_OFFSET UNITYSDK_OFFSET(0x15716640)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_9AC0642BDB45CE2B_OFFSET UNITYSDK_OFFSET(0x15714AD0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_A3D11322F5C57142_OFFSET UNITYSDK_OFFSET(0x1571A870)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x15714940)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x15719880)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_BE64710E5CA49E2D_OFFSET UNITYSDK_OFFSET(0x15719B50)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x1571AE20)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_C975328F451A3BA7_OFFSET UNITYSDK_OFFSET(0x15715560)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x15719190)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_E4D524BA4D40F55E_OFFSET UNITYSDK_OFFSET(0x15714A20)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x1571A7A0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x15718E10)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x157148A0)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x15714810)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FF9258F34D70D4D9_OFFSET UNITYSDK_OFFSET(0x1571A640)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6__CCTOR_OFFSET UNITYSDK_OFFSET(0x15714680)
#define CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6__CTOR_OFFSET UNITYSDK_OFFSET(0x15714390)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex = 54275;

class Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet_Field_1_24()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex)->GetStaticField(0x31B90);
	}
	static ::System::Int32* StaticGet_Field_1_12()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex)->GetStaticField(0xAE00);
	}
	static ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_8F66FFADBFCCA23B* StaticGet_Field_1_2()
	{
		return (::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_8F66FFADBFCCA23B*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex)->GetStaticField(0xAE04);
	}
	static ::System::Boolean* StaticGet_Field_1_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex)->GetStaticField(0xAE18);
	}
	static ::System::Boolean* StaticGet_Field_1_23()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex)->GetStaticField(0xAE19);
	}
	static ::System::UInt32* StaticGet_Field_1_35()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_TypeDefinitionIndex)->GetStaticField(0xAE1C);
	}
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::Single Field_1_34; // 0x0
	::System::Object* Field_1_14; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_8; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* Field_1_19; // 0x20
	::Class_1_D7E535A5B5558900* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D>* Field_1_22; // 0x30
	::System::String* Field_1_15; // 0x38
	::Class_1_534AF681CC2BD5FD_226_Class_1_E0B86C768795BFD2* Field_1_0; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_11; // 0x48
	::Class_1_E319123DCDD91C39* Field_1_13; // 0x50
	::Class_0_16E4307DCC419505_524* Field_1_1; // 0x58
	::Class_0_16E4307DCC419505_326* Field_1_7; // 0x60
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_31; // 0x68
	::Foundation::Coroutine::CoroutineHandle Field_1_6; // 0x70
	::System::Int32 Field_1_25; // 0x74
	::System::Single Field_1_20; // 0x78
	::System::Int32 Field_1_28; // 0x7C
	::System::Boolean Field_1_21; // 0x80
	::System::Boolean Field_1_29; // 0x81
	::System::Int32 Field_1_26; // 0x84
	::System::Single Field_1_16; // 0x88
	::UnityEngine::Vector3 Field_1_9; // 0x8C
	::System::Boolean Field_1_10; // 0x98
	::System::Boolean Field_1_5; // 0x99
	::System::Boolean Field_1_27; // 0x9A
	::System::Boolean Field_1_30; // 0x9B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_DISPOSE_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Boolean Method_1_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9AC0642BDB45CE2B(::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_226_Struct_2_A5CD2210DD9DDC8E>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_226_Struct_2_A5CD2210DD9DDC8E>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_9AC0642BDB45CE2B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C975328F451A3BA7(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7, ::System::Boolean a8)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_C975328F451A3BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_92E06B09841507ED(::UnityEngine::Vector3 a1, ::System::Boolean& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_92E06B09841507ED_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_2D8C83D23ED3B8EC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_2D8C83D23ED3B8EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_4603F1CCF09FA9C0(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D& a4, ::System::Int32 a5, ::MoleMole::Config::GuidePoint_AutoGenStrategy a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D&, ::System::Int32, ::MoleMole::Config::GuidePoint_AutoGenStrategy))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_4603F1CCF09FA9C0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D7E535A5B5558900* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7E535A5B5558900*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_228D181003C9D416(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_228D181003C9D416_OFFSET))(this, a1);
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::Class_1_D7E535A5B5558900* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D7E535A5B5558900*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::System::Boolean Method_1_758999B3843B89CD(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_758999B3843B89CD_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_23B573F7FD360F67_OFFSET))();
	}

	static ::System::Single Method_1_71647BB4C33349D2(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_71647BB4C33349D2_OFFSET))(a1, a2, a3);
	}

	::System::Int32 Method_1_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8DCC2183161440E1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D& a5, ::MoleMole::Config::GuidePoint_AutoGenStrategy a6, ::System::Int32 a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D&, ::MoleMole::Config::GuidePoint_AutoGenStrategy, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_8DCC2183161440E1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_4532289116D98671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_4532289116D98671_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_BE64710E5CA49E2D(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_BE64710E5CA49E2D_OFFSET))(this, a1, a2);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_5A7C8C5323EFAD78(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_5A7C8C5323EFAD78_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF9258F34D70D4D9(::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_FF9258F34D70D4D9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_0089E869E2D4144B(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_0089E869E2D4144B_OFFSET))(this, a1);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Void Method_1_73C4D9A4D38AC3D3(::UnityEngine::Vector3 a1, ::MoleMole::Config::GuidePoint_AutoGenStrategy a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::GuidePoint_AutoGenStrategy))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_73C4D9A4D38AC3D3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A3D11322F5C57142(::UnityEngine::Vector3& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_A3D11322F5C57142_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4206FD8B57CC947E(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a4, ::System::Single a5, ::System::Single a6, ::System::Int32 a7, ::UnityEngine::AI::NavMeshPathStatus& a8)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::AI::NavMeshPathStatus&))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_4206FD8B57CC947E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_1A3EE570D04055D3(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_1A3EE570D04055D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Void Method_1_11029E2AFF967B64(::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_534AF681CC2BD5FD_226_Class_1_E0E551958D8B4AF6_Struct_2_2D691E68324C6F2D&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_11029E2AFF967B64_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::GuidePoint_AutoGenStrategy Method_1_E4D524BA4D40F55E()
	{
		return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_E4D524BA4D40F55E_OFFSET))(this);
	}

	::System::Void Method_1_207A95A4E1CA801D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_226_CLASS_1_E0E551958D8B4AF6_METHOD_1_207A95A4E1CA801D_OFFSET))(this, a1, a2, a3, a4);
	}
};
