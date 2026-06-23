#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1DD95990)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_GET_DONTRESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1DD95940)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_GET_DONTRESETWHENDESTROY_OFFSET UNITYSDK_OFFSET(0x1DD95920)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_GET_STOPPLAYABLEBEHAVIOUR_OFFSET UNITYSDK_OFFSET(0x1DD95930)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DD95970)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1DD95980)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_SETTIMELINEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DD95950)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_SETVALUE_1_OFFSET UNITYSDK_OFFSET(0x1DD95AC0)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1DD959A0)
#define MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD95AD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int TimeLinePlayableBehaviour_TypeDefinitionIndex = 32155;

	class TimeLinePlayableBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean isKFrame; // 0x10
		::System::Boolean _dontResetWhenDestroy; // 0x11
		::System::Boolean _stopPlayableBehaviour; // 0x12
		::System::Boolean _dontResetActive; // 0x13

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Boolean get_dontResetWhenDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_GET_DONTRESETWHENDESTROY_OFFSET))(this);
		}

		::System::Boolean get_stopPlayableBehaviour()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_GET_STOPPLAYABLEBEHAVIOUR_OFFSET))(this);
		}

		::System::Boolean get_dontResetActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_GET_DONTRESETACTIVE_OFFSET))(this);
		}

		::System::Void SetTimelinePlayable(::System::Boolean dontResetWhenDestroy, ::System::Boolean dontResetActive, ::System::Boolean stop, ::System::Boolean isKFrame)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_SETTIMELINEPLAYABLE_OFFSET))(this, dontResetWhenDestroy, dontResetActive, stop, isKFrame);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_ONENABLE_OFFSET))(this);
		}

		::System::Void ProcessFrame(::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, playerData);
		}

		::System::Void CopyValueFromComp(::System::Object* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, playerData);
		}

		::System::Void SetValue(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* animationCurves)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_SETVALUE_OFFSET))(this, animationCurves);
		}

		::System::Void SetValue_1(::System::String* propertyName, ::System::Single propertyValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_TIMELINEPLAYABLEBEHAVIOUR_SETVALUE_1_OFFSET))(this, propertyName, propertyValue);
		}
	};
}
