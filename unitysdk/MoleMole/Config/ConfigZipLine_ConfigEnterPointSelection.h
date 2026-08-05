#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERPOINTSELECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1350AA60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ConfigEnterPointSelection_TypeDefinitionIndex = 53003;

	class ConfigZipLine_ConfigEnterPointSelection : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* cameraAxisDistanceCurve; // 0x10
		::UnityEngine::AnimationCurve* playerDistanceCurve; // 0x18
		::System::Single cameraAxisMaxRange; // 0x20
		::System::Single cameraAxisWeight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGZIPLINE_CONFIGENTERPOINTSELECTION__CTOR_OFFSET))(this);
		}
	};
}
