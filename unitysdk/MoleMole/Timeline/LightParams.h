#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Light; }
namespace UnityEngine::Rendering::Universal { class UniversalAdditionalLightData; }

#define MOLEMOLE_TIMELINE_LIGHTPARAMS_METHOD_1_1F30BD6A3D2185A8_1_OFFSET UNITYSDK_OFFSET(0x1178A4D0)
#define MOLEMOLE_TIMELINE_LIGHTPARAMS_METHOD_1_1F30BD6A3D2185A8_OFFSET UNITYSDK_OFFSET(0x1178A260)
#define MOLEMOLE_TIMELINE_LIGHTPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1178A250)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightParams_TypeDefinitionIndex = 74086;

	class LightParams : public ::System::Object
	{
	public:
		::System::Single Strength; // 0x10
		::System::Boolean UseShadowTint; // 0x14
		::System::Single intensity; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_1F30BD6A3D2185A8(::UnityEngine::Light* a1, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTPARAMS_METHOD_1_1F30BD6A3D2185A8_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_1F30BD6A3D2185A8_1(::UnityEngine::Light* a1, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Light*, ::UnityEngine::Rendering::Universal::UniversalAdditionalLightData*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTPARAMS_METHOD_1_1F30BD6A3D2185A8_1_OFFSET))(this, a1, a2);
		}
	};
}
