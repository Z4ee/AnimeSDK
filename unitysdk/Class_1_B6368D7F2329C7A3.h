#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_699787DEDB234668;
class Class_1_6E06DF87808F0190;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Collider; }

#define CLASS_1_B6368D7F2329C7A3_METHOD_1_08F218FCDB10584E_OFFSET UNITYSDK_OFFSET(0x10B52630)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_196B6E6D3711B766_OFFSET UNITYSDK_OFFSET(0x10B52850)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_19836C3DFF78AEA8_OFFSET UNITYSDK_OFFSET(0x10B51FB0)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_1B755A11F4BDF2F3_OFFSET UNITYSDK_OFFSET(0x10B52840)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_3312C770B48AFB0C_1_OFFSET UNITYSDK_OFFSET(0x10B535B0)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_3312C770B48AFB0C_OFFSET UNITYSDK_OFFSET(0x10B50950)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_3C0908B432FC3E6E_OFFSET UNITYSDK_OFFSET(0x10B51990)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_72B10B92292CAA60_OFFSET UNITYSDK_OFFSET(0x10B51710)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_A0296E04B43EE0A9_OFFSET UNITYSDK_OFFSET(0x10B51C00)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_A310601681D30145_OFFSET UNITYSDK_OFFSET(0x10B53680)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_AADA6A36BA3E8AC4_OFFSET UNITYSDK_OFFSET(0x10B53B50)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_B4B2D012FE378634_OFFSET UNITYSDK_OFFSET(0x10B51680)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_C0B83283BC5F600A_OFFSET UNITYSDK_OFFSET(0x10B53B40)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_DE973A2760D546FC_OFFSET UNITYSDK_OFFSET(0x10B526A0)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_E00F457EF22B93EF_OFFSET UNITYSDK_OFFSET(0x10B50B80)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_E49226E55BF3741F_OFFSET UNITYSDK_OFFSET(0x10B527A0)
#define CLASS_1_B6368D7F2329C7A3_METHOD_1_FCB6D39E44D2E20B_OFFSET UNITYSDK_OFFSET(0x10B50A20)

inline static constexpr unsigned int Class_1_B6368D7F2329C7A3_TypeDefinitionIndex = 80486;

class Class_1_B6368D7F2329C7A3 : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6368D7F2329C7A3_TypeDefinitionIndex)->GetStaticField(0x301E0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6368D7F2329C7A3_TypeDefinitionIndex)->GetStaticField(0x301E8);
	}
	// static const ::System::Boolean Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0

	static ::System::Boolean Method_1_3312C770B48AFB0C(::Class_1_6E06DF87808F0190* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_3312C770B48AFB0C_OFFSET))(a1);
	}

	static ::System::Single Method_1_FCB6D39E44D2E20B(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Int32 a2)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_FCB6D39E44D2E20B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E00F457EF22B93EF(::Class_1_6E06DF87808F0190* a1, ::Class_1_6E06DF87808F0190* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::Class_1_6E06DF87808F0190*, ::Class_1_6E06DF87808F0190*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_E00F457EF22B93EF_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::UnityEngine::RaycastHit>* Method_1_B4B2D012FE378634()
	{
		return ((::Il2CppArray<::UnityEngine::RaycastHit>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_B4B2D012FE378634_OFFSET))();
	}

	static ::System::Void Method_1_72B10B92292CAA60(::Class_1_6E06DF87808F0190* a1, ::Class_1_699787DEDB234668* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_1_6E06DF87808F0190*, ::Class_1_699787DEDB234668*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_72B10B92292CAA60_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_3C0908B432FC3E6E(::UnityEngine::BoxCollider* a1, ::UnityEngine::BoxCollider* a2)
	{
		return ((::System::Single(*)(::UnityEngine::BoxCollider*, ::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_3C0908B432FC3E6E_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_08F218FCDB10584E(::System::Single a1)
	{
		return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_08F218FCDB10584E_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_DE973A2760D546FC()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_DE973A2760D546FC_OFFSET))();
	}

	static ::System::Single Method_1_19836C3DFF78AEA8(::Il2CppArray<::UnityEngine::Vector2>* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_19836C3DFF78AEA8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1B755A11F4BDF2F3(::UnityEngine::Vector2& a1, ::UnityEngine::Vector2& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_1B755A11F4BDF2F3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3312C770B48AFB0C_1(::Class_1_6E06DF87808F0190* a1)
	{
		return ((::System::Boolean(*)(::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_3312C770B48AFB0C_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A310601681D30145(::Class_1_6E06DF87808F0190* a1, ::System::Collections::Generic::List_1<::System::Single>* a2, ::Class_1_6E06DF87808F0190* a3)
	{
		return ((::System::Boolean(*)(::Class_1_6E06DF87808F0190*, ::System::Collections::Generic::List_1<::System::Single>*, ::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_A310601681D30145_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_C0B83283BC5F600A(::Il2CppArray<::UnityEngine::RaycastHit>* a1)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_C0B83283BC5F600A_OFFSET))(a1);
	}

	static ::UnityEngine::Vector2 Method_1_AADA6A36BA3E8AC4(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
	{
		return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_AADA6A36BA3E8AC4_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_E49226E55BF3741F(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
	{
		return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_E49226E55BF3741F_OFFSET))(a1, a2, a3);
	}

	static ::Il2CppArray<::UnityEngine::Vector2>* Method_1_A0296E04B43EE0A9(::UnityEngine::BoxCollider* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::BoxCollider*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_A0296E04B43EE0A9_OFFSET))(a1);
	}

	static ::System::Single Method_1_196B6E6D3711B766(::Il2CppArray<::UnityEngine::Vector2>* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2)
	{
		return ((::System::Single(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + CLASS_1_B6368D7F2329C7A3_METHOD_1_196B6E6D3711B766_OFFSET))(a1, a2);
	}
};
