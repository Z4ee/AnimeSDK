#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_0A48C0117A1B22E8;
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_044E3AE48B63055A_1_OFFSET UNITYSDK_OFFSET(0x11E7EAB0)
#define CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_044E3AE48B63055A_OFFSET UNITYSDK_OFFSET(0x11E7EA80)
#define CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_DC3393CE6D7C58FB_1_OFFSET UNITYSDK_OFFSET(0x11E7EA10)
#define CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_DC3393CE6D7C58FB_OFFSET UNITYSDK_OFFSET(0x11E7E9A0)
#define CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7E990)

inline static constexpr unsigned int Class_1_0A48C0117A1B22E8_Class_1_E376CF1207E26CAA_TypeDefinitionIndex = 60518;

class Class_1_0A48C0117A1B22E8_Class_1_E376CF1207E26CAA : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_6; // 0x10
	::Class_1_0A48C0117A1B22E8* Field_1_0; // 0x20
	::Foundation::AssetPath Field_1_4; // 0x28
	::UnityEngine::GameObject* Field_1_7; // 0x38
	::UnityEngine::GameObject* Field_1_2; // 0x40
	::System::Action* Field_1_5; // 0x48
	::System::Boolean Field_1_1; // 0x50
	::System::Boolean Field_1_3; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DC3393CE6D7C58FB(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_DC3393CE6D7C58FB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DC3393CE6D7C58FB_1(::UnityEngine::GameObject* a1, ::Foundation::AssetPath a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_DC3393CE6D7C58FB_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_044E3AE48B63055A(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_044E3AE48B63055A_OFFSET))(this, a1);
	}

	::System::Void Method_1_044E3AE48B63055A_1(::Foundation::AssetPath a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + CLASS_1_0A48C0117A1B22E8_CLASS_1_E376CF1207E26CAA_METHOD_1_044E3AE48B63055A_1_OFFSET))(this, a1);
	}
};
