#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UINPCWarningTipsContainer_WaypointStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class UINPCWarningTipsContainer; }
namespace RPG::GameCore { class BillboardComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERATTACKING_OFFSET UNITYSDK_OFFSET(0xA7111F0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERDANGER_OFFSET UNITYSDK_OFFSET(0xA710300)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERGUARDING_OFFSET UNITYSDK_OFFSET(0xA710140)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERSAFE_OFFSET UNITYSDK_OFFSET(0xA7104C0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_GIVEBACK_OFFSET UNITYSDK_OFFSET(0xA710940)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA711500)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_LEAVEATTACKING_OFFSET UNITYSDK_OFFSET(0xA711320)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_TICK_OFFSET UNITYSDK_OFFSET(0xA70F1E0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xA711560)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__ISFORCEHIDE_OFFSET UNITYSDK_OFFSET(0xA7113B0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__ISHIDEWARNINGTIP_OFFSET UNITYSDK_OFFSET(0xA711440)

namespace RPG::Client
{
	inline static constexpr unsigned int UINPCWarningTipsContainer_Waypoint_TypeDefinitionIndex = 56464;

	class UINPCWarningTipsContainer_Waypoint : public ::System::Object
	{
	public:
		// static const ::System::String* NORMAL_ANIM; // 0x0
		// static const ::System::String* ATTACK_HINT; // 0x0
		// static const ::System::String* ALERT_ANIM; // 0x0
		// static const ::System::String* WARNING_ANIM; // 0x0
		::System::String* _NowAnimName; // 0x10
		::UnityEngine::RectTransform* WaypointRect; // 0x18
		::UnityEngine::UI::Image* SmoothMaskProgress; // 0x20
		::RPG::GameCore::BillboardComponent* BillboardCmpt; // 0x28
		::RPG::Client::UINPCWarningTipsContainer* OwnerContainer; // 0x30
		::RPG::GameCore::NPCComponent* NpcComponent; // 0x38
		::UnityEngine::Animation* AnimationCmpt; // 0x40
		::UnityEngine::RectTransform* WayPointArrow; // 0x48
		::UnityEngine::GameObject* TargetGO; // 0x50
		::UnityEngine::UI::Image* ArrowImage; // 0x58
		::UnityEngine::RectTransform* EffectRect; // 0x60
		::UnityEngine::RectTransform* ProgressRect; // 0x68
		::UnityEngine::RectTransform* WarningRect; // 0x70
		::RPG::GameCore::GameEntity* TargetEntity; // 0x78
		::UnityEngine::GameObject* UnityGO; // 0x80
		::System::String* PrefabPath; // 0x88
		::RPG::Client::UINPCWarningTipsContainer_WaypointStatus Status; // 0x90
		::RPG::Client::UINPCWarningTipsContainer_WaypointStatus _FromStatus; // 0x94
		::System::Single AlertValue; // 0x98
		::System::Boolean IsMonsterAttack; // 0x9C
		::System::Int32 pre_is_value_up; // 0xA0
		::System::Single pre_alert_value; // 0xA4
		::UnityEngine::Vector3 Offset; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__CTOR_OFFSET))(this);
		}

		::System::Void GiveBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_GIVEBACK_OFFSET))(this);
		}

		::System::Void EnterSafe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERSAFE_OFFSET))(this);
		}

		::System::Void EnterGuarding(::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERGUARDING_OFFSET))(this, animTime);
		}

		::System::Void EnterDanger(::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERDANGER_OFFSET))(this, animTime);
		}

		::System::Void EnterAttacking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERATTACKING_OFFSET))(this);
		}

		::System::Void LeaveAttacking()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_LEAVEATTACKING_OFFSET))(this);
		}

		::System::Boolean _IsForceHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__ISFORCEHIDE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single minFindThreshold, ::System::Single maxFindThreshold, ::System::Single curAlertValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_TICK_OFFSET))(this, minFindThreshold, maxFindThreshold, curAlertValue);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean _IsHideWarningTip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__ISHIDEWARNINGTIP_OFFSET))(this);
		}
	};
}
