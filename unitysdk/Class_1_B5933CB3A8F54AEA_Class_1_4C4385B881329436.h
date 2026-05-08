#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_4C4385B881329436_METHOD_1_D78BF48A993FAD1B_OFFSET UNITYSDK_OFFSET(0xF5CB050)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_4C4385B881329436__CTOR_OFFSET UNITYSDK_OFFSET(0xF5CB040)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_4C4385B881329436_TypeDefinitionIndex = 68203;

class Class_1_B5933CB3A8F54AEA_Class_1_4C4385B881329436 : public ::System::Object
{
public:
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_2; // 0x18
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_0; // 0x30
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_4C4385B881329436__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D78BF48A993FAD1B(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_4C4385B881329436_METHOD_1_D78BF48A993FAD1B_OFFSET))(this, a1, a2);
	}
};
