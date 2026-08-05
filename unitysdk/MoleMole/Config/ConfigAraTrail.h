#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGARATRAIL_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1B8F1B70)
#define MOLEMOLE_CONFIG_CONFIGARATRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8F1BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAraTrail_TypeDefinitionIndex = 45394;

	class ConfigAraTrail : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x18
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x20
		::System::Single FadeInDuration; // 0x28
		::System::Single FadeOutDuration; // 0x2C
		::System::Single KeepDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARATRAIL__CTOR_OFFSET))(this);
		}

		::System::Single get_TotalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGARATRAIL_GET_TOTALDURATION_OFFSET))(this);
		}
	};
}
