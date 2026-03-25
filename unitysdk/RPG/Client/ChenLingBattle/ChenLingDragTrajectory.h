#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_FORCEFOLLOW_OFFSET UNITYSDK_OFFSET(0x9335D10)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9334E50)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETDRAGREGION_OFFSET UNITYSDK_OFFSET(0x9335DA0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x9335DF0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x9335370)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x93353F0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETTARGET_OFFSET UNITYSDK_OFFSET(0x9334F90)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x9335E60)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x9335E40)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__FOLLOW_OFFSET UNITYSDK_OFFSET(0x9334F00)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__REFRESHSTATEVIEWOFCOLOR_OFFSET UNITYSDK_OFFSET(0x9335280)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__REFRESHSTATEVIEW_OFFSET UNITYSDK_OFFSET(0x9335230)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__SETTARGETFORCURVE_OFFSET UNITYSDK_OFFSET(0x93356A0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingDragTrajectory_TypeDefinitionIndex = 62162;

	class ChenLingDragTrajectory : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__MainColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingDragTrajectory_TypeDefinitionIndex)->GetStaticField(0x12460);
		}
		::BansheeGz::BGSpline::Curve::BGCurve* _Curve; // 0x18
		::UnityEngine::LineRenderer* _LineRenderer; // 0x20
		::UnityEngine::Color _ColorNormal; // 0x28
		::UnityEngine::Color _ColorHighlight; // 0x38
		::UnityEngine::Color _ColorOutOfRange; // 0x48
		::UnityEngine::RectTransform* _DragRegion; // 0x58
		::UnityEngine::RectTransform* _FollowTarget; // 0x60
		::System::Boolean _Paused; // 0x68
		::System::Boolean _IsOutOfRange; // 0x69
		::System::Boolean _IsHighlighted; // 0x6A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__CCTOR_OFFSET))();
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void _Follow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__FOLLOW_OFFSET))(this);
		}

		::System::Void _RefreshStateView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__REFRESHSTATEVIEW_OFFSET))(this);
		}

		::System::Void _RefreshStateViewOfColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__REFRESHSTATEVIEWOFCOLOR_OFFSET))(this);
		}

		::System::Void SetHighlighted(::System::Boolean highlighted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETHIGHLIGHTED_OFFSET))(this, highlighted);
		}

		::System::Void SetSource(::UnityEngine::Vector2 screenPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETSOURCE_OFFSET))(this, screenPoint);
		}

		::System::Void SetTarget(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETTARGET_OFFSET))(this, worldPosition);
		}

		::System::Void ForceFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_FORCEFOLLOW_OFFSET))(this);
		}

		::System::Void _SetTargetForCurve(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__SETTARGETFORCURVE_OFFSET))(this, worldPosition);
		}

		::System::Void SetDragRegion(::UnityEngine::RectTransform* region)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETDRAGREGION_OFFSET))(this, region);
		}

		::System::Void SetFollowTarget(::UnityEngine::RectTransform* followTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETFOLLOWTARGET_OFFSET))(this, followTarget);
		}
	};
}
