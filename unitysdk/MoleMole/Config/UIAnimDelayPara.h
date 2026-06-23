#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class AnimationState; }

#define MOLEMOLE_CONFIG_UIANIMDELAYPARA_GETWAITTIME_OFFSET UNITYSDK_OFFSET(0xE982D90)
#define MOLEMOLE_CONFIG_UIANIMDELAYPARA__CTOR_OFFSET UNITYSDK_OFFSET(0xE982E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIAnimDelayPara_TypeDefinitionIndex = 77644;

	class UIAnimDelayPara : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean calAnimLength; // 0x18
		::System::Single ShowDelayTime; // 0x1C
		::System::Single FixTime; // 0x20
		::UnityEngine::AnimationCurve* FixAnimationCurve; // 0x28
		::System::Single CreateInterval; // 0x30
		::System::Single DestroyInterval; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMDELAYPARA__CTOR_OFFSET))(this);
		}

		::System::Single GetWaitTime(::UnityEngine::AnimationState* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationState*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIANIMDELAYPARA_GETWAITTIME_OFFSET))(this, a1);
		}
	};
}
