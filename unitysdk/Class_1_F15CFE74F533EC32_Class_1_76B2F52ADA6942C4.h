#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_F15CFE74F533EC32_Class_1_011D535F689D6C39;
namespace UnityEngine { class GameObject; }

#define CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4_METHOD_1_2D93036445EDB45E_OFFSET UNITYSDK_OFFSET(0x12E99AC0)
#define CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4__CTOR_OFFSET UNITYSDK_OFFSET(0x12E99AB0)

inline static constexpr unsigned int Class_1_F15CFE74F533EC32_Class_1_76B2F52ADA6942C4_TypeDefinitionIndex = 89252;

class Class_1_F15CFE74F533EC32_Class_1_76B2F52ADA6942C4 : public ::System::Object
{
public:
	::Class_1_F15CFE74F533EC32_Class_1_011D535F689D6C39* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2D93036445EDB45E(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4_METHOD_1_2D93036445EDB45E_OFFSET))(this, a1, a2);
	}
};
