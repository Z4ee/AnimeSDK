#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_UIYOROZUYAABYSSCHALLENGEREVIEWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C47B5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int UIYorozuyaAbyssChallengeReviewConfig_TypeDefinitionIndex = 89543;

	class UIYorozuyaAbyssChallengeReviewConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* avyssReportListCell; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_UIYOROZUYAABYSSCHALLENGEREVIEWCONFIG__CTOR_OFFSET))(this);
		}
	};
}
