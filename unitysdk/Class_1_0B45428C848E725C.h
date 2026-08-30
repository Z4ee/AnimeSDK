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

#define CLASS_1_0B45428C848E725C_METHOD_1_01D00AF5D67C9DE3_OFFSET UNITYSDK_OFFSET(0x154E9520)
#define CLASS_1_0B45428C848E725C_METHOD_1_071850D2764E9D4C_OFFSET UNITYSDK_OFFSET(0x154E92A0)
#define CLASS_1_0B45428C848E725C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x154E9700)
#define CLASS_1_0B45428C848E725C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x154E96A0)
#define CLASS_1_0B45428C848E725C_METHOD_1_CF48D47ABED5EA16_OFFSET UNITYSDK_OFFSET(0x154E8820)
#define CLASS_1_0B45428C848E725C__CTOR_OFFSET UNITYSDK_OFFSET(0x154E9750)

inline static constexpr unsigned int Class_1_0B45428C848E725C_TypeDefinitionIndex = 70361;

class Class_1_0B45428C848E725C : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x10
	::UnityEngine::Camera* FCMHOBKNEEG; // 0x18
	::RPG::CustomRP::VirtualCamera* EJFOJELOONF; // 0x20
	::UnityEngine::Transform* EJLFKOAFOJB; // 0x28
	::UnityEngine::GameObject* LIECGHBPGOI; // 0x30
	::Il2CppArray<::UnityEngine::MaterialPropertyBlock*>* BMCPFHADPKJ; // 0x38
	::UnityEngine::Matrix4x4 GGFBEOFHAFD; // 0x40
	::UnityEngine::Vector4 JFAGECNFHJL; // 0x80
	::System::Boolean LNKHKEFIBNN; // 0x90
	::UnityEngine::Vector2 NMPDINMMMGA; // 0x94
	::System::Single KFJBNPHGCMJ; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF48D47ABED5EA16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_CF48D47ABED5EA16_OFFSET))(this);
	}

	::System::Void Method_1_071850D2764E9D4C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B45428C848E725C_METHOD_1_071850D2764E9D4C_OFFSET))(this);
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
