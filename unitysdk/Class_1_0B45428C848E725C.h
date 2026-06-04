#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class VirtualCamera; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0B45428C848E725C_METHOD_1_01D00AF5D67C9DE3_OFFSET UNITYSDK_OFFSET(0x137242C0)
#define CLASS_1_0B45428C848E725C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x137244A0)
#define CLASS_1_0B45428C848E725C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13724440)
#define CLASS_1_0B45428C848E725C_METHOD_1_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0x137235D0)
#define CLASS_1_0B45428C848E725C_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x13724040)
#define CLASS_1_0B45428C848E725C__CTOR_OFFSET UNITYSDK_OFFSET(0x137244F0)

inline static constexpr unsigned int Class_1_0B45428C848E725C_TypeDefinitionIndex = 65822;

class Class_1_0B45428C848E725C : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::RPG::CustomRP::VirtualCamera* Field_1_1; // 0x18
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_2; // 0x20
	::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* Field_1_3; // 0x28
	::UnityEngine::Camera* Field_1_4; // 0x30
	::UnityEngine::GameObject* Field_1_5; // 0x38
	::UnityEngine::Vector2 Field_1_6; // 0x40
	::UnityEngine::Vector4 Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x58
	::UnityEngine::Matrix4x4 Field_1_9; // 0x5C
	::System::Single Field_1_10; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_CF48D47ABED5EA16_OFFSET))(this);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_01D00AF5D67C9DE3(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_01D00AF5D67C9DE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
