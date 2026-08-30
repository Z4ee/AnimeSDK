#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class LoopGenerator; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::Client::LittleGame::PixAir { class PixAirPlaneView; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_BINDENEMYPLANE_OFFSET UNITYSDK_OFFSET(0xD54A900)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_BINDPLAYERPLANE_OFFSET UNITYSDK_OFFSET(0xD54A3C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_GET_ENEMYPLANEFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xD54D180)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_INITFORLOADING_OFFSET UNITYSDK_OFFSET(0xD54BC60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xD54BF30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_LOADBATTLEFIELD_OFFSET UNITYSDK_OFFSET(0xD54C1C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_REBINDTRACK_OFFSET UNITYSDK_OFFSET(0xD54C210)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0xD54D0B0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_SET_ENEMYPLANEFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xD54D190)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERENDINGANIM_OFFSET UNITYSDK_OFFSET(0xD54CD30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERLOADINGANIM_OFFSET UNITYSDK_OFFSET(0xD54BEB0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERRESULTANIM_OFFSET UNITYSDK_OFFSET(0xD54D000)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERSLOWLOSEANIM_OFFSET UNITYSDK_OFFSET(0xD54CC80)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERSLOWWINANIM_OFFSET UNITYSDK_OFFSET(0xD54CA40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD54C870)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD54D1A0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirLevelController_TypeDefinitionIndex = 76852;

	class PixAirLevelController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* VirtualCamera; // 0x18
		::UnityEngine::Transform* PlayerPlaneAnchor; // 0x20
		::UnityEngine::Transform* EnemyPlaneAnchor; // 0x28
		::UnityEngine::Transform* ResultPlaneAnchor; // 0x30
		::RPG::Client::LoopGenerator* BattleFieldGenerator; // 0x38
		::System::Boolean _IsBattleFieldLoaded; // 0x40
		::UnityEngine::Animator* BattleFieldAnimator; // 0x48
		::System::Single PlaneTurnIntervalMin; // 0x50
		::System::Single PlaneTurnIntervalMax; // 0x54
		::UnityEngine::Playables::PlayableDirector* TimeLineDirector; // 0x58
		::RPG::Client::UIFollow3DTarget* _EnemyPlaneFollowTarget_k__BackingField; // 0x60
		::UnityEngine::Animator* _PlayerPlaneAnimator; // 0x68
		::UnityEngine::Animator* _EnemyPlaneAnimator; // 0x70
		::RPG::Client::LittleGame::PixAir::PixAirPlaneView* _PlayerPlaneView; // 0x78
		::RPG::Client::LittleGame::PixAir::PixAirPlaneView* _EnemyPlaneView; // 0x80
		::System::Single _NextPlaneTurnTime; // 0x88
		::System::Int32 _PlaneTurnTriggerIndex; // 0x8C
		::Il2CppArray<::System::String*>* _PlaneTurnTriggers; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitForLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_INITFORLOADING_OFFSET))(this);
		}

		::System::Void TriggerLoadingAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERLOADINGANIM_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_INIT_OFFSET))(this);
		}

		::System::Void LoadBattleField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_LOADBATTLEFIELD_OFFSET))(this);
		}

		::System::Boolean RebindTrack(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_REBINDTRACK_OFFSET))(this, a1, a2);
		}

		::System::Void BindPlayerPlane(::RPG::Client::LittleGame::PixAir::PixAirPlaneView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_BINDPLAYERPLANE_OFFSET))(this, a1);
		}

		::System::Void BindEnemyPlane(::RPG::Client::LittleGame::PixAir::PixAirPlaneView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::PixAir::PixAirPlaneView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_BINDENEMYPLANE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void TriggerSlowWinAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERSLOWWINANIM_OFFSET))(this);
		}

		::System::Void TriggerSlowLoseAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERSLOWLOSEANIM_OFFSET))(this);
		}

		::System::Void TriggerEndingAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERENDINGANIM_OFFSET))(this, a1);
		}

		::System::Void TriggerResultAnim(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_TRIGGERRESULTANIM_OFFSET))(this, a1);
		}

		::System::Void SetTimeScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_SETTIMESCALE_OFFSET))(this, a1);
		}

		::RPG::Client::UIFollow3DTarget* get_EnemyPlaneFollowTarget()
		{
			return ((::RPG::Client::UIFollow3DTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_GET_ENEMYPLANEFOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_EnemyPlaneFollowTarget(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLEVELCONTROLLER_SET_ENEMYPLANEFOLLOWTARGET_OFFSET))(this, a1);
		}
	};
}
