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

#define CLASS_1_9F52D9C209B58BAC_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16EFD4C0)
#define CLASS_1_9F52D9C209B58BAC_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16EFD460)
#define CLASS_1_9F52D9C209B58BAC_METHOD_1_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x16EFC650)
#define CLASS_1_9F52D9C209B58BAC_METHOD_1_CE9052442509B608_OFFSET UNITYSDK_OFFSET(0x16EFD300)
#define CLASS_1_9F52D9C209B58BAC_METHOD_1_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x16EFD0B0)
#define CLASS_1_9F52D9C209B58BAC__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFD510)

inline static constexpr unsigned int Class_1_9F52D9C209B58BAC_TypeDefinitionIndex = 67239;

class Class_1_9F52D9C209B58BAC : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* Field_1_0; // 0x10
	::UnityEngine::Camera* Field_1_1; // 0x18
	::UnityEngine::Transform* Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_3; // 0x28
	::RPG::CustomRP::VirtualCamera* Field_1_4; // 0x30
	::Il2CppArray<::UnityEngine::Renderer*>* Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::UnityEngine::Vector2 Field_1_8; // 0x48
	::UnityEngine::Vector4 Field_1_9; // 0x50
	::UnityEngine::Matrix4x4 Field_1_10; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F52D9C209B58BAC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CD28994AFE636FFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F52D9C209B58BAC_METHOD_1_CD28994AFE636FFF_OFFSET))(this);
	}

	::System::Void Method_1_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F52D9C209B58BAC_METHOD_1_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Method_1_CE9052442509B608(::Il2CppArray<::UnityEngine::Renderer*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + CLASS_1_9F52D9C209B58BAC_METHOD_1_CE9052442509B608_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F52D9C209B58BAC_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F52D9C209B58BAC_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}
};
