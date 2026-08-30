#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingGameplaySpeedPanelControl_SpeedBarGear.h"
#include "unitysdk/RPG/GameCore/RoadRashGameModifier_PlayerUltimateQTEWindow.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

class Class_1_0EDB27FD5E4877C5;
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

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1B6B9440)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B6B9B50)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__APPLYPENDINGSPEEDPANELSTATEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B6BA030)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__BUILDDISPLAYSPEEDVALUE_OFFSET UNITYSDK_OFFSET(0x1B6B9A00)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CALCULATEULTIMATEQTEVISUALRANGE_OFFSET UNITYSDK_OFFSET(0x1B6B9A70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CANCELSPEEDBARTRANSITION_OFFSET UNITYSDK_OFFSET(0x1B6BB970)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__COMPLETESPEEDBARTRANSITION_OFFSET UNITYSDK_OFFSET(0x1B6BC4A0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6BD050)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETHUDSERVICE_OFFSET UNITYSDK_OFFSET(0x1B6B95B0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETNORMALSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B6B9970)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARGEAR_OFFSET UNITYSDK_OFFSET(0x1B6BB9E0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B6BBAD0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__GETSPEEDBARTRANSITIONDURATION_OFFSET UNITYSDK_OFFSET(0x1B6BC090)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__HIDEULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0x1B6BB900)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__INTERPOLATESPEEDBARPROGRESSASYNC_OFFSET UNITYSDK_OFFSET(0x1B6BC3A0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6BCE10)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6BCF90)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6BCC60)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONLOGICREADY_OFFSET UNITYSDK_OFFSET(0x1B6BB400)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONPLAYERULTIMATEDURATIONEND_OFFSET UNITYSDK_OFFSET(0x1B6BB190)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONPLAYERULTIMATESTART_OFFSET UNITYSDK_OFFSET(0x1B6BAFD0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONSPEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x1B6BA5D0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATECASTABLECHANGED_OFFSET UNITYSDK_OFFSET(0x1B6BAC90)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATECHARGECHANGE_OFFSET UNITYSDK_OFFSET(0x1B6BAAD0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATEQTERESULT_OFFSET UNITYSDK_OFFSET(0x1B6BB710)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__ONULTIMATEQTESTART_OFFSET UNITYSDK_OFFSET(0x1B6BAD10)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYENERGYBARANIMATION_OFFSET UNITYSDK_OFFSET(0x1B6BC720)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYULTIMATEQTEFILLSTATE_OFFSET UNITYSDK_OFFSET(0x1B6BCAB0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__PLAYULTIMATEQTERESULTSTATE_OFFSET UNITYSDK_OFFSET(0x1B6BB810)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDBARGEAR_OFFSET UNITYSDK_OFFSET(0x1B6BB330)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDBAR_OFFSET UNITYSDK_OFFSET(0x1B6BA850)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDPANELSTATE_OFFSET UNITYSDK_OFFSET(0x1B6B9880)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEEDTEXT_OFFSET UNITYSDK_OFFSET(0x1B6BA6A0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHSPEED_OFFSET UNITYSDK_OFFSET(0x1B6B9600)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATEARROWHANDLE_OFFSET UNITYSDK_OFFSET(0x1B6BB470)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATECHARGE_OFFSET UNITYSDK_OFFSET(0x1B6B9740)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REFRESHULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0x1B6BC810)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REGISTERNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B6BA090)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__REQUESTSPEEDPANELSTATEREFRESH_OFFSET UNITYSDK_OFFSET(0x1B6BAC40)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__RESUMENORMALSPEEDBARREFRESH_OFFSET UNITYSDK_OFFSET(0x1B6BC1C0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETSPEEDBARPROGRESS_OFFSET UNITYSDK_OFFSET(0x1B6BBD70)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETSPEEDPANELSTATE_OFFSET UNITYSDK_OFFSET(0x1B6BC590)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETULTIMATEQTEFILLBACKBGVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B6BB220)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SETULTIMATEQTEFILLVISIBLE_OFFSET UNITYSDK_OFFSET(0x1B6BC9A0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__SHOWULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0x1B6BADA0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TICKULTIMATEQTEFILL_OFFSET UNITYSDK_OFFSET(0x1B6B9E30)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRANSITIONSPEEDBARTOGEARASYNC_OFFSET UNITYSDK_OFFSET(0x1B6BB0F0)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYBEGINSPEEDBARTRANSITION_OFFSET UNITYSDK_OFFSET(0x1B6BBE00)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYREGISTERUISHOWADAPTER_OFFSET UNITYSDK_OFFSET(0x1B6BCB20)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__TRYRESOLVESERVICES_OFFSET UNITYSDK_OFFSET(0x1B6B9C60)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL__UNREGISTERNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B6BA330)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYSPEEDPANELCONTROL___TRYREGISTERUISHOWADAPTER_B__45_0_OFFSET UNITYSDK_OFFSET(0x1B6BD080)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplaySpeedPanelControl_TypeDefinitionIndex = 80569;

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
		::RPG::Client::LocalizedText* _SpeedNum01Text; // 0x38
		::RPG::Client::LocalizedText* _SpeedNum02Text; // 0x40
		::RPG::Client::LocalizedText* _SpeedNum03Text; // 0x48
		::UnityEngine::UI::Slider* _UltimateSkillBarSlider; // 0x50
		::UnityEngine::UI::Slider* _UltimateArrowHandleSlider; // 0x58
		::RPG::Client::B51Racing::B51RacingGamePlayUltimateQTEView* _UltimateQteFill; // 0x60
		::RPG::Client::B51Racing::B51RacingGamePlayUltimateQTEView* _UltimateQteFillBackBg; // 0x68
		::RPG::Client::UIStateCtrl* _UltimateQteFillStateCtrl; // 0x70
		::RPG::Client::B51Racing::B51RacingHudSpeedBarView* _SpeedBarView; // 0x78
		::UnityEngine::Animation* _EnergyBarAnimation; // 0x80
		::RPG::Client::UIStateCtrl* _SpeedPanelStateCtrl; // 0x88
		::Class_1_A4088D9A55CD220E* _HudService; // 0x90
		::Class_1_D2BE74FB4F4086CC* _UIShowService; // 0x98
		::Class_1_0EDB27FD5E4877C5* _ShowAdapter; // 0xA0
		::System::Threading::CancellationTokenSource* _SpeedBarTransitionCts; // 0xA8
		::System::String* _CurrentSpeedState; // 0xB0
		::System::Boolean _PendingSpeedPanelStateRefresh; // 0xB8
		::System::Boolean _IsSpeedBarTransitioning; // 0xB9
		::RPG::Client::B51Racing::B51RacingGameplaySpeedPanelControl_SpeedBarGear _CurrentSpeedBarGear; // 0xBC
		::System::Single _CurrentSpeedBarProgress; // 0xC0
		::System::Boolean _IsUltimateQteFillVisible; // 0xC4
		::System::Boolean _IsUltimateQteResultStatePlaying; // 0xC5
		::System::Single _UltimateQteFillRemainSeconds; // 0xC8
		::System::Single _UltimateQteResultStateRemainSeconds; // 0xCC
		::System::Single _UltimateQteInitialVisualEnd; // 0xD0
		::System::Single _UltimateQteInitialVisualDuration; // 0xD4

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
