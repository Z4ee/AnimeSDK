#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoSimplePointLight_PointIndex.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC145A10)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xC1458D0)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xC145C60)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT_ONENABLE_OFFSET UNITYSDK_OFFSET(0xC145870)
#define RPG_CLIENT_MONOSIMPLEPOINTLIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0xC145D10)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoSimplePointLight_TypeDefinitionIndex = 66211;

	class MonoSimplePointLight : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* meshRenderer; // 0x18
		::RPG::Client::MonoSimplePointLight_PointIndex pointIndex; // 0x20
		::System::Single range; // 0x24
		::UnityEngine::Color color; // 0x28
		::System::Single intensity; // 0x38
		::UnityEngine::Color gizmoColor; // 0x3C
		::UnityEngine::Material* Field_5_6; // 0x50
		::UnityEngine::Vector4 Field_5_7; // 0x58
		::UnityEngine::Color Field_5_8; // 0x68

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
