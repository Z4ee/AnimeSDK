#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C95130)
#define RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9C953B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPerspectiveWallControl_TypeDefinitionIndex = 57937;

	class MonoEffectPerspectiveWallControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Renderer* TargetRenderer; // 0x18
		::UnityEngine::GameObject* target1; // 0x20
		::System::Single target1PositionOffset; // 0x28
		::UnityEngine::GameObject* target2; // 0x30
		::System::Single target2PositionOffset; // 0x38
		::System::Single Alpha; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPERSPECTIVEWALLCONTROL_UPDATE_OFFSET))(this);
		}
	};
}
