#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA6B635120C6C78B.h"
#include "unitysdk/Class_2_E8C6F87138B2C440_Struct_2_D136C0ED39034E48.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshAgent; }

#define CLASS_2_E8C6F87138B2C440_METHOD_2_315798EC852A16B8_OFFSET UNITYSDK_OFFSET(0x15C03700)
#define CLASS_2_E8C6F87138B2C440_METHOD_2_5F08B426ADF31FF5_OFFSET UNITYSDK_OFFSET(0x15C03960)
#define CLASS_2_E8C6F87138B2C440_METHOD_2_C9509255FD6FBFEB_OFFSET UNITYSDK_OFFSET(0x15C03B10)
#define CLASS_2_E8C6F87138B2C440__CTOR_OFFSET UNITYSDK_OFFSET(0x15C036B0)

inline static constexpr unsigned int Class_2_E8C6F87138B2C440_TypeDefinitionIndex = 86092;

class Class_2_E8C6F87138B2C440 : public ::Class_1_AA6B635120C6C78B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C6F87138B2C440__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_315798EC852A16B8(::Class_2_E8C6F87138B2C440_Struct_2_D136C0ED39034E48& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_E8C6F87138B2C440_Struct_2_D136C0ED39034E48&))((::PBYTE)hIl2Cpp + CLASS_2_E8C6F87138B2C440_METHOD_2_315798EC852A16B8_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F08B426ADF31FF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8C6F87138B2C440_METHOD_2_5F08B426ADF31FF5_OFFSET))(this);
	}

	::System::Boolean Method_2_C9509255FD6FBFEB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3, ::Il2CppArray<::UnityEngine::Vector3>* a4, ::System::Boolean a5, ::System::Single a6, ::UnityEngine::AI::NavMeshAgent* a7)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Single, ::UnityEngine::AI::NavMeshAgent*))((::PBYTE)hIl2Cpp + CLASS_2_E8C6F87138B2C440_METHOD_2_C9509255FD6FBFEB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
