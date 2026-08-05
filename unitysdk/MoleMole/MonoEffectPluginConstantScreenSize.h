#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINCONSTANTSCREENSIZE__CTOR_OFFSET UNITYSDK_OFFSET(0x118E7250)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginConstantScreenSize_TypeDefinitionIndex = 67789;

	class MonoEffectPluginConstantScreenSize : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Transform* ScaleTargetTrans; // 0x18
		::System::Single DesignDistance; // 0x20
		::System::Single DesignFov; // 0x24
		::UnityEngine::Vector2 DistanceClamp; // 0x28
		::UnityEngine::Vector2 ScaleClamp; // 0x30
		::System::Boolean UseDepthDistance; // 0x38
		::System::Boolean UniformScale; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINCONSTANTSCREENSIZE__CTOR_OFFSET))(this);
		}
	};
}
