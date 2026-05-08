#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_A537275581279BF4_CLASS_1_A2B3A704D1D4767C_METHOD_1_11B5333DA0474AE4_OFFSET UNITYSDK_OFFSET(0xEA6C780)
#define CLASS_1_A537275581279BF4_CLASS_1_A2B3A704D1D4767C__CTOR_OFFSET UNITYSDK_OFFSET(0xEA6C770)

inline static constexpr unsigned int Class_1_A537275581279BF4_Class_1_A2B3A704D1D4767C_TypeDefinitionIndex = 50776;

class Class_1_A537275581279BF4_Class_1_A2B3A704D1D4767C : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_CLASS_1_A2B3A704D1D4767C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_11B5333DA0474AE4(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A537275581279BF4_CLASS_1_A2B3A704D1D4767C_METHOD_1_11B5333DA0474AE4_OFFSET))(this, a1);
	}
};
