#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9043C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyCurve_TypeDefinitionIndex = 66357;

	class StageHarmonyCurve : public ::System::Object
	{
	public:
		::System::Single Scale; // 0x10
		::UnityEngine::AnimationCurve* Curve; // 0x18
		::System::Int32 BeatRepeate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYCURVE__CTOR_OFFSET))(this);
		}
	};
}
