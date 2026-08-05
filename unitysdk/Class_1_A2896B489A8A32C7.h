#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_A2896B489A8A32C7_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x13297A90)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_7B1F196408CA4161_OFFSET UNITYSDK_OFFSET(0x13297890)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_843D01B8CC0EB12F_OFFSET UNITYSDK_OFFSET(0x13297C00)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_9F69AF367B0FF45B_OFFSET UNITYSDK_OFFSET(0x13297800)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x13297ED0)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13297A40)
#define CLASS_1_A2896B489A8A32C7__CTOR_OFFSET UNITYSDK_OFFSET(0x132977F0)

inline static constexpr unsigned int Class_1_A2896B489A8A32C7_TypeDefinitionIndex = 41835;

class Class_1_A2896B489A8A32C7 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_6; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::UnityEngine::Vector2 Field_1_5; // 0x20
	::System::Single Field_1_0; // 0x28
	::System::Single Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9F69AF367B0FF45B(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_9F69AF367B0FF45B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_1_843D01B8CC0EB12F(::UnityEngine::GameObject* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_843D01B8CC0EB12F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_7B1F196408CA4161(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_7B1F196408CA4161_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}
};
