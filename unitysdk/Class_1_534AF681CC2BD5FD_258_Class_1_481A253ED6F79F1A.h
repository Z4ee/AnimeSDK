#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02.h"
#include "unitysdk/Class_1_534AF681CC2BD5FD_258_Struct_2_A5CD2210DD9DDC8E.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/Config/GuidePoint_AutoGenStrategy.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_259;
class Class_0_16E4307DCC419505_260;
class Class_1_1CAC0F23A7272040;
class Class_1_534AF681CC2BD5FD_258_Class_1_E0B86C768795BFD2;
class Class_1_B7E341C5F1A6F199;
class Class_1_E319123DCDD91C39;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x153E1BC0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_0089E869E2D4144B_OFFSET UNITYSDK_OFFSET(0x153E4590)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x153E20D0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x153E4B30)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1736F546A0AE0C38_OFFSET UNITYSDK_OFFSET(0x153E4750)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1A425C083DDF2BB1_OFFSET UNITYSDK_OFFSET(0x153E1F00)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1B52120FA4A74008_OFFSET UNITYSDK_OFFSET(0x153E3110)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x153E31F0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1E1C49ACB7136624_OFFSET UNITYSDK_OFFSET(0x153E2AD0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_207A95A4E1CA801D_OFFSET UNITYSDK_OFFSET(0x153E3490)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_228D181003C9D416_OFFSET UNITYSDK_OFFSET(0x153E3D80)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_23B573F7FD360F67_OFFSET UNITYSDK_OFFSET(0x153E4530)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x153E2AC0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_2D8C83D23ED3B8EC_OFFSET UNITYSDK_OFFSET(0x153E5F30)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x153E22C0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x153E2120)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x153E21E0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x153E5200)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_5187D2A0E6751251_OFFSET UNITYSDK_OFFSET(0x153E6020)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_5A7C8C5323EFAD78_OFFSET UNITYSDK_OFFSET(0x153E5D70)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_5FEE753951C20AC1_OFFSET UNITYSDK_OFFSET(0x153E5CD0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_6A8096F73B95575D_OFFSET UNITYSDK_OFFSET(0x153E23D0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_743C06B964777432_OFFSET UNITYSDK_OFFSET(0x153E4EB0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_86763F08FFA3665D_OFFSET UNITYSDK_OFFSET(0x153E1F80)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x153E20C0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_9A4F1B447B576DE8_OFFSET UNITYSDK_OFFSET(0x153E5300)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_9AC0642BDB45CE2B_OFFSET UNITYSDK_OFFSET(0x153E68A0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_9ED0D0C8E6E70ECA_OFFSET UNITYSDK_OFFSET(0x153E3280)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x153E3410)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_B167400533B0B617_OFFSET UNITYSDK_OFFSET(0x153E2130)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x153E4920)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_C975328F451A3BA7_OFFSET UNITYSDK_OFFSET(0x153E6260)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_D890CE7609917E81_OFFSET UNITYSDK_OFFSET(0x153E61C0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0x153E4D30)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x153E4440)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x153E4E10)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x153E3300)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FF9258F34D70D4D9_OFFSET UNITYSDK_OFFSET(0x153E4620)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A__CCTOR_OFFSET UNITYSDK_OFFSET(0x153E1DB0)
#define CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A__CTOR_OFFSET UNITYSDK_OFFSET(0x153E18E0)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_TypeDefinitionIndex = 42207;

class Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::UnityEngine::Color>** StaticGet_Field_1_26()
	{
		return (::System::Collections::Generic::List_1<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0x40A40);
	}
	static ::System::Boolean* StaticGet_Field_1_20()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0xF870);
	}
	static ::System::UInt32* StaticGet_Field_1_31()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0xF874);
	}
	static ::System::Int32* StaticGet_Field_1_16()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_TypeDefinitionIndex)->GetStaticField(0xF878);
	}
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::Single Field_1_32; // 0x0
	::System::Object* Field_1_12; // 0x10
	::Class_1_534AF681CC2BD5FD_258_Class_1_E0B86C768795BFD2* Field_1_2; // 0x18
	::Class_0_16E4307DCC419505_259* Field_1_3; // 0x20
	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_1_10; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x38
	::Class_1_1CAC0F23A7272040* Field_1_6; // 0x40
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_27; // 0x48
	::Class_1_E319123DCDD91C39* Field_1_13; // 0x50
	::System::String* Field_1_11; // 0x58
	::System::Collections::Generic::List_1<::System::String*>* Field_1_17; // 0x60
	::Class_0_16E4307DCC419505_260* Field_1_0; // 0x68
	::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02>* Field_1_21; // 0x70
	::System::Int32 Field_1_25; // 0x78
	::System::Single Field_1_19; // 0x7C
	::System::Single Field_1_23; // 0x80
	::System::Int32 Field_1_30; // 0x84
	::Foundation::Coroutine::CoroutineHandle Field_1_4; // 0x88
	::UnityEngine::Vector3 Field_1_9; // 0x8C
	::System::Boolean Field_1_22; // 0x98
	::System::Boolean Field_1_28; // 0x99
	::System::Boolean Field_1_5; // 0x9A
	::System::Boolean Field_1_29; // 0x9B
	::System::Boolean Field_1_8; // 0x9C
	::System::Boolean Field_1_24; // 0x9D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_1A425C083DDF2BB1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1A425C083DDF2BB1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_86763F08FFA3665D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_86763F08FFA3665D_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_1CAC0F23A7272040* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1CAC0F23A7272040*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_B167400533B0B617()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_B167400533B0B617_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_1CAC0F23A7272040* Method_1_24748FC20F375725()
	{
		return ((::Class_1_1CAC0F23A7272040*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Boolean Method_1_1E1C49ACB7136624(::System::Boolean& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1E1C49ACB7136624_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_9ED0D0C8E6E70ECA(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_9ED0D0C8E6E70ECA_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_207A95A4E1CA801D(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_207A95A4E1CA801D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FA383E53DEC53851_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_23B573F7FD360F67()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_23B573F7FD360F67_OFFSET))();
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_0089E869E2D4144B(::System::Single a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_0089E869E2D4144B_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF9258F34D70D4D9(::Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_534AF681CC2BD5FD_258_Class_1_481A253ED6F79F1A_Struct_2_07071E4F5DB33E02, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FF9258F34D70D4D9_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Color Method_1_1736F546A0AE0C38()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1736F546A0AE0C38_OFFSET))(this);
	}

	::MoleMole::Config::GuidePoint_AutoGenStrategy Method_1_1B52120FA4A74008()
	{
		return ((::MoleMole::Config::GuidePoint_AutoGenStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1B52120FA4A74008_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_0D7638DBC93E5002_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::String* Method_1_743C06B964777432()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_743C06B964777432_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::System::Void Method_1_9A4F1B447B576DE8(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_9A4F1B447B576DE8_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>* Method_1_5FEE753951C20AC1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_E319123DCDD91C39*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_5FEE753951C20AC1_OFFSET))(this);
	}

	static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean> Method_1_5A7C8C5323EFAD78(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::System::Int32 a6)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_5A7C8C5323EFAD78_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_1_2D8C83D23ED3B8EC(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_2D8C83D23ED3B8EC_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_228D181003C9D416(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_228D181003C9D416_OFFSET))(this, a1);
	}

	::System::Void Method_1_5187D2A0E6751251(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_5187D2A0E6751251_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_6A8096F73B95575D(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3)
	{
		return ((::System::Void(*)(::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_6A8096F73B95575D_OFFSET))(a1, a2, a3);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_D890CE7609917E81()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_D890CE7609917E81_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_C975328F451A3BA7(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Single a3, ::System::Single a4, ::System::Boolean a5, ::System::Boolean a6, ::UnityEngine::Vector3 a7, ::System::Boolean a8)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_C975328F451A3BA7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_9AC0642BDB45CE2B(::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_258_Struct_2_A5CD2210DD9DDC8E>* a1, ::System::Collections::Generic::List_1<::System::String*>* a2, ::System::Boolean a3, ::System::Single a4, ::System::String* a5, ::System::Boolean a6)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_534AF681CC2BD5FD_258_Struct_2_A5CD2210DD9DDC8E>*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean, ::System::Single, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_258_CLASS_1_481A253ED6F79F1A_METHOD_1_9AC0642BDB45CE2B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
