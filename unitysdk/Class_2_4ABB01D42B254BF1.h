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

#define CLASS_2_4ABB01D42B254BF1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1149A770)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_1B4BF89CF1196224_OFFSET UNITYSDK_OFFSET(0x1149B6C0)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_2EDAC8CAFF864AE8_OFFSET UNITYSDK_OFFSET(0x1149B140)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_534B3127B3A04094_OFFSET UNITYSDK_OFFSET(0x1149CF90)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_5BFA9E6EDE4092E0_OFFSET UNITYSDK_OFFSET(0x1149BD20)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_5D40AFBF4607FFBD_OFFSET UNITYSDK_OFFSET(0x1149AF30)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_6CA91B221CC56E30_OFFSET UNITYSDK_OFFSET(0x1149C2F0)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_808296A1B7618835_OFFSET UNITYSDK_OFFSET(0x1149BEF0)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_81DEA79B478FFEE7_OFFSET UNITYSDK_OFFSET(0x1149D360)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_9C6144DEB1C8C47E_OFFSET UNITYSDK_OFFSET(0x1149B5C0)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_AF53EB6FEDE46968_OFFSET UNITYSDK_OFFSET(0x1149AB20)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1149A840)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1149D480)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1149A730)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_DBBC2BE4BD2084C4_OFFSET UNITYSDK_OFFSET(0x1149A9A0)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_FD8ADD3120F9F055_OFFSET UNITYSDK_OFFSET(0x1149B270)
#define CLASS_2_4ABB01D42B254BF1_METHOD_2_FEA241CA014F8043_OFFSET UNITYSDK_OFFSET(0x1149BC80)
#define CLASS_2_4ABB01D42B254BF1_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1149A7C0)
#define CLASS_2_4ABB01D42B254BF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1149A940)
#define CLASS_2_4ABB01D42B254BF1__CTOR_OFFSET UNITYSDK_OFFSET(0x1149A880)

inline static constexpr unsigned int Class_2_4ABB01D42B254BF1_TypeDefinitionIndex = 62272;

class Class_2_4ABB01D42B254BF1 : public ::Foundation::SingletonDisposable_1<::Class_2_4ABB01D42B254BF1*>
{
public:
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4ABB01D42B254BF1_TypeDefinitionIndex)->GetStaticField(0x10390);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4ABB01D42B254BF1_TypeDefinitionIndex)->GetStaticField(0x10394);
	}
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4ABB01D42B254BF1_TypeDefinitionIndex)->GetStaticField(0x10398);
	}
	// static const ::System::Single Field_2_14; // 0x0
	::UnityEngine::AI::NavMeshPath* Field_2_13; // 0x10
	::UnityEngine::AsyncOperation* Field_2_8; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Terrain*>* Field_2_4; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* Field_2_6; // 0x28
	::UnityEngine::AI::NavMeshData* Field_2_7; // 0x30
	::UnityEngine::AI::NavMeshSurface* Field_2_12; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::UnityEngine::AI::NavMeshDataInstance Field_2_9; // 0x48
	::System::Boolean Field_2_10; // 0x4C
	::UnityEngine::Vector3 Field_2_5; // 0x50
	::UnityEngine::Bounds Field_2_11; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1__CCTOR_OFFSET))();
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_ONCREATE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_DBBC2BE4BD2084C4(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5, ::System::Single a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_DBBC2BE4BD2084C4_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::UnityEngine::Bounds Method_2_5D40AFBF4607FFBD()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_5D40AFBF4607FFBD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_2EDAC8CAFF864AE8(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_2EDAC8CAFF864AE8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FD8ADD3120F9F055(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_FD8ADD3120F9F055_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_AF53EB6FEDE46968(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::AI::NavMeshQueryFilter a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a5, ::Il2CppArray<::UnityEngine::Vector3>*& a6, ::System::Single a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshQueryFilter, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_AF53EB6FEDE46968_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_2_9C6144DEB1C8C47E(::UnityEngine::Vector3 a1, ::UnityEngine::AI::NavMeshHit& a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_9C6144DEB1C8C47E_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Bounds Method_2_1B4BF89CF1196224(::UnityEngine::Matrix4x4 a1, ::UnityEngine::Bounds a2)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_1B4BF89CF1196224_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5BFA9E6EDE4092E0(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_5BFA9E6EDE4092E0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_808296A1B7618835(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_808296A1B7618835_OFFSET))(this, a1);
	}

	::UnityEngine::Bounds Method_2_6CA91B221CC56E30(::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>* a1)
	{
		return ((::UnityEngine::Bounds(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::AI::NavMeshBuildSource>*))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_6CA91B221CC56E30_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_FEA241CA014F8043(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_FEA241CA014F8043_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_534B3127B3A04094(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_534B3127B3A04094_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Single Method_2_81DEA79B478FFEE7(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_81DEA79B478FFEE7_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ABB01D42B254BF1_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}
};
