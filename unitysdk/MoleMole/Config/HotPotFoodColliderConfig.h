#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HotPotFoodColliderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CapsuleDirection2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_METHOD_1_C95FBB2C4A24061C_OFFSET UNITYSDK_OFFSET(0x170C0C50)
#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_METHOD_1_E3F7D9E0F6671419_OFFSET UNITYSDK_OFFSET(0x170C1960)
#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_METHOD_1_FB65499351C37BFD_OFFSET UNITYSDK_OFFSET(0x170C0BD0)
#define MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170C0BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotFoodColliderConfig_TypeDefinitionIndex = 75794;

	class HotPotFoodColliderConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::HotPotFoodColliderType colliderType; // 0x10
		::System::Single rotation; // 0x14
		::UnityEngine::Vector2 boxSize; // 0x18
		::UnityEngine::Vector2 boxOffset; // 0x20
		::System::Single circleRadius; // 0x28
		::UnityEngine::Vector2 circleOffset; // 0x2C
		::UnityEngine::Vector2 capsuleSize; // 0x34
		::UnityEngine::Vector2 capsuleOffset; // 0x3C
		::UnityEngine::CapsuleDirection2D capsuleDirection; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 Method_1_FB65499351C37BFD()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_METHOD_1_FB65499351C37BFD_OFFSET))(this);
		}

		::UnityEngine::Collider2D* Method_1_C95FBB2C4A24061C(::UnityEngine::GameObject* a1, ::UnityEngine::UI::Image* a2)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_METHOD_1_C95FBB2C4A24061C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Collider2D* Method_1_E3F7D9E0F6671419(::UnityEngine::GameObject* a1)
		{
			return ((::UnityEngine::Collider2D*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFOODCOLLIDERCONFIG_METHOD_1_E3F7D9E0F6671419_OFFSET))(this, a1);
		}
	};
}
