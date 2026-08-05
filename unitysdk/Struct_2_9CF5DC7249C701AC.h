#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_11EBD3B489AD1882_OFFSET UNITYSDK_OFFSET(0x13890E50)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_42B5664B68A7EA00_OFFSET UNITYSDK_OFFSET(0x7D4650)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_44584B54E581F643_OFFSET UNITYSDK_OFFSET(0x7D45D0)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_4FD0097680A6FE81_OFFSET UNITYSDK_OFFSET(0x13891690)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_611DDCBED432BB03_OFFSET UNITYSDK_OFFSET(0x7D4630)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_6E9C20992CE414CA_1_OFFSET UNITYSDK_OFFSET(0x7D4620)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_6E9C20992CE414CA_OFFSET UNITYSDK_OFFSET(0x7D4610)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_881933D078074935_OFFSET UNITYSDK_OFFSET(0x7D4660)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_902D14AD93B36CC0_OFFSET UNITYSDK_OFFSET(0x13891020)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_AA96F267FBA8656D_OFFSET UNITYSDK_OFFSET(0x13890A80)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_BBA454A949877E00_OFFSET UNITYSDK_OFFSET(0x138911D0)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_D404CA8572EFE98F_OFFSET UNITYSDK_OFFSET(0x7D4640)
#define STRUCT_2_9CF5DC7249C701AC_METHOD_2_E53573F25A5CAA75_OFFSET UNITYSDK_OFFSET(0x7D45F0)
#define STRUCT_2_9CF5DC7249C701AC__CTOR_OFFSET UNITYSDK_OFFSET(0x7D4570)

inline static constexpr unsigned int Struct_2_9CF5DC7249C701AC_TypeDefinitionIndex = 53530;

struct alignas(8) Struct_2_9CF5DC7249C701AC
{
	::System::UInt32 Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18
	::System::String* Field_2_6; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_11; // 0x38
	::System::String* Field_2_10; // 0x40
	::UnityEngine::Vector3 Field_2_9; // 0x48
	::System::Single Field_2_8; // 0x54

	::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5, ::System::String* a6, ::System::String* a7, ::UnityEngine::Vector3 a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::UnityEngine::Vector3 Method_2_44584B54E581F643(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_44584B54E581F643_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Quaternion Method_2_E53573F25A5CAA75(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_E53573F25A5CAA75_OFFSET))(this, a1);
	}
	*/

	::System::Single Method_2_6E9C20992CE414CA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_6E9C20992CE414CA_OFFSET))(this, a1);
	}

	::System::Single Method_2_6E9C20992CE414CA_1(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Single(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_6E9C20992CE414CA_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_611DDCBED432BB03(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_611DDCBED432BB03_OFFSET))(this, a1);
	}

	::Il2CppArray<::UnityEngine::Collider*>* Method_2_D404CA8572EFE98F(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Il2CppArray<::UnityEngine::Collider*>*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_D404CA8572EFE98F_OFFSET))(this, a1);
	}

	::MoleMole::Battle::EntityBodySize Method_2_42B5664B68A7EA00(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_42B5664B68A7EA00_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_881933D078074935(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_881933D078074935_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_AA96F267FBA8656D(::Class_3_C93CC3D2C2AC4067* a1, ::Struct_2_9CF5DC7249C701AC a2)
	{
		return ((::UnityEngine::Vector3(*)(::Class_3_C93CC3D2C2AC4067*, ::Struct_2_9CF5DC7249C701AC))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_AA96F267FBA8656D_OFFSET))(a1, a2);
	}

	/*
	static ::System::Boolean Method_2_BBA454A949877E00(::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E& a1)
	{
		return ((::System::Boolean(*)(::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E&))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_BBA454A949877E00_OFFSET))(a1);
	}
	*/

	/*
	static ::System::Void Method_2_11EBD3B489AD1882(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2, ::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E& a3)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E&))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_11EBD3B489AD1882_OFFSET))(a1, a2, a3);
	}
	*/

	/*
	static ::System::Void Method_2_4FD0097680A6FE81(::UnityEngine::Vector3 a1, ::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E&))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_4FD0097680A6FE81_OFFSET))(a1, a2);
	}
	*/

	/*
	static ::System::Void Method_2_902D14AD93B36CC0(::UnityEngine::Transform* a1, ::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E& a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::Struct_2_9CF5DC7249C701AC_Struct_2_5AC083FE4633ED4E&))((::PBYTE)hIl2Cpp + STRUCT_2_9CF5DC7249C701AC_METHOD_2_902D14AD93B36CC0_OFFSET))(a1, a2);
	}
	*/
};
