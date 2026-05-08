#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

#define MOLEMOLE_TIMELINE_RUNTIMEKEYFRAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79FA20)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeKeyFrame_TypeDefinitionIndex = 30616;

	class RuntimeKeyFrame : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::Single value; // 0x14

		::System::Void _ctor(::UnityEngine::Keyframe keyframe)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Keyframe))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEKEYFRAME__CTOR_OFFSET))(this, keyframe);
		}
	};
}
