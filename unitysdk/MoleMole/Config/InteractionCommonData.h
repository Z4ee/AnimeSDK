#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA_METHOD_1_D47295659267DB14_OFFSET UNITYSDK_OFFSET(0x1487A520)
#define MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1487A510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractionCommonData_TypeDefinitionIndex = 89831;

	class InteractionCommonData : public ::System::Object
	{
	public:
		::System::Single Sensitivity; // 0x10
		::System::Single MobileSensitivity; // 0x14
		::System::Single ConsoleSensitivity; // 0x18
		::UnityEngine::AnimationCurve* DampCurve; // 0x20
		::UnityEngine::AnimationCurve* ClampCurve; // 0x28
		::System::Int32 ClampDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::InteractionCommonData* Method_1_D47295659267DB14()
		{
			return ((::MoleMole::Config::InteractionCommonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA_METHOD_1_D47295659267DB14_OFFSET))(this);
		}
	};
}
