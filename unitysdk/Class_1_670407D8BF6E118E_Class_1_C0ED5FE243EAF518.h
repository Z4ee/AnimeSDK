#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_670407D8BF6E118E;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_670407D8BF6E118E_CLASS_1_C0ED5FE243EAF518_METHOD_1_4B4F27F8A1528C8D_OFFSET UNITYSDK_OFFSET(0x137DB450)
#define CLASS_1_670407D8BF6E118E_CLASS_1_C0ED5FE243EAF518__CTOR_OFFSET UNITYSDK_OFFSET(0x137DB440)

inline static constexpr unsigned int Class_1_670407D8BF6E118E_Class_1_C0ED5FE243EAF518_TypeDefinitionIndex = 88027;

class Class_1_670407D8BF6E118E_Class_1_C0ED5FE243EAF518 : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::GameObject*>* Field_1_7; // 0x10
	::Class_1_670407D8BF6E118E* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_CLASS_1_C0ED5FE243EAF518__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4B4F27F8A1528C8D(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_670407D8BF6E118E_CLASS_1_C0ED5FE243EAF518_METHOD_1_4B4F27F8A1528C8D_OFFSET))(this, a1, a2);
	}
};
