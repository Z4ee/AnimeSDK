#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_2_C219469667DBAA6A;
namespace UnityEngine { class GameObject; }

#define CLASS_2_C219469667DBAA6A_CLASS_1_875C7A425644BF18_METHOD_1_2B86086B26B4E9A2_OFFSET UNITYSDK_OFFSET(0x1003E140)
#define CLASS_2_C219469667DBAA6A_CLASS_1_875C7A425644BF18__CTOR_OFFSET UNITYSDK_OFFSET(0x1003E130)

inline static constexpr unsigned int Class_2_C219469667DBAA6A_Class_1_875C7A425644BF18_TypeDefinitionIndex = 59405;

class Class_2_C219469667DBAA6A_Class_1_875C7A425644BF18 : public ::System::Object
{
public:
	::Class_2_C219469667DBAA6A* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_875C7A425644BF18__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2B86086B26B4E9A2(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C219469667DBAA6A_CLASS_1_875C7A425644BF18_METHOD_1_2B86086B26B4E9A2_OFFSET))(this, a1, a2);
	}
};
