#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTLIGHTCORELIGHTINGCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x9C7EDD0)
#define RPG_CLIENT_MONOEFFECTLIGHTCORELIGHTINGCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7F090)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectLightCoreLightingControl_TypeDefinitionIndex = 56402;

	class MonoEffectLightCoreLightingControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean enableLight; // 0x18
		::UnityEngine::Color lightedColor; // 0x1C
		::UnityEngine::Color darkenColor; // 0x2C
		::System::Single lightingRangeStart; // 0x3C
		::System::Single lightingRangeMiddle; // 0x40
		::System::Single lightingRangeAddRange; // 0x44
		::System::Single lightingRangeAdd; // 0x48
		::Il2CppArray<::UnityEngine::Renderer*>* characterParts; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIGHTCORELIGHTINGCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTLIGHTCORELIGHTINGCONTROL_UPDATE_OFFSET))(this);
		}
	};
}
