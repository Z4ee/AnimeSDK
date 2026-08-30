#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_35A48B293C0D5CF1.h"
#include "unitysdk/Struct_2_9B0F70AC3183FFF8.h"
#include "unitysdk/Struct_2_B004C4EE67DB9A7D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0471857D35382E2E;
class Class_1_B26E06FC40F846CD;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudHandCardViewModel; }
namespace RPG::Client::FateRin::View::Card { class FateRinCardPosControlView; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class RectTransform; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_CLEARFREECARDHITTARGET_OFFSET UNITYSDK_OFFSET(0xD026790)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_GETENEMYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xD013680)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTCARDS_OFFSET UNITYSDK_OFFSET(0xD0267E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTENEMY_OFFSET UNITYSDK_OFFSET(0xD026B60)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINCANCELAREA_OFFSET UNITYSDK_OFFSET(0xD0280E0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINFREECARDAREA_OFFSET UNITYSDK_OFFSET(0xD028220)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSELECTAREA_OFFSET UNITYSDK_OFFSET(0xD027E70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSWITCHAREA_OFFSET UNITYSDK_OFFSET(0xD028180)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETCARDPOSCOMPS_OFFSET UNITYSDK_OFFSET(0xD026670)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETFREECARDHITTARGET_OFFSET UNITYSDK_OFFSET(0xD026730)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETHANDAREA_OFFSET UNITYSDK_OFFSET(0xD0266C0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETADJACENTTARGETENEMY_OFFSET UNITYSDK_OFFSET(0xD027C70)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETFIRSTTARGETENEMY_OFFSET UNITYSDK_OFFSET(0xD027890)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__CANNAVIGATETOENEMY_OFFSET UNITYSDK_OFFSET(0xD027040)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0xD0265D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__FINDTARGETENEMYNAVIGATIONCANDIDATEINDEX_OFFSET UNITYSDK_OFFSET(0xD027DC0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__GETCURRENTACTIONENTITY_OFFSET UNITYSDK_OFFSET(0xD028340)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISENTITYSTEALTH_OFFSET UNITYSDK_OFFSET(0xD0283D0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINCARDHITAREAS_OFFSET UNITYSDK_OFFSET(0xD0269F0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD027F10)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__RAYCASTTOCOLLIDER_OFFSET UNITYSDK_OFFSET(0xD027200)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__REBUILDTARGETENEMYNAVIGATIONCANDIDATES_OFFSET UNITYSDK_OFFSET(0xD027930)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__SHOULDUSEFREECARDHITRECT_OFFSET UNITYSDK_OFFSET(0xD028300)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__TRYGETENEMYWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xD027640)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinCardHitTestService_TypeDefinitionIndex = 79352;

	class FateRinCardHitTestService : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* _FreeCardHitCard; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* _CardPosComps; // 0x18
		::UnityEngine::RectTransform* _FreeCardHitRect; // 0x20
		::System::Collections::Generic::List_1<::Struct_2_35A48B293C0D5CF1>* _TargetEnemyNavigationCandidates; // 0x28
		::UnityEngine::RectTransform* _SwitchArea; // 0x30
		::UnityEngine::RectTransform* _CancelArea; // 0x38
		::UnityEngine::RectTransform* _PlayArea; // 0x40
		::Class_1_B26E06FC40F846CD* _BattleModel; // 0x48

		::System::Void _ctor(::Class_1_B26E06FC40F846CD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B26E06FC40F846CD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__CTOR_OFFSET))(this, a1);
		}

		::System::Void SetCardPosComps(::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETCARDPOSCOMPS_OFFSET))(this, a1);
		}

		::System::Void SetHandArea(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETHANDAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetFreeCardHitTarget(::UnityEngine::RectTransform* a1, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::RPG::Client::FateRin::Battle::IFateRinBattleHudHandCardViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_SETFREECARDHITTARGET_OFFSET))(this, a1, a2);
		}

		::System::Void ClearFreeCardHitTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_CLEARFREECARDHITTARGET_OFFSET))(this);
		}

		::Struct_2_B004C4EE67DB9A7D HitTestCards(::System::Single a1, ::System::Single a2)
		{
			return ((::Struct_2_B004C4EE67DB9A7D(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTCARDS_OFFSET))(this, a1, a2);
		}

		::Struct_2_9B0F70AC3183FFF8 HitTestEnemy(::System::Single a1, ::System::Single a2)
		{
			return ((::Struct_2_9B0F70AC3183FFF8(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_HITTESTENEMY_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetFirstTargetEnemy(::Struct_2_35A48B293C0D5CF1& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_35A48B293C0D5CF1&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETFIRSTTARGETENEMY_OFFSET))(this, a1);
		}

		::System::Boolean TryGetAdjacentTargetEnemy(::System::UInt32 a1, ::System::Int32 a2, ::Struct_2_35A48B293C0D5CF1& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32, ::Struct_2_35A48B293C0D5CF1&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_TRYGETADJACENTTARGETENEMY_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 GetEnemyWorldPosition(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_GETENEMYWORLDPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean IsInSelectArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSELECTAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInCancelArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINCANCELAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInSwitchArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINSWITCHAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsInFreeCardArea(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE_ISINFREECARDAREA_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsPointInRectTransform(::System::Single a1, ::System::Single a2, ::UnityEngine::RectTransform* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINRECTTRANSFORM_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsPointInCardHitAreas(::System::Single a1, ::System::Single a2, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::FateRin::View::Card::FateRinCardPosControlView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISPOINTINCARDHITAREAS_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean _ShouldUseFreeCardHitRect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__SHOULDUSEFREECARDHITRECT_OFFSET))();
		}

		::System::Void _RebuildTargetEnemyNavigationCandidates()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__REBUILDTARGETENEMYNAVIGATIONCANDIDATES_OFFSET))(this);
		}

		static ::System::Boolean _CanNavigateToEnemy(::Class_1_0471857D35382E2E* a1)
		{
			return ((::System::Boolean(*)(::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__CANNAVIGATETOENEMY_OFFSET))(a1);
		}

		static ::RPG::GameCore::GameEntity* _GetCurrentActionEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__GETCURRENTACTIONENTITY_OFFSET))(a1);
		}

		static ::System::Boolean _TryGetEnemyWorldPosition(::Class_1_0471857D35382E2E* a1, ::UnityEngine::Vector3& a2)
		{
			return ((::System::Boolean(*)(::Class_1_0471857D35382E2E*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__TRYGETENEMYWORLDPOSITION_OFFSET))(a1, a2);
		}

		::System::Int32 _FindTargetEnemyNavigationCandidateIndex(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__FINDTARGETENEMYNAVIGATIONCANDIDATEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean _RaycastToCollider(::UnityEngine::Ray a1, ::UnityEngine::Collider* a2, ::System::Single& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Collider*, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__RAYCASTTOCOLLIDER_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean _IsEntityStealth(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINCARDHITTESTSERVICE__ISENTITYSTEALTH_OFFSET))(a1);
		}
	};
}
