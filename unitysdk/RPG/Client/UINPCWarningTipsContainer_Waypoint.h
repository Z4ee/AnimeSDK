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

#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERATTACKING_OFFSET UNITYSDK_OFFSET(0xCB75AD0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERDANGER_OFFSET UNITYSDK_OFFSET(0xCB74BD0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERGUARDING_OFFSET UNITYSDK_OFFSET(0xCB74A00)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERSAFE_OFFSET UNITYSDK_OFFSET(0xCB74D90)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_GIVEBACK_OFFSET UNITYSDK_OFFSET(0xCB75260)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xCB75DE0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_LEAVEATTACKING_OFFSET UNITYSDK_OFFSET(0xCB75C00)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_TICK_OFFSET UNITYSDK_OFFSET(0xCB73830)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xCB75E30)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__ISFORCEHIDE_OFFSET UNITYSDK_OFFSET(0xCB75C90)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT__ISHIDEWARNINGTIP_OFFSET UNITYSDK_OFFSET(0xCB75D20)

namespace RPG::Client
{
	inline static constexpr unsigned int UINPCWarningTipsContainer_Waypoint_TypeDefinitionIndex = 64629;

	class UINPCWarningTipsContainer_Waypoint : public ::System::Object
	{
	public:
		// static const ::System::String* NORMAL_ANIM; // 0x0
		// static const ::System::String* ATTACK_HINT; // 0x0
		// static const ::System::String* ALERT_ANIM; // 0x0
		// static const ::System::String* WARNING_ANIM; // 0x0
		::UnityEngine::Animation* AnimationCmpt; // 0x10
		::RPG::Client::UINPCWarningTipsContainer* OwnerContainer; // 0x18
		::UnityEngine::RectTransform* WayPointArrow; // 0x20
		::UnityEngine::UI::Image* SmoothMaskProgress; // 0x28
		::RPG::GameCore::NPCComponent* NpcComponent; // 0x30
		::UnityEngine::RectTransform* ProgressRect; // 0x38
		::UnityEngine::GameObject* TargetGO; // 0x40
		::System::String* _NowAnimName; // 0x48
		::RPG::GameCore::GameEntity* TargetEntity; // 0x50
		::UnityEngine::GameObject* UnityGO; // 0x58
		::UnityEngine::UI::Image* ArrowImage; // 0x60
		::System::String* PrefabPath; // 0x68
		::RPG::GameCore::BillboardComponent* BillboardCmpt; // 0x70
		::UnityEngine::RectTransform* EffectRect; // 0x78
		::UnityEngine::RectTransform* WarningRect; // 0x80
		::UnityEngine::RectTransform* WaypointRect; // 0x88
		::RPG::Client::UINPCWarningTipsContainer_WaypointStatus _FromStatus; // 0x90
		::RPG::Client::UINPCWarningTipsContainer_WaypointStatus Status; // 0x94
		::System::Single pre_alert_value; // 0x98
		::System::Int32 pre_is_value_up; // 0x9C
		::System::Single AlertValue; // 0xA0
		::System::Boolean IsMonsterAttack; // 0xA4
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

		::System::Void EnterGuarding(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERGUARDING_OFFSET))(this, a1);
		}

		::System::Void EnterDanger(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_ENTERDANGER_OFFSET))(this, a1);
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

		::System::Void Tick(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINT_TICK_OFFSET))(this, a1, a2, a3);
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
