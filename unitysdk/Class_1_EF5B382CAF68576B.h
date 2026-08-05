#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/TriDiceLuckPerformType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B89683A15B3B0C43;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EF5B382CAF68576B_METHOD_1_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x18710FC0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x18710D70)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_16D5A839B2F6F0A3_OFFSET UNITYSDK_OFFSET(0x18711A20)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_21408F9A90B10FA2_1_OFFSET UNITYSDK_OFFSET(0x18710F80)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_21408F9A90B10FA2_OFFSET UNITYSDK_OFFSET(0x18710DB0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x18711970)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_2C1F0A815CE2FE02_OFFSET UNITYSDK_OFFSET(0x18711810)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_2D8D297A9EEF51AC_OFFSET UNITYSDK_OFFSET(0x18712330)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_3150507749BCEAEC_OFFSET UNITYSDK_OFFSET(0x187110C0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_351060D64F7F438E_OFFSET UNITYSDK_OFFSET(0x18711150)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_447E9A216855C555_OFFSET UNITYSDK_OFFSET(0x18712550)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_4653BA3626797949_OFFSET UNITYSDK_OFFSET(0x18712600)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x187111D0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_4D71BCFB74C16073_OFFSET UNITYSDK_OFFSET(0x18711140)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x18712050)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0x187129D0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0x18710EB0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_6C9C1F07D3D302AE_OFFSET UNITYSDK_OFFSET(0x18710CF0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_7103CC03ECC90853_OFFSET UNITYSDK_OFFSET(0x187126A0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_73B9263E79EBD5A4_1_OFFSET UNITYSDK_OFFSET(0x18712310)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_73B9263E79EBD5A4_OFFSET UNITYSDK_OFFSET(0x18712300)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0x18711D10)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_86D578C46BDF8F07_OFFSET UNITYSDK_OFFSET(0x187111E0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_9876BEA27A0B4DC1_OFFSET UNITYSDK_OFFSET(0x187127F0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_9B19043D8462B3E5_OFFSET UNITYSDK_OFFSET(0x18711100)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_AAE4AC328314A748_OFFSET UNITYSDK_OFFSET(0x18711960)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_BCFC75DE0278F431_OFFSET UNITYSDK_OFFSET(0x187111F0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_C74E50CBD41F0264_1_OFFSET UNITYSDK_OFFSET(0x18710D60)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x18710D40)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_D649193A12F966B9_1_OFFSET UNITYSDK_OFFSET(0x18710D20)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_D649193A12F966B9_OFFSET UNITYSDK_OFFSET(0x18710D10)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_E97AC7B8F06B8C3E_OFFSET UNITYSDK_OFFSET(0x18710DF0)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_EC1F07BECA122BA2_OFFSET UNITYSDK_OFFSET(0x18711000)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x18710D50)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x18712250)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18710D30)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET UNITYSDK_OFFSET(0x18712610)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_FE4FFF99CBDC5C59_OFFSET UNITYSDK_OFFSET(0x18712260)
#define CLASS_1_EF5B382CAF68576B_METHOD_1_FF798D152DDA9A15_OFFSET UNITYSDK_OFFSET(0x18712320)
#define CLASS_1_EF5B382CAF68576B__CTOR_OFFSET UNITYSDK_OFFSET(0x18711200)

inline static constexpr unsigned int Class_1_EF5B382CAF68576B_TypeDefinitionIndex = 60205;

class Class_1_EF5B382CAF68576B : public ::System::Object
{
public:
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	::UnityEngine::Transform* Field_1_5; // 0x10
	::Il2CppArray<::UnityEngine::GameObject*>* Field_1_7; // 0x18
	::Il2CppArray<::UnityEngine::Animator*>* Field_1_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::MoleMole::TriDiceLuckPerformType, ::System::String*>* Field_1_12; // 0x28
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_6; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_13; // 0x38
	::UnityEngine::Camera* Field_1_21; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_14; // 0x48
	::UnityEngine::Transform* Field_1_4; // 0x50
	::UnityEngine::Vector2 Field_1_22; // 0x58
	::System::Nullable_1<::UnityEngine::Vector2> Field_1_19; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_17; // 0x6C
	::System::Boolean Field_1_16; // 0x7C
	::System::Boolean Field_1_23; // 0x7D
	::System::Nullable_1<::UnityEngine::Vector3> Field_1_18; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B__CTOR_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector2> Method_1_6C9C1F07D3D302AE()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_6C9C1F07D3D302AE_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_D649193A12F966B9()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_D649193A12F966B9_OFFSET))(this);
	}

	::System::Nullable_1<::UnityEngine::Vector3> Method_1_D649193A12F966B9_1()
	{
		return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_D649193A12F966B9_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_C74E50CBD41F0264_1_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Int32 Method_1_21408F9A90B10FA2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_21408F9A90B10FA2_OFFSET))(this);
	}

	::System::String* Method_1_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_6929C20FCC70C1A3_OFFSET))(this);
	}

	::System::Int32 Method_1_21408F9A90B10FA2_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_21408F9A90B10FA2_1_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_128774387667156B_1_OFFSET))(this);
	}

	::System::Single Method_1_EC1F07BECA122BA2(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_EC1F07BECA122BA2_OFFSET))(this, a1);
	}

	::System::Single Method_1_3150507749BCEAEC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_3150507749BCEAEC_OFFSET))(this);
	}

	::System::String* Method_1_9B19043D8462B3E5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_9B19043D8462B3E5_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_4D71BCFB74C16073()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_4D71BCFB74C16073_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_351060D64F7F438E()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_351060D64F7F438E_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_86D578C46BDF8F07()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_86D578C46BDF8F07_OFFSET))(this);
	}

	::UnityEngine::Camera* Method_1_BCFC75DE0278F431()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_BCFC75DE0278F431_OFFSET))(this);
	}

	::Class_2_B89683A15B3B0C43* Method_1_E97AC7B8F06B8C3E()
	{
		return ((::Class_2_B89683A15B3B0C43*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_E97AC7B8F06B8C3E_OFFSET))(this);
	}

	::System::Boolean Method_1_2C1F0A815CE2FE02()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_2C1F0A815CE2FE02_OFFSET))(this);
	}

	::System::Void Method_1_AAE4AC328314A748(::UnityEngine::Camera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_AAE4AC328314A748_OFFSET))(this, a1);
	}

	::System::Void Method_1_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_16D5A839B2F6F0A3(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_16D5A839B2F6F0A3_OFFSET))(this, a1);
	}

	::System::Void Method_1_7F29568EA964E563()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_7F29568EA964E563_OFFSET))(this);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_FE4FFF99CBDC5C59_OFFSET))(this);
	}

	::System::Void Method_1_73B9263E79EBD5A4(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_73B9263E79EBD5A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_73B9263E79EBD5A4_1(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_73B9263E79EBD5A4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FF798D152DDA9A15(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_FF798D152DDA9A15_OFFSET))(this, a1);
	}

	::System::Void Method_1_2D8D297A9EEF51AC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_2D8D297A9EEF51AC_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_447E9A216855C555(::System::Threading::CancellationTokenSource* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_447E9A216855C555_OFFSET))(this, a1);
	}

	::System::Void Method_1_4653BA3626797949(::System::Nullable_1<::UnityEngine::Vector2> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_4653BA3626797949_OFFSET))(this, a1);
	}

	::Cysharp::Threading::Tasks::UniTask Method_1_FE4FFF99CBDC5C59_1()
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_FE4FFF99CBDC5C59_1_OFFSET))(this);
	}

	::System::String* Method_1_7103CC03ECC90853(::UnityEngine::Animator* a1)
	{
		return ((::System::String*(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_7103CC03ECC90853_OFFSET))(this, a1);
	}

	::System::Single Method_1_9876BEA27A0B4DC1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_9876BEA27A0B4DC1_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_EF5B382CAF68576B_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}
};
