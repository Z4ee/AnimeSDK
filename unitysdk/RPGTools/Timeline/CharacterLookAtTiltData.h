#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3591F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtTiltData_TypeDefinitionIndex = 46206;

	class CharacterLookAtTiltData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::System::Single TargetTilt; // 0x18
		::System::Single OverrideBlendTime; // 0x1C
		::System::String* CurveName; // 0x20
		::UnityEngine::AnimationCurve* TiltCurve; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTDATA__CTOR_OFFSET))(this);
		}
	};
}
