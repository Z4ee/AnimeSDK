#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_820B58BBFDF43D0F_Class_1_E4E9BBD6476577C0;
namespace UnityEngine { class GameObject; }

#define CLASS_1_820B58BBFDF43D0F_CLASS_1_245570D33FE94FA6_METHOD_1_1FB0CEA9387FE643_OFFSET UNITYSDK_OFFSET(0xF2224E0)
#define CLASS_1_820B58BBFDF43D0F_CLASS_1_245570D33FE94FA6__CTOR_OFFSET UNITYSDK_OFFSET(0xF2224D0)

inline static constexpr unsigned int Class_1_820B58BBFDF43D0F_Class_1_245570D33FE94FA6_TypeDefinitionIndex = 58888;

class Class_1_820B58BBFDF43D0F_Class_1_245570D33FE94FA6 : public ::System::Object
{
public:
	::Class_1_820B58BBFDF43D0F_Class_1_E4E9BBD6476577C0* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_245570D33FE94FA6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1FB0CEA9387FE643(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_820B58BBFDF43D0F_CLASS_1_245570D33FE94FA6_METHOD_1_1FB0CEA9387FE643_OFFSET))(this, a1, a2);
	}
};
