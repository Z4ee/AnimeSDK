#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoSimplePointLight_PointIndex.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C27DC80)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C27DB40)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1C27DED0)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AD0D850)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C27DF80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSimplePointLight_TypeDefinitionIndex = 70759;

	class MonoSimplePointLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* meshRenderer; // 0x18
		::RPG::Client::MonoSimplePointLight_PointIndex pointIndex; // 0x20
		::System::Single range; // 0x24
		::UnityEngine::Color color; // 0x28
		::System::Single intensity; // 0x38
		::UnityEngine::Color gizmoColor; // 0x3C
		::UnityEngine::Material* PCANJIIKLDC; // 0x50
		::UnityEngine::Vector4 CMBOFBIKFHL; // 0x58
		::UnityEngine::Color ACLMOHPHCNP; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSIMPLEPOINTLIGHT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSIMPLEPOINTLIGHT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}
	};
}
