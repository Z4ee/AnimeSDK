#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOEFFECTPLUGINFOLLOWCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1235ABE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginFollowCamera_TypeDefinitionIndex = 64129;

	class MonoEffectPluginFollowCamera : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* FovTargetTrans; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINFOLLOWCAMERA__CTOR_OFFSET))(this);
		}
	};
}
