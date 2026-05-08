#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15852230)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONFIREPRESSEND_OFFSET UNITYSDK_OFFSET(0x158525A0)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONFIREPRESSSTART_OFFSET UNITYSDK_OFFSET(0x15852560)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONHITTARGET_OFFSET UNITYSDK_OFFSET(0x15852520)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONSHOOTSTART_OFFSET UNITYSDK_OFFSET(0x15852280)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_SETEVENTMODE_OFFSET UNITYSDK_OFFSET(0x158521E0)
#define MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x158525E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSummerEventCrossHairSimpleMode_TypeDefinitionIndex = 41549;

	class MonoSummerEventCrossHairSimpleMode : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::UnityEngine::Animation* Animation; // 0x58
		::System::String* FireAnimationName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE__CTOR_OFFSET))(this);
		}

		::System::Void SetEventMode(::System::String* eventName, ::System::String* resetEventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_SETEVENTMODE_OFFSET))(this, eventName, resetEventName);
		}

		::System::Void OnEventTrigger(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONEVENTTRIGGER_OFFSET))(this, eventName);
		}

		::System::Void OnShootStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONSHOOTSTART_OFFSET))(this);
		}

		::System::Void OnHitTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONHITTARGET_OFFSET))(this);
		}

		::System::Void OnFirePressStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONFIREPRESSSTART_OFFSET))(this);
		}

		::System::Void OnFirePressEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSUMMEREVENTCROSSHAIRSIMPLEMODE_ONFIREPRESSEND_OFFSET))(this);
		}
	};
}
