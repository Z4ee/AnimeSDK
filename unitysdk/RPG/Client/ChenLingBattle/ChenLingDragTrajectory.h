#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Curve { class BGCurve; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_FORCEFOLLOW_OFFSET UNITYSDK_OFFSET(0x1B9574B0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1B956490)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETDRAGREGION_OFFSET UNITYSDK_OFFSET(0x1B957540)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1B957590)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETHIGHLIGHTED_OFFSET UNITYSDK_OFFSET(0x1B9569B0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETSOURCE_OFFSET UNITYSDK_OFFSET(0x1B956A30)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1B9565D0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B957600)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9575E0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__FOLLOW_OFFSET UNITYSDK_OFFSET(0x1B956540)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__REFRESHSTATEVIEWOFCOLOR_OFFSET UNITYSDK_OFFSET(0x1B9568C0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__REFRESHSTATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B956870)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__SETTARGETFORCURVE_OFFSET UNITYSDK_OFFSET(0x1B956D30)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingDragTrajectory_TypeDefinitionIndex = 75922;

	class ChenLingDragTrajectory : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__MainColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChenLingDragTrajectory_TypeDefinitionIndex)->GetStaticField(0xDA10);
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

		::System::Void SetHighlighted(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETHIGHLIGHTED_OFFSET))(this, a1);
		}

		::System::Void SetSource(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETSOURCE_OFFSET))(this, a1);
		}

		::System::Void SetTarget(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void ForceFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_FORCEFOLLOW_OFFSET))(this);
		}

		::System::Void _SetTargetForCurve(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY__SETTARGETFORCURVE_OFFSET))(this, a1);
		}

		::System::Void SetDragRegion(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETDRAGREGION_OFFSET))(this, a1);
		}

		::System::Void SetFollowTarget(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGDRAGTRAJECTORY_SETFOLLOWTARGET_OFFSET))(this, a1);
		}
	};
}
