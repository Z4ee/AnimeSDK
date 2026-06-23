#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18CEEA70)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x18CEE140)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONFIREPRESSEND_OFFSET UNITYSDK_OFFSET(0x18CEE880)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONFIREPRESSSTART_OFFSET UNITYSDK_OFFSET(0x18CEE6D0)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONHITTARGET_OFFSET UNITYSDK_OFFSET(0x18CEE690)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONSHOOTSTART_OFFSET UNITYSDK_OFFSET(0x18CEE4E0)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_PLAYANIMATIONBYINDEX_OFFSET UNITYSDK_OFFSET(0x18CEE230)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_RESETPLYANIMATION_OFFSET UNITYSDK_OFFSET(0x18CEE2F0)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_SETEVENTMODE_OFFSET UNITYSDK_OFFSET(0x18CEE0B0)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEEB60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventCrossHairLongPressMode_TypeDefinitionIndex = 84095;

	class MonoSummerEventCrossHairLongPressMode : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Animation* Animation; // 0x58
		::System::Collections::Generic::List_1<::System::String*>* AnimationSeq; // 0x60
		::System::Collections::Generic::List_1<::System::Single>* CrossHairPhaseList; // 0x68
		::UnityEngine::Animation* NormalShootAnimation; // 0x70
		::System::String* NormalShootAnimStateName; // 0x78
		::System::Single timer; // 0x80
		::System::Boolean isPlaying; // 0x84
		::System::Int32 currentPhaseIndex; // 0x88
		::System::Int32 maxPhaseIndex; // 0x8C
		::System::String* eventName; // 0x90
		::System::String* resetEventName; // 0x98
		::System::Boolean isEventChangeMode; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE__CTOR_OFFSET))(this);
		}

		::System::Void SetEventMode(::System::String* eventName, ::System::String* resetEventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_SETEVENTMODE_OFFSET))(this, eventName, resetEventName);
		}

		::System::Void OnEventTrigger(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONEVENTTRIGGER_OFFSET))(this, eventName);
		}

		::System::Void ResetPlyAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_RESETPLYANIMATION_OFFSET))(this);
		}

		::System::Void OnShootStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONSHOOTSTART_OFFSET))(this);
		}

		::System::Void OnHitTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONHITTARGET_OFFSET))(this);
		}

		::System::Void OnFirePressStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONFIREPRESSSTART_OFFSET))(this);
		}

		::System::Void OnFirePressEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_ONFIREPRESSEND_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PlayAnimationByIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRLONGPRESSMODE_PLAYANIMATIONBYINDEX_OFFSET))(this, index);
		}
	};
}
