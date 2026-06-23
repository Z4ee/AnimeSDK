#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_F15CFE74F533EC32_Class_1_0E7230A37A1F5C3E;
namespace UnityEngine { class GameObject; }

#define CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4_METHOD_1_2D93036445EDB45E_OFFSET UNITYSDK_OFFSET(0x117FEC50)
#define CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4__CTOR_OFFSET UNITYSDK_OFFSET(0x117FEC40)

inline static constexpr unsigned int Class_1_F15CFE74F533EC32_Class_1_76B2F52ADA6942C4_TypeDefinitionIndex = 48743;

class Class_1_F15CFE74F533EC32_Class_1_76B2F52ADA6942C4 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::Class_1_F15CFE74F533EC32_Class_1_0E7230A37A1F5C3E* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2D93036445EDB45E(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_F15CFE74F533EC32_CLASS_1_76B2F52ADA6942C4_METHOD_1_2D93036445EDB45E_OFFSET))(this, a1, a2);
	}
};
