#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/VisualEnvironmentE_TimeOfDay.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL_GETCURTIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x16433900)
#define MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL_ONACTIONTRIGGERED_OFFSET UNITYSDK_OFFSET(0x164338B0)
#define MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL_TRYSWITCHTIME_OFFSET UNITYSDK_OFFSET(0x16433A50)
#define MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x16434080)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoCutsceneTimePeriodControl_TypeDefinitionIndex = 79793;

	class MonoCutsceneTimePeriodControl : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay _defaultTimeOfDay; // 0x58
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*>* _timeOfDayControlDict; // 0x60
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay _curTimeOfDay; // 0x68
		::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay _finalApplyTimeOfDay; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void OnActionTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL_ONACTIONTRIGGERED_OFFSET))(this);
		}

		::System::Void TrySwitchTime(::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay timeOfDay)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL_TRYSWITCHTIME_OFFSET))(this, timeOfDay);
		}

		::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay GetCurTimeOfDay()
		{
			return ((::UnityEngine::Rendering::Universal::VisualEnvironmentE_TimeOfDay(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOCUTSCENETIMEPERIODCONTROL_GETCURTIMEOFDAY_OFFSET))(this);
		}
	};
}
