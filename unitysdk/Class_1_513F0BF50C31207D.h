#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_513F0BF50C31207D_METHOD_1_26B058733E7A6748_OFFSET UNITYSDK_OFFSET(0x178F16E0)
#define CLASS_1_513F0BF50C31207D_METHOD_1_B1D2F92F3EDAEB41_OFFSET UNITYSDK_OFFSET(0x178F2050)
#define CLASS_1_513F0BF50C31207D_METHOD_1_B78C8712B0F6363A_OFFSET UNITYSDK_OFFSET(0x178F22A0)

inline static constexpr unsigned int Class_1_513F0BF50C31207D_TypeDefinitionIndex = 71394;

class Class_1_513F0BF50C31207D : public ::System::Object
{
public:
	static ::System::Void Method_1_26B058733E7A6748(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_METHOD_1_26B058733E7A6748_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Cysharp::Threading::Tasks::UniTask Method_1_B1D2F92F3EDAEB41(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Action_1<::System::Boolean>* a12)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::UInt32, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_METHOD_1_B1D2F92F3EDAEB41_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
	}

	static ::System::Boolean Method_1_B78C8712B0F6363A(::UnityEngine::AI::NavMeshPath* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::Vector3>*& a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& a5, ::System::Single a6, ::System::Single a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11)
	{
		return ((::System::Boolean(*)(::UnityEngine::AI::NavMeshPath*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*&, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_513F0BF50C31207D_METHOD_1_B78C8712B0F6363A_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
};
