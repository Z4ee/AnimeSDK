#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_MONOLEVELRESULTPAGECONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x168750E0)
#define MOLEMOLE_MONOLEVELRESULTPAGECONFIG_START_OFFSET UNITYSDK_OFFSET(0x16875120)
#define MOLEMOLE_MONOLEVELRESULTPAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16875350)
#define MOLEMOLE_MONOLEVELRESULTPAGECONFIG__START_G____NOTIFYEXP_9_0_OFFSET UNITYSDK_OFFSET(0x16875200)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLevelResultPageConfig_TypeDefinitionIndex = 87416;

	class MonoLevelResultPageConfig : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Single DelayRefreshExp; // 0x58
		::System::Single ExpAnimDuration; // 0x5C
		::System::Single ExpUpgradePaussDuration; // 0x60
		::UnityEngine::AnimationCurve* ExpCurve; // 0x68
		::System::Single DelayRefreshBtn; // 0x70
		::System::Single ChallengeItemDelay; // 0x74
		::System::Single ChallengeItemGap; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELRESULTPAGECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELRESULTPAGECONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELRESULTPAGECONFIG_START_OFFSET))(this);
		}

		::System::Void _Start_g____NotifyExp_9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLEVELRESULTPAGECONFIG__START_G____NOTIFYEXP_9_0_OFFSET))(this);
		}
	};
}
