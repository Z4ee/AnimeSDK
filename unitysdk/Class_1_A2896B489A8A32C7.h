#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_A2896B489A8A32C7_METHOD_1_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x172820D0)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_7B1F196408CA4161_OFFSET UNITYSDK_OFFSET(0x17281C10)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_843D01B8CC0EB12F_OFFSET UNITYSDK_OFFSET(0x17281DC0)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_9F69AF367B0FF45B_OFFSET UNITYSDK_OFFSET(0x17282240)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0x17282090)
#define CLASS_1_A2896B489A8A32C7_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x172822D0)
#define CLASS_1_A2896B489A8A32C7__CTOR_OFFSET UNITYSDK_OFFSET(0x17281C00)

inline static constexpr unsigned int Class_1_A2896B489A8A32C7_TypeDefinitionIndex = 86765;

class Class_1_A2896B489A8A32C7 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::RectTransform* Field_1_3; // 0x18
	::System::Single Field_1_2; // 0x20
	::UnityEngine::Vector2 Field_1_4; // 0x24
	::System::Single Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7B1F196408CA4161(::UnityEngine::Vector2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_7B1F196408CA4161_OFFSET))(this, a1);
	}

	::System::Void Method_1_843D01B8CC0EB12F(::UnityEngine::GameObject* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_843D01B8CC0EB12F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Boolean Method_1_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_4487776BEE04D471_OFFSET))(this);
	}

	::System::Void Method_1_9F69AF367B0FF45B(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_9F69AF367B0FF45B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2896B489A8A32C7_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
