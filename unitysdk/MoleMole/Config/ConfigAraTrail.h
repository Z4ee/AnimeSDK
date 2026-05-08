#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGARATRAIL_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x1743DFC0)
#define MOLEMOLE_CONFIG_CONFIGARATRAIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1743E010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAraTrail_TypeDefinitionIndex = 61885;

	class ConfigAraTrail : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x10
		::System::String* PrefabPath; // 0x18
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x20
		::System::Single KeepDuration; // 0x28
		::System::Single FadeInDuration; // 0x2C
		::System::Single FadeOutDuration; // 0x30

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
