#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOLEVELRESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD66D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelResultInfo_TypeDefinitionIndex = 86013;

	class MonoLevelResultInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single screenOffsetStartTime; // 0x18
		::UnityEngine::AnimationCurve* screenOffsetStartCurve; // 0x20
		::System::Single uiScreenPixels; // 0x28
		::UnityEngine::RectTransform* referenceRect; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELRESULTINFO__CTOR_OFFSET))(this);
		}
	};
}
