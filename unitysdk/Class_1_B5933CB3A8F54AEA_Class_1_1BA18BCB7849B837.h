#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_B5933CB3A8F54AEA_Class_1_4C4385B881329436;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_1BA18BCB7849B837_METHOD_1_A5B1555CB84EFA34_OFFSET UNITYSDK_OFFSET(0x178D9DE0)
#define CLASS_1_B5933CB3A8F54AEA_CLASS_1_1BA18BCB7849B837__CTOR_OFFSET UNITYSDK_OFFSET(0x178D9DD0)

inline static constexpr unsigned int Class_1_B5933CB3A8F54AEA_Class_1_1BA18BCB7849B837_TypeDefinitionIndex = 41394;

class Class_1_B5933CB3A8F54AEA_Class_1_1BA18BCB7849B837 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::Foundation::AssetPath Field_1_7; // 0x18
	::Class_1_B5933CB3A8F54AEA_Class_1_4C4385B881329436* Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_1BA18BCB7849B837__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A5B1555CB84EFA34(::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_B5933CB3A8F54AEA_CLASS_1_1BA18BCB7849B837_METHOD_1_A5B1555CB84EFA34_OFFSET))(this, a1);
	}
};
