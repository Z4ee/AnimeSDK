#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoStageEnv; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMeshSurface; }

#define CLASS_1_AA6B635120C6C78B_METHOD_1_2C901C8FA48A143B_OFFSET UNITYSDK_OFFSET(0x13D0A3D0)
#define CLASS_1_AA6B635120C6C78B_METHOD_1_3574512695A597AB_OFFSET UNITYSDK_OFFSET(0x13D0A5C0)
#define CLASS_1_AA6B635120C6C78B_METHOD_1_4658F0FDE2C5EC80_OFFSET UNITYSDK_OFFSET(0x13D0A900)
#define CLASS_1_AA6B635120C6C78B_METHOD_1_883D031C1863A9AE_OFFSET UNITYSDK_OFFSET(0x13D0ACF0)
#define CLASS_1_AA6B635120C6C78B_METHOD_1_93097B60EF70000E_OFFSET UNITYSDK_OFFSET(0x13D0B150)
#define CLASS_1_AA6B635120C6C78B__CTOR_OFFSET UNITYSDK_OFFSET(0x13D0A380)

inline static constexpr unsigned int Class_1_AA6B635120C6C78B_TypeDefinitionIndex = 51314;

class Class_1_AA6B635120C6C78B : public ::System::Object
{
public:
	::UnityEngine::AI::NavMeshSurface* Field_1_0; // 0x10
	::UnityEngine::AI::NavMeshData* Field_1_6; // 0x18
	::UnityEngine::AI::NavMeshPath* Field_1_5; // 0x20
	::UnityEngine::AI::NavMeshDataInstance Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6B635120C6C78B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2C901C8FA48A143B(::UnityEngine::AI::NavMeshSurface* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AI::NavMeshSurface*))((::PBYTE)hIl2Cpp + CLASS_1_AA6B635120C6C78B_METHOD_1_2C901C8FA48A143B_OFFSET))(this, a1);
	}

	::System::Void Method_1_4658F0FDE2C5EC80(::MoleMole::MonoStageEnv* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoStageEnv*))((::PBYTE)hIl2Cpp + CLASS_1_AA6B635120C6C78B_METHOD_1_4658F0FDE2C5EC80_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_883D031C1863A9AE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a3, ::Il2CppArray<::UnityEngine::Vector3>*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector3>*&))((::PBYTE)hIl2Cpp + CLASS_1_AA6B635120C6C78B_METHOD_1_883D031C1863A9AE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_3574512695A597AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6B635120C6C78B_METHOD_1_3574512695A597AB_OFFSET))(this);
	}

	::System::Boolean Method_1_93097B60EF70000E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA6B635120C6C78B_METHOD_1_93097B60EF70000E_OFFSET))(this);
	}
};
