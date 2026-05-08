#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_670407D8BF6E118E_CLASS_1_4CF55F22DA85C5A1_METHOD_1_E906604CD6AAD6F2_OFFSET UNITYSDK_OFFSET(0x1593AF40)
#define CLASS_1_670407D8BF6E118E_CLASS_1_4CF55F22DA85C5A1__CTOR_OFFSET UNITYSDK_OFFSET(0x1593AF30)

inline static constexpr unsigned int Class_1_670407D8BF6E118E_Class_1_4CF55F22DA85C5A1_TypeDefinitionIndex = 39512;

class Class_1_670407D8BF6E118E_Class_1_4CF55F22DA85C5A1 : public ::System::Object
{
public:
	::System::Action_1<::Foundation::AssetPath>* Field_1_0; // 0x10
	::System::Action_2<::UnityEngine::GameObject*, ::Foundation::AssetPath>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_CLASS_1_4CF55F22DA85C5A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E906604CD6AAD6F2(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_CLASS_1_4CF55F22DA85C5A1_METHOD_1_E906604CD6AAD6F2_OFFSET))(this, a1, a2);
	}
};
