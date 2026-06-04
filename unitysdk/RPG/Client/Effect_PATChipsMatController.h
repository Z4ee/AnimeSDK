#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class PATRenderer;
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_PATCHIPSMATCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB86ADC0)
#define RPG_CLIENT_EFFECT_PATCHIPSMATCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB86B220)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PATChipsMatController_TypeDefinitionIndex = 65932;

	class Effect_PATChipsMatController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::PATRenderer* PATRenderer; // 0x18
		::UnityEngine::Vector4 Field_5_1; // 0x20
		::System::Single DissolveUpValue; // 0x30
		::System::Single DissolveDownValue; // 0x34
		::System::Single DissolveRate; // 0x38
		::System::Single DissolveDirection; // 0x3C
		::System::Single DissolveMask; // 0x40
		::System::Single ScanHeight; // 0x44
		::System::Single ScanAlpha; // 0x48
		::System::Single GlobalGradientRange; // 0x4C
		::System::Single GradientIntensity; // 0x50
		::System::Single GradientDarken; // 0x54
		::UnityEngine::Vector4 Field_5_12; // 0x58
		::UnityEngine::Transform* CustomLight; // 0x68
		::UnityEngine::MaterialPropertyBlock* Field_5_14; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATCHIPSMATCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATCHIPSMATCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
