#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_699787DEDB234668;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_699787DEDB234668_CLASS_1_DDDC39A480133317_METHOD_1_703283F983C624F4_OFFSET UNITYSDK_OFFSET(0x11DC7AB0)
#define CLASS_1_699787DEDB234668_CLASS_1_DDDC39A480133317__CTOR_OFFSET UNITYSDK_OFFSET(0x11DC7AA0)

inline static constexpr unsigned int Class_1_699787DEDB234668_Class_1_DDDC39A480133317_TypeDefinitionIndex = 53877;

class Class_1_699787DEDB234668_Class_1_DDDC39A480133317 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_699787DEDB234668* Field_1_0; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_DDDC39A480133317__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_703283F983C624F4(::Foundation::AssetPath a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668_CLASS_1_DDDC39A480133317_METHOD_1_703283F983C624F4_OFFSET))(this, a1, a2);
	}
};
