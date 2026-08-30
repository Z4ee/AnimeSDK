#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace RPG::Client { class EventTriggerListener; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_BINDDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDC13350)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETDRAGFOLLOWER_OFFSET UNITYSDK_OFFSET(0xDC13290)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETDRAGREGION_OFFSET UNITYSDK_OFFSET(0xDC13240)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0xDC12320)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETPAUSELISTENINGDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDC13540)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0xDC12400)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETTARGET_OFFSET UNITYSDK_OFFSET(0xDC12700)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_UNBINDDRAGEVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xDC13450)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC13630)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xDC13610)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__ONDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xDC13590)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__REFRESHSTATEVIEWOFCOLOR_OFFSET UNITYSDK_OFFSET(0xDC121B0)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__REFRESHSTATEVIEWOFFOLLOWER_OFFSET UNITYSDK_OFFSET(0xDC122A0)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__REFRESHSTATEVIEW_OFFSET UNITYSDK_OFFSET(0xDC12110)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__SETTARGETFORCURVE_OFFSET UNITYSDK_OFFSET(0xDC129E0)
#define RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__SETTARGETFORFOLLOWER_OFFSET UNITYSDK_OFFSET(0xDC13160)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelDragTrajectory_TypeDefinitionIndex = 77867;

	class ChimeraDuelDragTrajectory : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__MainColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelDragTrajectory_TypeDefinitionIndex)->GetStaticField(0x14470);
		}
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve; // 0x18
		::UnityEngine::LineRenderer* _LineRenderer; // 0x20
		::UnityEngine::Color _ColorNormal; // 0x28
		::UnityEngine::Color _ColorHighlight; // 0x38
		::UnityEngine::Color _ColorOutOfRange; // 0x48
		::RPG::Client::EventTriggerListener* _BoundEventTrigger; // 0x58
		::UnityEngine::RectTransform* _DragRegion; // 0x60
		::UnityEngine::RectTransform* _DragFollower; // 0x68
		::System::Boolean _Paused; // 0x70
		::System::Boolean _IsOutOfRange; // 0x71
		::System::Boolean _IsHighlighted; // 0x72

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__CCTOR_OFFSET))();
		}

		::System::Void _RefreshStateView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__REFRESHSTATEVIEW_OFFSET))(this);
		}

		::System::Void _RefreshStateViewOfColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__REFRESHSTATEVIEWOFCOLOR_OFFSET))(this);
		}

		::System::Void _RefreshStateViewOfFollower()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__REFRESHSTATEVIEWOFFOLLOWER_OFFSET))(this);
		}

		::System::Void SetHighlighted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETHIGHLIGHTED_OFFSET))(this, a1);
		}

		::System::Void SetSource(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETSOURCE_OFFSET))(this, a1);
		}

		::System::Void SetTarget(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void _SetTargetForCurve(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__SETTARGETFORCURVE_OFFSET))(this, a1);
		}

		::System::Void _SetTargetForFollower(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__SETTARGETFORFOLLOWER_OFFSET))(this, a1);
		}

		::System::Void SetDragRegion(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETDRAGREGION_OFFSET))(this, a1);
		}

		::System::Void SetDragFollower(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETDRAGFOLLOWER_OFFSET))(this, a1);
		}

		::System::Void BindDragEventTrigger(::RPG::Client::EventTriggerListener* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EventTriggerListener*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_BINDDRAGEVENTTRIGGER_OFFSET))(this, a1);
		}

		::System::Void UnbindDragEventTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_UNBINDDRAGEVENTTRIGGER_OFFSET))(this);
		}

		::System::Void SetPauseListeningDragEventTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY_SETPAUSELISTENINGDRAGEVENTTRIGGER_OFFSET))(this, a1);
		}

		::System::Void _OnDragEvent(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELDRAGTRAJECTORY__ONDRAGEVENT_OFFSET))(this, a1, a2);
		}
	};
}
