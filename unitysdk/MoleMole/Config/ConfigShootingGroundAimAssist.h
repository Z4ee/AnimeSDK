#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDAIMASSIST__CTOR_OFFSET UNITYSDK_OFFSET(0x174549E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShootingGroundAimAssist_TypeDefinitionIndex = 48463;

	class ConfigShootingGroundAimAssist : public ::System::Object
	{
	public:
		::UnityEngine::LayerMask ColliderLayers; // 0x10
		::System::String* ColliderTag; // 0x18
		::UnityEngine::AnimationCurve* ColliderScaleCurve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSHOOTINGGROUNDAIMASSIST__CTOR_OFFSET))(this);
		}
	};
}
