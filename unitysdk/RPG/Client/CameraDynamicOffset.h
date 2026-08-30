#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERADYNAMICOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0xC9E83E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDynamicOffset_TypeDefinitionIndex = 69686;

	class CameraDynamicOffset : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 AnchorOffsetMax; // 0x10
		::UnityEngine::Vector3 AimOffsetMax; // 0x1C
		::UnityEngine::Vector2 AngleRange; // 0x28
		::UnityEngine::AnimationCurve* AnchorOffsetRatioCurve; // 0x30
		::UnityEngine::AnimationCurve* AimOffsetRatioCurve; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADYNAMICOFFSET__CTOR_OFFSET))(this);
		}
	};
}
