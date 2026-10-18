#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingGameplaySpeedPanelControl_SpeedBarGear.h"
#include "unitysdk/RPG/GameCore/RoadRashGameModifier_PlayerUltimateQTEWindow.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_14648D14C0C46618;
class Class_1_A4088D9A55CD220E;
class Class_1_D2BE74FB4F4086CC;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::B51Racing { class B51RacingGamePlayUltimateQTEView; }
namespace RPG::Client::B51Racing { class B51RacingHudSpeedBarView; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Slider; }

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC79C760)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xC79CE70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__APPLYPENDINGSPEEDPANELSTATEREFRESH_OFFSET UNITYSDK_OFFSET(0xC79D360)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__BUILDDISPLAYSPEEDVALUE_OFFSET UNITYSDK_OFFSET(0xC79CD20)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CALCULATEULTIMATEQTEVISUALRANGE_OFFSET UNITYSDK_OFFSET(0xC79CD90)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CANCELSPEEDBARTRANSITION_OFFSET UNITYSDK_OFFSET(0xC79ECD0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__COMPLETESPEEDBARTRANSITION_OFFSET UNITYSDK_OFFSET(0xC79F800)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xC7A03C0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETHUDSERVICE_OFFSET UNITYSDK_OFFSET(0xC79C8D0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETNORMALSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0xC79CC90)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARGEAR_OFFSET UNITYSDK_OFFSET(0xC79ED40)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0xC79EE30)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARTRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0xC79F3F0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__HIDEULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0xC79EC60)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__INTERPOLATESPEEDBARPROGRESSASYNC_OFFSET UNITYSDK_OFFSET(0xC79F700)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC7A0180)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC7A0300)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC79FFC0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONLOGICREADY_OFFSET UNITYSDK_OFFSET(0xC79E760)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONPLAYERULTIMATEDURATIONEND_OFFSET UNITYSDK_OFFSET(0xC79E4E0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONPLAYERULTIMATESTART_OFFSET UNITYSDK_OFFSET(0xC79E310)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONSPEEDCHANGE_OFFSET UNITYSDK_OFFSET(0xC79D900)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATECASTABLECHANGED_OFFSET UNITYSDK_OFFSET(0xC79DFD0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATECHARGECHANGE_OFFSET UNITYSDK_OFFSET(0xC79DE10)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATEQTERESULT_OFFSET UNITYSDK_OFFSET(0xC79EA70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATEQTESTART_OFFSET UNITYSDK_OFFSET(0xC79E050)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYENERGYBARANIMATION_OFFSET UNITYSDK_OFFSET(0xC79FA80)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYULTIMATEQTEFILLSTATE_OFFSET UNITYSDK_OFFSET(0xC79FE10)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYULTIMATEQTERESULTSTATE_OFFSET UNITYSDK_OFFSET(0xC79EB70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDBARGEAR_OFFSET UNITYSDK_OFFSET(0xC79E680)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDBAR_OFFSET UNITYSDK_OFFSET(0xC79DB80)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDPANELSTATE_OFFSET UNITYSDK_OFFSET(0xC79CBA0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDTEXT_OFFSET UNITYSDK_OFFSET(0xC79D9D0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEED_OFFSET UNITYSDK_OFFSET(0xC79C920)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATEARROWHANDLE_OFFSET UNITYSDK_OFFSET(0xC79E7D0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATECHARGE_OFFSET UNITYSDK_OFFSET(0xC79CA60)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0xC79FB70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REGISTERNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC79D3C0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REQUESTSPEEDPANELSTATEREFRESH_OFFSET UNITYSDK_OFFSET(0xC79DF80)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__RESUMENORMALSPEEDBARREFRESH_OFFSET UNITYSDK_OFFSET(0xC79F520)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0xC79F0D0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETSPEEDPANELSTATE_OFFSET UNITYSDK_OFFSET(0xC79F8F0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETULTIMATEQTEFILLBACKBGVISIBLE_OFFSET UNITYSDK_OFFSET(0xC79E570)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETULTIMATEQTEFILLVISIBLE_OFFSET UNITYSDK_OFFSET(0xC79FD00)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SHOWULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0xC79E0E0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TICKULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0xC79D160)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRANSITIONSPEEDBARTOGEARASYNC_OFFSET UNITYSDK_OFFSET(0xC79E440)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYBEGINSPEEDBARTRANSITION_OFFSET UNITYSDK_OFFSET(0xC79F160)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYREGISTERUISHOWADAPTER_OFFSET UNITYSDK_OFFSET(0xC79FE80)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYRESOLVESERVICES_OFFSET UNITYSDK_OFFSET(0xC79CF80)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__UNREGISTERNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC79D660)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRYREGISTERUISHOWADAPTER_B__45_0_OFFSET UNITYSDK_OFFSET(0xC7A03F0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplaySpeedPanelControl_TypeDefinitionIndex = 81897;

	class B51RacingGameplaySpeedPanelControl : public ::Sofa::BaseSofaControl
	{
	public:
		// static const ::System::Single _SpeedDialFillMin; // 0x0
		// static const ::System::Single _SpeedDialFillMax; // 0x0
		// static const ::System::Single _SpeedBarNormalMaxProgress; // 0x0
		// static const ::System::Single _SpeedBarSpeedUpProgress; // 0x0
		// static const ::System::Single _SpeedBarUltimateProgress; // 0x0
		// static const ::System::Int32 _UltimateSKillBarSliderMaxValue = 0x3C; // 0x0
		// static const ::System::String* _SpeedPanelStateFast; // 0x0
		// static const ::System::String* _SpeedPanelStateNormal; // 0x0
		// static const ::System::String* _UltimateQteFillStateNormal; // 0x0
		// static const ::System::String* _UltimateQteFillStateSuccess; // 0x0
		// static const ::System::String* _UltimateQteFillStateFail; // 0x0
		// static const ::System::Single _UltimateQteResultStateDuration; // 0x0
		// static const ::System::Single _MetersPerSecondToKilometersPerHour; // 0x0
		// static const ::System::Single _ArrowHandleSliderMin; // 0x0
		// static const ::System::Single _ArrowHandleSliderMax; // 0x0
		// static const ::System::String* _EnergyBarFadeInClip; // 0x0
		// static const ::System::String* _EnergyBarFadeOutClip; // 0x0
		::RPG::Client::LocalizedText* _SpeedNum01Text; // 0x40
		::RPG::Client::LocalizedText* _SpeedNum02Text; // 0x48
		::RPG::Client::LocalizedText* _SpeedNum03Text; // 0x50
		::UnityEngine::UI::Slider* _UltimateSkillBarSlider; // 0x58
		::UnityEngine::UI::Slider* _UltimateArrowHandleSlider; // 0x60
		::RPG::Client::B51Racing::B51RacingGamePlayUltimateQTEView* _UltimateQteFill; // 0x68
		::RPG::Client::B51Racing::B51RacingGamePlayUltimateQTEView* _UltimateQteFillBackBg; // 0x70
		::RPG::Client::UIStateCtrl* _UltimateQteFillStateCtrl; // 0x78
		::RPG::Client::B51Racing::B51RacingHudSpeedBarView* _SpeedBarView; // 0x80
		::UnityEngine::Animation* _EnergyBarAnimation; // 0x88
		::RPG::Client::UIStateCtrl* _SpeedPanelStateCtrl; // 0x90
		::Class_1_A4088D9A55CD220E* _HudService; // 0x98
		::Class_1_D2BE74FB4F4086CC* _UIShowService; // 0xA0
		::Class_1_14648D14C0C46618* _ShowAdapter; // 0xA8
		::System::Threading::CancellationTokenSource* _SpeedBarTransitionCts; // 0xB0
		::System::String* _CurrentSpeedState; // 0xB8
		::System::Boolean _PendingSpeedPanelStateRefresh; // 0xC0
		::System::Boolean _IsSpeedBarTransitioning; // 0xC1
		::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear _CurrentSpeedBarGear; // 0xC4
		::System::Single _CurrentSpeedBarProgress; // 0xC8
		::System::Boolean _IsUltimateQteFillVisible; // 0xCC
		::System::Boolean _IsUltimateQteResultStatePlaying; // 0xCD
		::System::Single _UltimateQteFillRemainSeconds; // 0xD0
		::System::Single _UltimateQteResultStateRemainSeconds; // 0xD4
		::System::Single _UltimateQteInitialVisualEnd; // 0xD8
		::System::Single _UltimateQteInitialVisualDuration; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL_SETUPVIEW_OFFSET))(this);
		}

		static ::System::Single _GetNormalSpeedBarProgress(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETNORMALSPEEDBARPROGRESS_OFFSET))(a1, a2);
		}

		static ::System::Int32 _BuildDisplaySpeedValue(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__BUILDDISPLAYSPEEDVALUE_OFFSET))(a1);
		}

		static ::System::Void _CalculateUltimateQteVisualRange(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CALCULATEULTIMATEQTEVISUALRANGE_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void _RegisterNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REGISTERNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _UnregisterNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__UNREGISTERNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnSpeedChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONSPEEDCHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnUltimateChargeChange(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATECHARGECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnUltimateCastableChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATECASTABLECHANGED_OFFSET))(this, a1);
		}

		::System::Void _OnUltimateQteStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATEQTESTART_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerUltimateStart(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONPLAYERULTIMATESTART_OFFSET))(this, a1);
		}

		::System::Void _OnPlayerUltimateDurationEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONPLAYERULTIMATEDURATIONEND_OFFSET))(this, a1);
		}

		::System::Void _OnLogicReady(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONLOGICREADY_OFFSET))(this, a1);
		}

		::System::Void _RefreshUltimateArrowHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATEARROWHANDLE_OFFSET))(this);
		}

		::System::Void _OnUltimateQteResult(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATEQTERESULT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSpeed(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RefreshSpeedText(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDTEXT_OFFSET))(this, a1);
		}

		::System::Void _RefreshSpeedBar(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDBAR_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshSpeedBarGear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDBARGEAR_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear _GetSpeedBarGear()
		{
			return ((::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARGEAR_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask _TransitionSpeedBarToGearAsync(::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear a1)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRANSITIONSPEEDBARTOGEARASYNC_OFFSET))(this, a1);
		}

		::System::Boolean _TryBeginSpeedBarTransition(::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear a1, ::System::Single& a2, ::System::Single& a3, ::System::Threading::CancellationTokenSource*& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear, ::System::Single&, ::System::Single&, ::System::Threading::CancellationTokenSource*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYBEGINSPEEDBARTRANSITION_OFFSET))(this, a1, a2, a3, a4);
		}

		::Cysharp::Threading::Tasks::UniTask _InterpolateSpeedBarProgressAsync(::System::Single a1, ::System::Single a2, ::System::Threading::CancellationTokenSource* a3)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Single, ::System::Single, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__INTERPOLATESPEEDBARPROGRESSASYNC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CompleteSpeedBarTransition(::System::Threading::CancellationTokenSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::CancellationTokenSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__COMPLETESPEEDBARTRANSITION_OFFSET))(this, a1);
		}

		::System::Void _CancelSpeedBarTransition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CANCELSPEEDBARTRANSITION_OFFSET))(this);
		}

		::System::Void _SetSpeedBarProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETSPEEDBARPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _ResumeNormalSpeedBarRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__RESUMENORMALSPEEDBARREFRESH_OFFSET))(this);
		}

		::System::Single _GetSpeedBarProgress(::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARPROGRESS_OFFSET))(this, a1, a2, a3);
		}

		::System::Single _GetSpeedBarTransitionDuration(::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARTRANSITIONDURATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _RequestSpeedPanelStateRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REQUESTSPEEDPANELSTATEREFRESH_OFFSET))(this);
		}

		::System::Void _ApplyPendingSpeedPanelStateRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__APPLYPENDINGSPEEDPANELSTATEREFRESH_OFFSET))(this);
		}

		::System::Void _RefreshSpeedPanelState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDPANELSTATE_OFFSET))(this);
		}

		::System::Void _SetSpeedPanelState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETSPEEDPANELSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshUltimateCharge(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATECHARGE_OFFSET))(this, a1);
		}

		::System::Void _ShowUltimateQteFill(::RPG::GameCore::RoadRashGameModifier_PlayerUltimateQTEWindow a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RoadRashGameModifier_PlayerUltimateQTEWindow))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SHOWULTIMATEQTEFILL_OFFSET))(this, a1);
		}

		::System::Void _TickUltimateQteFill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TICKULTIMATEQTEFILL_OFFSET))(this);
		}

		::System::Void _HideUltimateQteFill(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__HIDEULTIMATEQTEFILL_OFFSET))(this, a1);
		}

		::System::Void _PlayUltimateQteResultState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYULTIMATEQTERESULTSTATE_OFFSET))(this, a1);
		}

		::System::Void _RefreshUltimateQteFill(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATEQTEFILL_OFFSET))(this, a1);
		}

		::System::Void _SetUltimateQteFillVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETULTIMATEQTEFILLVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _SetUltimateQteFillBackBgVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETULTIMATEQTEFILLBACKBGVISIBLE_OFFSET))(this, a1);
		}

		::System::Void _PlayUltimateQteFillState(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYULTIMATEQTEFILLSTATE_OFFSET))(this, a1);
		}

		::Class_1_A4088D9A55CD220E* _GetHudService()
		{
			return ((::Class_1_A4088D9A55CD220E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETHUDSERVICE_OFFSET))(this);
		}

		::System::Void _TryResolveServices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYRESOLVESERVICES_OFFSET))(this);
		}

		::System::Void _TryRegisterUIShowAdapter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYREGISTERUISHOWADAPTER_OFFSET))(this);
		}

		::System::Void _PlayEnergyBarAnimation(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYENERGYBARANIMATION_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void __TryRegisterUIShowAdapter_b__45_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRYREGISTERUISHOWADAPTER_B__45_0_OFFSET))(this, a1);
		}
	};
}
