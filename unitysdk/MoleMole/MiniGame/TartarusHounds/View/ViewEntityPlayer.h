#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_61.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_62.h"
#include "unitysdk/Enum_3_63CDB6C405C8FD68_2.h"
#include "unitysdk/Enum_3_DB663931210BBC27_53.h"
#include "unitysdk/Enum_3_E2F427213D952B1A.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/HoundPlayerMainStatus.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/View/ViewEntityPlayer_BlinkControlIndex.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

class Class_1_0C791B68CB2A5BF5;
class Class_1_2CDF619C23140440;
class Class_1_396C26AC372B9A31;
class Class_1_6AB6CE0C19128B5E;
class Class_1_A385B9C862E25641;
class Class_1_E13183B148E560DC;
class Class_2_D1970C03380B1430;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class PLayerSheetConfig; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityGame; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewPlayerShadowManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACHCOMP_OFFSET UNITYSDK_OFFSET(0x161F8320)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACH_OFFSET UNITYSDK_OFFSET(0x161F8280)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BASETICK_OFFSET UNITYSDK_OFFSET(0x161FACF0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BLINKADDLIFE_OFFSET UNITYSDK_OFFSET(0x161FC3F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHANGETOLIST_OFFSET UNITYSDK_OFFSET(0x161F92B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKBUFFCHANGE_OFFSET UNITYSDK_OFFSET(0x161FA7B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKPROPERTYCHANGE_OFFSET UNITYSDK_OFFSET(0x161FA240)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARPLAYERBLINK_OFFSET UNITYSDK_OFFSET(0x161F8100)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARSTATE_OFFSET UNITYSDK_OFFSET(0x161F93C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSESHADOW_OFFSET UNITYSDK_OFFSET(0x161F8C70)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSEWOOLBLINK_OFFSET UNITYSDK_OFFSET(0x161FC180)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DEALAFTERATTACK_OFFSET UNITYSDK_OFFSET(0x161FB730)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DOINIT_OFFSET UNITYSDK_OFFSET(0x161F76F0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_GET_ISPLAYATTACKING_OFFSET UNITYSDK_OFFSET(0x161F9260)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_HANDLERLOWHPANIMATION_OFFSET UNITYSDK_OFFSET(0x161FC390)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_INITSHEETANIM_OFFSET UNITYSDK_OFFSET(0x161F83B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONATTACKFINISHED_OFFSET UNITYSDK_OFFSET(0x161FBB20)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x161FBD30)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFAKEJUMPFINISHED_OFFSET UNITYSDK_OFFSET(0x161FBBA0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLLANDINGFINISHED_OFFSET UNITYSDK_OFFSET(0x161FBCB0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLSLIPFINISHED_OFFSET UNITYSDK_OFFSET(0x161FBC20)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONRESET_OFFSET UNITYSDK_OFFSET(0x161F80B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTEXSHEETANIMEND_OFFSET UNITYSDK_OFFSET(0x161F8CD0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTIMESCALECHANGE_OFFSET UNITYSDK_OFFSET(0x161FC4B0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x161F96E0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_OPENSHADOW_OFFSET UNITYSDK_OFFSET(0x161F8C00)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_1_OFFSET UNITYSDK_OFFSET(0x161F8870)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_OFFSET UNITYSDK_OFFSET(0x161F8E70)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIM_OFFSET UNITYSDK_OFFSET(0x161F8EE0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYBASICMOVE_OFFSET UNITYSDK_OFFSET(0x161FAA60)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYCURRENTSHEET_OFFSET UNITYSDK_OFFSET(0x161F8D60)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYPLAYERBLINK_OFFSET UNITYSDK_OFFSET(0x161FB160)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYSOUND_OFFSET UNITYSDK_OFFSET(0x161F9110)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETBLINKPARAMBYINDEX_OFFSET UNITYSDK_OFFSET(0x161FC1D0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETVIEWENTITYGAME_OFFSET UNITYSDK_OFFSET(0x161F8200)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SHOULDPLAYFALL_OFFSET UNITYSDK_OFFSET(0x161FBA80)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SIMULATEPVPSWITCHPOS_OFFSET UNITYSDK_OFFSET(0x161F9410)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_STOPPLAYERBLINK_OFFSET UNITYSDK_OFFSET(0x161FB390)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SYNCTIMESCALEWITHSPEED_OFFSET UNITYSDK_OFFSET(0x161F7F30)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TICKTIMESCALECHANGE_OFFSET UNITYSDK_OFFSET(0x161FA1C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRIGGERSTRUGGLE_OFFSET UNITYSDK_OFFSET(0x161FC450)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRYPLAYREADYSTOPINVINCIBLE_OFFSET UNITYSDK_OFFSET(0x161FC0D0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATECLIMBSTATUS_OFFSET UNITYSDK_OFFSET(0x161FB880)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDIVINGSHADOWSTATUS_OFFSET UNITYSDK_OFFSET(0x161FB610)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDYINGANIM_OFFSET UNITYSDK_OFFSET(0x161FA9D0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEINJUREDSTATUS_OFFSET UNITYSDK_OFFSET(0x161FAE90)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x161FC540)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__ONCHANGE_B__93_0_OFFSET UNITYSDK_OFFSET(0x161FC670)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewEntityPlayer_TypeDefinitionIndex = 84589;

	class ViewEntityPlayer : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::MoleMole::MiniGame::TartarusHounds::View::PLayerSheetConfig* settingConfigRef; // 0x58
		::System::Boolean isSelf; // 0x60
		::UnityEngine::Animator* _animator; // 0x68
		::Class_1_396C26AC372B9A31* _logicPlayer; // 0x70
		::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* _viewEntityGame; // 0x78
		::Class_1_6AB6CE0C19128B5E* gameParam; // 0x80
		::System::Single deltaX; // 0x88
		::Class_1_E13183B148E560DC* textSheetUpdater; // 0x90
		::UnityEngine::SpriteRenderer* spriteRenderer; // 0x98
		::MoleMole::MiniGame::TartarusHounds::View::ViewPlayerShadowManager* shadowManager; // 0xA0
		::UnityEngine::Animation* woolAnimationComp; // 0xA8
		::System::Int32 curSheetListIndex; // 0xB0
		::System::Collections::Generic::List_1<::System::String*>* curSheetStatusList; // 0xB8
		::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus curSheetStatus; // 0xC0
		::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus nextStatus; // 0xC4
		::Class_2_D1970C03380B1430* playerBlinkControlStack; // 0xC8
		::System::Single timeScale; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* shadowGos; // 0xD8
		::UnityEngine::GameObject* playerFollowAnimationNode; // 0xE0
		::UnityEngine::GameObject* playerBgAnimationNode; // 0xE8
		::UnityEngine::SpriteRenderer* playerFollowAnimSpriteRender; // 0xF0
		::UnityEngine::SpriteRenderer* playerBgAnimSpriteRender; // 0xF8
		::MoleMole::TextureSheetData* curTextureSheetData; // 0x100
		::UnityEngine::GameObject* playerRespawnAnimationNode; // 0x108
		::UnityEngine::SpriteRenderer* playerRespawnAnimSpriteRender; // 0x110
		::System::Single invicibleOutAnimTime; // 0x118
		::UnityEngine::GameObject* invincibleNode; // 0x120
		::Class_1_2CDF619C23140440* aiDataComp; // 0x128
		::Class_1_2CDF619C23140440* dataComp; // 0x130
		::Class_1_A385B9C862E25641* playerFollowAnimCtr; // 0x138
		::Class_1_A385B9C862E25641* playerRespawnAnimCtr; // 0x140
		::Class_1_A385B9C862E25641* playerBgAnimCtr; // 0x148
		::System::Boolean isValid; // 0x150
		::System::Action* TexSheetAnimEndAction; // 0x158
		::System::UInt32 movingSoundPendingID; // 0x160
		::MoleMole::MiniGame::TartarusHounds::Direction lastFacing; // 0x164
		::System::Boolean lastMoving; // 0x168
		::Enum_3_0A3761FE34514D6C_61 lastLifeStatus; // 0x16C
		::Enum_3_0A3761FE34514D6C_62 lastInjuredStatus; // 0x170
		::Enum_3_DB663931210BBC27_53 divingStatus; // 0x174
		::System::Boolean lastShowDivingShadow; // 0x178
		::Enum_3_E2F427213D952B1A lastClimbStatus; // 0x17C
		::System::Single deathWaitTime; // 0x180
		::System::Single deathWaitMaxTime; // 0x184
		::System::Int32 lastHp; // 0x188
		::System::Int32 lastLife; // 0x18C
		::System::Int64 lastScore; // 0x190
		::System::Int32 lastDepth; // 0x198
		::System::Boolean lastIsFalling; // 0x19C
		::System::Boolean lastIsPlayFall; // 0x19D
		::System::Boolean lastInSquashOut; // 0x19E
		::System::Boolean lastIsSwitchFall; // 0x19F
		::System::Boolean lastIsDisplayInvincible; // 0x1A0
		::System::Collections::Generic::Dictionary_2<::Enum_3_63CDB6C405C8FD68_2, ::System::Boolean>* lastBuffDict; // 0x1A8
		::System::Boolean hasPVPSimulateReachBottom; // 0x1B0
		::System::Single playingDyingAnimCD; // 0x1B4
		::System::Boolean isPlayingInvincible; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__CTOR_OFFSET))(this);
		}

		::System::Void DoInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DOINIT_OFFSET))(this);
		}

		::System::Void OnReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONRESET_OFFSET))(this);
		}

		::System::Void SetViewEntityGame(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame* viewEntityGame)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityGame*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETVIEWENTITYGAME_OFFSET))(this, viewEntityGame);
		}

		::System::Void Attach(::Class_1_396C26AC372B9A31* logicPlayer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_396C26AC372B9A31*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACH_OFFSET))(this, logicPlayer);
		}

		::System::Void AttachComp(::Class_1_2CDF619C23140440* myComp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2CDF619C23140440*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ATTACHCOMP_OFFSET))(this, myComp);
		}

		::System::Void InitSheetAnim(::Class_1_0C791B68CB2A5BF5* resourceProxy)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0C791B68CB2A5BF5*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_INITSHEETANIM_OFFSET))(this, resourceProxy);
		}

		::System::Void OpenShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_OPENSHADOW_OFFSET))(this);
		}

		::System::Void CloseShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSESHADOW_OFFSET))(this);
		}

		::System::Void OnTexSheetAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTEXSHEETANIMEND_OFFSET))(this);
		}

		::System::Void PlayCurrentSheet(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYCURRENTSHEET_OFFSET))(this, force);
		}

		::System::Void PlayAnimState(::System::String* animStateName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_OFFSET))(this, animStateName);
		}

		::System::Void PlayAnim(::MoleMole::TextureSheetData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIM_OFFSET))(this, data);
		}

		::System::UInt32 PlaySound(::System::Int32 id)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYSOUND_OFFSET))(this, id);
		}

		::System::Boolean get_IsPlayAttacking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_GET_ISPLAYATTACKING_OFFSET))(this);
		}

		::System::Boolean PlayAnimState_1(::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus status)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::HoundPlayerMainStatus))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYANIMSTATE_1_OFFSET))(this, status);
		}

		::System::Void ChangeToList(::System::Collections::Generic::List_1<::System::String*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHANGETOLIST_OFFSET))(this, list);
		}

		::System::Void ClearState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARSTATE_OFFSET))(this);
		}

		::System::Void SimulatePVPSwitchPos(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SIMULATEPVPSWITCHPOS_OFFSET))(this, dt);
		}

		::System::Void OnUpdate(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONUPDATE_OFFSET))(this, dt);
		}

		::System::Void DealAfterAttack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_DEALAFTERATTACK_OFFSET))(this);
		}

		::System::Void OnAttackFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONATTACKFINISHED_OFFSET))(this);
		}

		::System::Void BaseTick(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BASETICK_OFFSET))(this, dt);
		}

		::System::Void UpdateDivingShadowStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDIVINGSHADOWSTATUS_OFFSET))(this);
		}

		::System::Void UpdateDyingAnim(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEDYINGANIM_OFFSET))(this, dt);
		}

		::System::Boolean UpdateInjuredStatus(::System::Boolean result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATEINJUREDSTATUS_OFFSET))(this, result);
		}

		::System::Boolean ShouldPlayFall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SHOULDPLAYFALL_OFFSET))(this);
		}

		::System::Void OnFakeJumpFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFAKEJUMPFINISHED_OFFSET))(this);
		}

		::System::Void OnFallSlipFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLSLIPFINISHED_OFFSET))(this);
		}

		::System::Void OnFallLandingFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONFALLLANDINGFINISHED_OFFSET))(this);
		}

		::System::Boolean UpdateClimbStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_UPDATECLIMBSTATUS_OFFSET))(this);
		}

		::System::Boolean PlayBasicMove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYBASICMOVE_OFFSET))(this);
		}

		::System::Void CheckPropertyChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKPROPERTYCHANGE_OFFSET))(this);
		}

		::System::Void CheckBuffChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CHECKBUFFCHANGE_OFFSET))(this);
		}

		::System::Void CloseWoolBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLOSEWOOLBLINK_OFFSET))(this);
		}

		::System::Void OnChange(::Enum_3_63CDB6C405C8FD68_2 buffType, ::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63CDB6C405C8FD68_2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONCHANGE_OFFSET))(this, buffType, val);
		}

		::System::Void TryPlayReadyStopInvincible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRYPLAYREADYSTOPINVINCIBLE_OFFSET))(this);
		}

		::System::Void PlayPlayerBlink(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex controlIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_PLAYPLAYERBLINK_OFFSET))(this, controlIndex);
		}

		::System::Void StopPlayerBlink(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex controlIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_STOPPLAYERBLINK_OFFSET))(this, controlIndex);
		}

		::System::Void ClearPlayerBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_CLEARPLAYERBLINK_OFFSET))(this);
		}

		::System::Void HandlerLowHpAnimation(::System::Boolean isPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_HANDLERLOWHPANIMATION_OFFSET))(this, isPlay);
		}

		::System::Void BlinkAddLife(::System::Boolean isPlay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_BLINKADDLIFE_OFFSET))(this, isPlay);
		}

		::System::Void SetBlinkParamByIndex(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex index)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer_BlinkControlIndex))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SETBLINKPARAMBYINDEX_OFFSET))(this, index);
		}

		::System::Void TriggerStruggle(::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TRIGGERSTRUGGLE_OFFSET))(this, stop);
		}

		::System::Void SyncTimeScaleWithSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_SYNCTIMESCALEWITHSPEED_OFFSET))(this);
		}

		::System::Void TickTimeScaleChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_TICKTIMESCALECHANGE_OFFSET))(this);
		}

		::System::Void OnTimeScaleChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER_ONTIMESCALECHANGE_OFFSET))(this);
		}

		::System::Void _OnChange_b__93_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWENTITYPLAYER__ONCHANGE_B__93_0_OFFSET))(this);
		}
	};
}
