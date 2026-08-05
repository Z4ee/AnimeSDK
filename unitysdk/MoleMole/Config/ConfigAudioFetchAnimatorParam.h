#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAudioFetchAnimatorParam_AnimatorParamType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_FETCHANIMATORPARM_OFFSET UNITYSDK_OFFSET(0x12EFBFA0)
#define MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFC080)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAudioFetchAnimatorParam_TypeDefinitionIndex = 74812;

	class ConfigAudioFetchAnimatorParam : public ::System::Object
	{
	public:
		::System::String* animatorParamName; // 0x10
		::MoleMole::Config::ConfigAudioFetchAnimatorParam_AnimatorParamType animatorParamType; // 0x18
		::System::Int32 animatorParamHash; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM__CTOR_OFFSET))(this);
		}

		::System::Single FetchAnimatorParm(::UnityEngine::Animator* animator)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAUDIOFETCHANIMATORPARAM_FETCHANIMATORPARM_OFFSET))(this, animator);
		}
	};
}
