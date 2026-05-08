#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9E872ED84D1478B9.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_6BC87267F41C82C6_8;
namespace MoleMole { class UIArcadeMachineUnit3DModelController; }
namespace MoleMole { class UIArcadePageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole::Config { class ConfigArcadeCameraBlendCurve; }
namespace MoleMole::Config { class ConfigArcadeCameraPoint; }
namespace MoleMole::Config { class ConfigArcadePageCamera; }
namespace MoleMole::MiniGame { class MiniGameWorldBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAMENOANIM_OFFSET UNITYSDK_OFFSET(0x15AA8E70)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAME_OFFSET UNITYSDK_OFFSET(0x15AA8CD0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x15AA8110)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERENTRANCEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x15AA7AD0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINENOANIM_OFFSET UNITYSDK_OFFSET(0x15AA8AE0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINE_OFFSET UNITYSDK_OFFSET(0x15AA8710)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMSPINNINGTABLE_OFFSET UNITYSDK_OFFSET(0x15AA9060)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMARCADEMACHINE_OFFSET UNITYSDK_OFFSET(0x15AA8310)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_OFFSET UNITYSDK_OFFSET(0x15AA78E0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCE_OFFSET UNITYSDK_OFFSET(0x15AA7640)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMPLAYGAME_OFFSET UNITYSDK_OFFSET(0x15AA9200)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETARCADEMODELSCREENDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x15AAA610)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERDATAINDEX_OFFSET UNITYSDK_OFFSET(0x15AA75F0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERPOSITIONINDEX_OFFSET UNITYSDK_OFFSET(0x15AA75A0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETMACHINEUNIT3DMODELCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15AA97D0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETTARGETROTATIONAXISVALUE_OFFSET UNITYSDK_OFFSET(0x15AAAF20)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITARCADEMACHINEINFO_OFFSET UNITYSDK_OFFSET(0x15AAA7B0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITCAMERAINFO_OFFSET UNITYSDK_OFFSET(0x15AAB000)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15AA60D0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ISTABLEROTATING_OFFSET UNITYSDK_OFFSET(0x15AAAB30)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15AA64C0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERGAMERTPHASE_OFFSET UNITYSDK_OFFSET(0x15AA88B0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERNEARPOSPHASE_OFFSET UNITYSDK_OFFSET(0x15AA8510)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERTITLEVIDEOPHASE_OFFSET UNITYSDK_OFFSET(0x15AA7ED0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15AA6550)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AA6050)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_PRELEAVEPLAYGAMEPHASE_OFFSET UNITYSDK_OFFSET(0x15AA7E70)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHCOMMONVIEW_OFFSET UNITYSDK_OFFSET(0x15AA9960)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHSPINNINGTABLESTATE_OFFSET UNITYSDK_OFFSET(0x15AA9430)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATINGBYGAMELIST_OFFSET UNITYSDK_OFFSET(0x15AAA8B0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATING_OFFSET UNITYSDK_OFFSET(0x15AAA910)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REGISTERMINIGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x15AA9FD0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0x15AA77E0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETTABLEROTATING_OFFSET UNITYSDK_OFFSET(0x15AA7E20)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SET3DSCREENSHOWENABLED_OFFSET UNITYSDK_OFFSET(0x15AAA490)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETCAMERAMOVESTATE_OFFSET UNITYSDK_OFFSET(0x15AAAE00)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETDIRECTIONALLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0x15AAAB80)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETREFCONTROLLER_OFFSET UNITYSDK_OFFSET(0x15AA9E30)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STARTARCADEGAME_OFFSET UNITYSDK_OFFSET(0x15AAA310)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STOPCENTERMACHINEVIDEO_OFFSET UNITYSDK_OFFSET(0x15AA93A0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKCAMERA_OFFSET UNITYSDK_OFFSET(0x15AA66B0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKSPINNINGTABLEROTATE_OFFSET UNITYSDK_OFFSET(0x15AA7190)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKTABLEROTATINGBYSELF_OFFSET UNITYSDK_OFFSET(0x15AA74E0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UNREGISTERMINIGAMEWORLD_OFFSET UNITYSDK_OFFSET(0x15AAA170)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15AA65C0)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAB590)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15AAB690)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15AAB720)
#define MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15AAB730)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadeShop3DModelController_TypeDefinitionIndex = 80119;

	class UIArcadeShop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_6BC87267F41C82C6_8* _view; // 0x358
		::MoleMole::UIArcadePageController* _arcadePageController; // 0x360
		::System::Collections::Generic::List_1<::MoleMole::UIArcadeMachineUnit3DModelController*>* _arcadeMachineUnits; // 0x368
		::MoleMole::Config::ConfigArcadePageCamera* _configArcadePageCamera; // 0x370
		::System::Boolean _isCameraMoving; // 0x378
		::System::Single _cameraMoveTimer; // 0x37C
		::System::Action* _cameraMoveFinishCB; // 0x380
		::MoleMole::Config::ConfigArcadeCameraPoint* _curCameraPoint; // 0x388
		::MoleMole::Config::ConfigArcadeCameraPoint* _cameraMoveStartPoint; // 0x390
		::MoleMole::Config::ConfigArcadeCameraPoint* _cameraMoveEndPoint; // 0x398
		::MoleMole::Config::ConfigArcadeCameraBlendCurve* _configArcadeCameraBlendCurve; // 0x3A0
		::System::Collections::Generic::List_1<::System::Int32>* _arcadeCommonGameIDList; // 0x3A8
		::System::Int32 _curCenterPositionIndex; // 0x3B0
		::System::Int32 _curCenterDataIndex; // 0x3B4
		::MoleMole::UIArcadeMachineUnit3DModelController* _curMachineUnit3DModelController; // 0x3B8
		::System::Single _spinningTableTargetAngle; // 0x3C0
		::System::Single _spinningTableCurAngle; // 0x3C4
		::System::Single _spinningTableAngleVelocity; // 0x3C8
		::System::Boolean _isTableRotating; // 0x3CC
		::System::Boolean _isTableRotatingBySelf; // 0x3CD
		::System::Boolean _isTableRotatingByGameList; // 0x3CE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Int32 GetCenterPositionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERPOSITIONINDEX_OFFSET))(this);
		}

		::System::Int32 GetCenterDataIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETCENTERDATAINDEX_OFFSET))(this);
		}

		::System::Void EnterSpinningTablePhaseFromEntrance(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCE_OFFSET))(this, finishCB);
		}

		::System::Void EnterSpinningTablePhaseFromEntranceDirect(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMENTRANCEDIRECT_OFFSET))(this, finishCB);
		}

		::System::Single EnterEntrancePhaseFromSpinningTable(::System::Action* finishCB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERENTRANCEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB);
		}

		::System::Void PreLeavePlayGamePhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_PRELEAVEPLAYGAMEPHASE_OFFSET))(this);
		}

		::System::Single EnterArcadeMachinePhaseFromSpinningTable(::System::Action* finishCB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB);
		}

		::System::Single EnterSpinningTablePhaseFromArcadeMachine(::System::Action* finishCB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMARCADEMACHINE_OFFSET))(this, finishCB);
		}

		::System::Void EnterPlayGamePhaseFromArcadeMachine(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINE_OFFSET))(this, finishCB);
		}

		::System::Void EnterPlayGamePhaseFromArcadeMachineNoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMARCADEMACHINENOANIM_OFFSET))(this);
		}

		::System::Void EnterArcadeMachinePhaseFromPlayGame(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAME_OFFSET))(this, finishCB);
		}

		::System::Void EnterArcadeMachinePhaseFromPlayGameNoAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERARCADEMACHINEPHASEFROMPLAYGAMENOANIM_OFFSET))(this);
		}

		::System::Void EnterPlayGamePhaseFromSpinningTable(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERPLAYGAMEPHASEFROMSPINNINGTABLE_OFFSET))(this, finishCB);
		}

		::System::Void EnterSpinningTablePhaseFromPlayGame(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ENTERSPINNINGTABLEPHASEFROMPLAYGAME_OFFSET))(this, finishCB);
		}

		::System::Void StopCenterMachineVideo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STOPCENTERMACHINEVIDEO_OFFSET))(this);
		}

		::System::Void OnEnterNearPosPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERNEARPOSPHASE_OFFSET))(this);
		}

		::System::Void OnEnterTitleVideoPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERTITLEVIDEOPHASE_OFFSET))(this);
		}

		::System::Void OnEnterGameRTPhase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ONENTERGAMERTPHASE_OFFSET))(this);
		}

		::System::Void RefreshSpinningTableState(::System::Int32 centerDataIndex, ::System::Single deltaY, ::System::Single itemHeight, ::System::Single itemMargin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHSPINNINGTABLESTATE_OFFSET))(this, centerDataIndex, deltaY, itemHeight, itemMargin);
		}

		::System::Void SetRefController(::MoleMole::UIArcadePageController* arcadePageController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIArcadePageController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETREFCONTROLLER_OFFSET))(this, arcadePageController);
		}

		::System::Void RegisterMiniGameWorld(::MoleMole::MiniGame::MiniGameWorldBase* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::MiniGameWorldBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REGISTERMINIGAMEWORLD_OFFSET))(this, miniGameWorld);
		}

		::System::Void UnregisterMiniGameWorld()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_UNREGISTERMINIGAMEWORLD_OFFSET))(this);
		}

		::System::Void StartArcadeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_STARTARCADEGAME_OFFSET))(this);
		}

		::System::Void Set3DScreenShowEnabled(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SET3DSCREENSHOWENABLED_OFFSET))(this, isEnabled);
		}

		::Enum_3_9E872ED84D1478B9 GetArcadeModelScreenDisplayType()
		{
			return ((::Enum_3_9E872ED84D1478B9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETARCADEMODELSCREENDISPLAYTYPE_OFFSET))(this);
		}

		::System::Void InitArcadeMachineInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITARCADEMACHINEINFO_OFFSET))(this);
		}

		::System::Void RefreshCommonView(::System::Int32 newPositionIndex, ::System::Int32 newDataIndex, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHCOMMONVIEW_OFFSET))(this, newPositionIndex, newDataIndex, force);
		}

		::System::Void RefreshTableRotatingByGameList(::System::Boolean isRotating)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATINGBYGAMELIST_OFFSET))(this, isRotating);
		}

		::System::Void ResetTableRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETTABLEROTATING_OFFSET))(this);
		}

		::System::Boolean IsTableRotating()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_ISTABLEROTATING_OFFSET))(this);
		}

		::System::Void SetDirectionalLightState(::System::Boolean isEnabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETDIRECTIONALLIGHTSTATE_OFFSET))(this, isEnabled);
		}

		::System::Void ResetCameraMove(::System::Action* finishCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_RESETCAMERAMOVE_OFFSET))(this, finishCB);
		}

		::System::Void TickTableRotatingBySelf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKTABLEROTATINGBYSELF_OFFSET))(this);
		}

		::MoleMole::UIArcadeMachineUnit3DModelController* GetMachineUnit3DModelController(::System::Int32 dataIndex)
		{
			return ((::MoleMole::UIArcadeMachineUnit3DModelController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETMACHINEUNIT3DMODELCONTROLLER_OFFSET))(this, dataIndex);
		}

		::System::Void TickSpinningTableRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKSPINNINGTABLEROTATE_OFFSET))(this);
		}

		::System::Void TickCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_TICKCAMERA_OFFSET))(this);
		}

		::System::Void GetTargetRotationAxisValue(::System::Single startValue, ::System::Single endValue, ::System::Single& targetStartValue, ::System::Single& targetEndValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_GETTARGETROTATIONAXISVALUE_OFFSET))(this, startValue, endValue, targetStartValue, targetEndValue);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitCameraInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_INITCAMERAINFO_OFFSET))(this);
		}

		::System::Void SetCameraMoveState(::System::Boolean isMoving)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_SETCAMERAMOVESTATE_OFFSET))(this, isMoving);
		}

		::System::Void RefreshTableRotating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER_REFRESHTABLEROTATING_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADESHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
