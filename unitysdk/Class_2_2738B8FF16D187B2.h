#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshQueryFilter.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Terrain; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_2_2738B8FF16D187B2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1216C770)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_1B4BF89CF1196224_OFFSET UNITYSDK_OFFSET(0x1216CEF0)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x1216E9A0)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_534B3127B3A04094_OFFSET UNITYSDK_OFFSET(0x1216F0B0)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_5BFA9E6EDE4092E0_OFFSET UNITYSDK_OFFSET(0x1216EEE0)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_5D3C979D27FC6491_OFFSET UNITYSDK_OFFSET(0x1216CB20)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_5D40AFBF4607FFBD_OFFSET UNITYSDK_OFFSET(0x1216E790)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_6CA91B221CC56E30_OFFSET UNITYSDK_OFFSET(0x1216D560)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_808296A1B7618835_OFFSET UNITYSDK_OFFSET(0x1216EAD0)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_8CD6295C8EABEBBF_OFFSET UNITYSDK_OFFSET(0x1216E350)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_9C6144DEB1C8C47E_OFFSET UNITYSDK_OFFSET(0x1216E210)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1216C840)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1216E310)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1216C730)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_DBBC2BE4BD2084C4_OFFSET UNITYSDK_OFFSET(0x1216C9A0)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_FD8ADD3120F9F055_OFFSET UNITYSDK_OFFSET(0x1216E440)
#define CLASS_2_2738B8FF16D187B2_METHOD_2_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x1216D4C0)
#define CLASS_2_2738B8FF16D187B2_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1216C7C0)
#define CLASS_2_2738B8FF16D187B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1216C940)
#define CLASS_2_2738B8FF16D187B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1216C880)

inline static constexpr unsigned int Class_2_2738B8FF16D187B2_TypeDefinitionIndex = 80309;

class Class_2_2738B8FF16D187B2 : public ::Foundation::SingletonDisposable_1<::Class_2_2738B8FF16D187B2*>
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2738B8FF16D187B2_TypeDefinitionIndex)->GetStaticField(0x11040);
	}
	static ::System::Single* StaticGet_Field_2_7()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2738B8FF16D187B2_TypeDefinitionIndex)->GetStaticField(0x11044);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_2738B8FF16D187B2_TypeDefinitionIndex)->GetStaticField(0x11048);
	}
	// static const ::System::Single Field_2_19; // 0x0
	::UnityEngine::AsyncOperation* Field_2_9; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Terrain*>* Field_2_5; // 0x18
	::UnityEngine::AI::NavMeshSurface* Field_2_13; // 0x20
	::UnityEngine::AI::NavMeshData* Field_2_10; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* Field_2_11; // 0x30
	::UnityEngine::AI::NavMeshPath* Field_2_12; // 0x38
	::UnityEngine::Transform* Field_2_6; // 0x40
	::UnityEngine::Bounds Field_2_14; // 0x48
	::System::Boolean Field_2_15; // 0x60
	::UnityEngine::Vector3 Field_2_4; // 0x64
	::UnityEngine::AI::NavMeshDataInstance Field_2_8; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_DBBC2BE4BD2084C4(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_DBBC2BE4BD2084C4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Bounds Method_2_1B4BF89CF1196224(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Bounds a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_1B4BF89CF1196224_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Bounds Method_2_6CA91B221CC56E30(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_6CA91B221CC56E30_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_9C6144DEB1C8C47E(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshHit& a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_9C6144DEB1C8C47E_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Single Method_2_8CD6295C8EABEBBF(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_8CD6295C8EABEBBF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_FD8ADD3120F9F055(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_FD8ADD3120F9F055_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Bounds Method_2_5D40AFBF4607FFBD()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_5D40AFBF4607FFBD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::System::Void Method_2_808296A1B7618835(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_808296A1B7618835_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5BFA9E6EDE4092E0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_5BFA9E6EDE4092E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_534B3127B3A04094(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_534B3127B3A04094_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_5D3C979D27FC6491(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::AI::NavMeshQueryFilter a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a5, ::Il2CppArray<::UnityEngine::Vector3>*& a6, ::System::Single a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshQueryFilter, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2738B8FF16D187B2_METHOD_2_5D3C979D27FC6491_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
