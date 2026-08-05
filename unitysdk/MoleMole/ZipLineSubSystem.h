#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_01B94E8A7E4DDFF4_Enum_3_88BDAA8778A9F9E6.h"
#include "unitysdk/Class_2_02480C4BB819085A_Enum_3_D5688A2D3F8EBDB6.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/MoleMole/ZipLineSubSystem_SwitchType.h"
#include "unitysdk/Struct_2_3A004622942516C0.h"
#include "unitysdk/Struct_2_57572BE5B21BFA95.h"
#include "unitysdk/Struct_2_CECEDD33F79E5905.h"
#include "unitysdk/Struct_2_D5328C5CE4F15537.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5A147CAFD15ABF71;
class Class_1_AA1C1DFC6171628C;
class Class_1_B7E341C5F1A6F199;
class Class_2_02480C4BB819085A;
class Class_2_3E3BE90491DD71C7;
namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole { class ZipLineSubSystem_CModel; }
namespace MoleMole { class ZipLineSubSystem_HUDModel; }
namespace MoleMole { class ZipLineSubSystem_Target; }
namespace MoleMole::Config { class ConfigZipLine; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ZIPLINESUBSYSTEM_AUTOSAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x14DB1980)
#define MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHIN_OFFSET UNITYSDK_OFFSET(0x14DB1C10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHOUT_OFFSET UNITYSDK_OFFSET(0x14DB3160)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CHECKINSCREENRANGE_OFFSET UNITYSDK_OFFSET(0x14DAEC90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CLEARAUTOSAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x14DB1A10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_CLEARCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x14DB1900)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDMODEL_OFFSET UNITYSDK_OFFSET(0x14DB4940)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDPOINTTYPE_OFFSET UNITYSDK_OFFSET(0x14DAFAB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETOVERRIDEMOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0x14DA9750)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETSCREENPOSFROMWORLDPOS_OFFSET UNITYSDK_OFFSET(0x14DAE9E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GETTARGET_OFFSET UNITYSDK_OFFSET(0x14DAEF90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_CONFIGZIPLINE_OFFSET UNITYSDK_OFFSET(0x14DA9380)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_LOCALAVATAR_OFFSET UNITYSDK_OFFSET(0x14DB2B40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x14DB49C0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHAVATAR_OFFSET UNITYSDK_OFFSET(0x14DAE950)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_ENTER_OFFSET UNITYSDK_OFFSET(0x14DA92F0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_EXIT_OFFSET UNITYSDK_OFFSET(0x14DA9620)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_SWITCH_OFFSET UNITYSDK_OFFSET(0x14DA9590)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_PREDICATEZIPLINEAVATAR_OFFSET UNITYSDK_OFFSET(0x14DAC230)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_TEAMENTITY_OFFSET UNITYSDK_OFFSET(0x14DB49B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_GET_ZIPLINEAVATAR_OFFSET UNITYSDK_OFFSET(0x14DB49A0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_INITPOINTSEARCHPROFILES_OFFSET UNITYSDK_OFFSET(0x14DA8BB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_INPUTWITHHANDLER_OFFSET UNITYSDK_OFFSET(0x14DB41E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_INPUT_OFFSET UNITYSDK_OFFSET(0x14DB3C20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ISINSCENEAREA_OFFSET UNITYSDK_OFFSET(0x14DAE620)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONAVATARINOUTBATTLECHANGE_OFFSET UNITYSDK_OFFSET(0x14DB0AD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14DA9880)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONBEGINCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x14DB15D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET UNITYSDK_OFFSET(0x14DB0D90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET UNITYSDK_OFFSET(0x14DB0F20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14DAA640)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONENDCONSOLECOMBO_OFFSET UNITYSDK_OFFSET(0x14DB1720)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14DAB480)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14DACDE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14DAD010)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONUILOCKCHANGED_OFFSET UNITYSDK_OFFSET(0x14DB1340)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x14DB10B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14DAB940)
#define MOLEMOLE_ZIPLINESUBSYSTEM_PROCESSDEFAULTTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x14DAF950)
#define MOLEMOLE_ZIPLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14DAB1D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_RESETDEBUGDATA_OFFSET UNITYSDK_OFFSET(0x14DA96B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x14DB1870)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SENDEVENT_ZIPLINEHINTVISIBLE_OFFSET UNITYSDK_OFFSET(0x14DB0910)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SETCURRENTSTATE_OFFSET UNITYSDK_OFFSET(0x14DAAE10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SET_MODEL_OFFSET UNITYSDK_OFFSET(0x14DB49D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SET_TEAMENTITY_OFFSET UNITYSDK_OFFSET(0x14DAA340)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SET_ZIPLINEAVATAR_OFFSET UNITYSDK_OFFSET(0x14DB2D80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SYNCCURRENTPOINTFROMMAINENTITY_OFFSET UNITYSDK_OFFSET(0x14DB47D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_SYNCDATAFROMMAINENTITY_OFFSET UNITYSDK_OFFSET(0x14DADA40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TOSPLINEEX_OFFSET UNITYSDK_OFFSET(0x14DA97D0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETAUTOSAVECHECKPOINT_OFFSET UNITYSDK_OFFSET(0x14DB1B50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x14DB1A90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETSPLINEGROUPIDANDKEY_OFFSET UNITYSDK_OFFSET(0x14DB4880)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14DAB7B0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATECHECKSCENEAREA_OFFSET UNITYSDK_OFFSET(0x14DAE570)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_1_OFFSET UNITYSDK_OFFSET(0x14DAFB10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_2_OFFSET UNITYSDK_OFFSET(0x14DB0250)
#define MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_OFFSET UNITYSDK_OFFSET(0x14DAF000)
#define MOLEMOLE_ZIPLINESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DB4B30)
#define MOLEMOLE_ZIPLINESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB49E0)
#define MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_0_OFFSET UNITYSDK_OFFSET(0x14DB4B50)
#define MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_1_OFFSET UNITYSDK_OFFSET(0x14DB4B70)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14DB4B90)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14DB4C20)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET UNITYSDK_OFFSET(0x14DB4CB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14DB4D40)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x14DB4DE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14DB4E80)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14DB4F10)
#define MOLEMOLE_ZIPLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0x14DB4FA0)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_TypeDefinitionIndex = 63889;

	class ZipLineSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::ZipLineSubSystem*>
	{
	public:
		static ::System::Boolean* StaticGet_EnableSearchOptimization_Spline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_TypeDefinitionIndex)->GetStaticField(0xB4A0);
		}
		static ::System::Boolean* StaticGet_EnableSearchOptimization_Point()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_TypeDefinitionIndex)->GetStaticField(0xB4A1);
		}
		static ::System::Boolean* StaticGet_HandleInputByLocalAvatarMixin()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ZipLineSubSystem_TypeDefinitionIndex)->GetStaticField(0xB4A2);
		}
		// static const ::System::UInt32 HandleID_EnterPoint = 0x1; // 0x0
		// static const ::System::UInt32 HandleID_SwitchPoint = 0x2; // 0x0
		// static const ::System::UInt32 HandleID_ExitPoint = 0x3; // 0x0
		// static const ::System::Int32 CheckPointID_AutoSave = 0x0; // 0x0
		::MoleMole::Config::ConfigZipLine* _cachedConfig; // 0x10
		::Class_1_5A147CAFD15ABF71* __pointSearchProfileExit; // 0x18
		::MoleMole::ZipLineSubSystem_Target* _cacheEnterPoint; // 0x20
		::MoleMole::EntityHandle _switchOutEntity; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Struct_2_FC595D1A561D8C6F>* _checkPoints; // 0x38
		::Class_1_5A147CAFD15ABF71* __pointSearchProfileSwitch; // 0x40
		::Class_1_AA1C1DFC6171628C* PointSearchHelper; // 0x48
		::Class_2_02480C4BB819085A* ZipLineMixin; // 0x50
		::MoleMole::EntityHandle _teamEntity; // 0x58
		::MoleMole::ZipLineSubSystem_CModel* _Model_k__BackingField; // 0x68
		::MoleMole::EntityHandle _zipLineAvatar; // 0x70
		::MoleMole::ZipLineSubSystem_Target* _cacheSwtichPoint; // 0x80
		::Struct_2_3A004622942516C0 _cacheSplineEx; // 0x88
		::Class_1_5A147CAFD15ABF71* __pointSearchProfileEnter; // 0x98
		::MoleMole::EntityHandle _predicateZipLineAvatar; // 0xA0
		::MoleMole::ZipLineSubSystem_Target* _cacheExitPoint; // 0xB0
		::MoleMole::ZipLineSubSystem_SwitchType _switchType; // 0xB8
		::System::Boolean EnablePointSearch_LOD; // 0xBC
		::System::Boolean _switching; // 0xBD

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__CCTOR_OFFSET))();
		}

		::System::Void InitPointSearchProfiles()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_INITPOINTSEARCHPROFILES_OFFSET))(this);
		}

		::System::Void ResetDebugData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_RESETDEBUGDATA_OFFSET))(this);
		}

		::System::Single GetOverrideMoveDirection(::System::Single currentDistance)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETOVERRIDEMOVEDIRECTION_OFFSET))(this, currentDistance);
		}

		::Class_1_5A147CAFD15ABF71* get_PointSearchProfile_Enter()
		{
			return ((::Class_1_5A147CAFD15ABF71*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_ENTER_OFFSET))(this);
		}

		::Class_1_5A147CAFD15ABF71* get_PointSearchProfile_Switch()
		{
			return ((::Class_1_5A147CAFD15ABF71*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_SWITCH_OFFSET))(this);
		}

		::Class_1_5A147CAFD15ABF71* get_PointSearchProfile_Exit()
		{
			return ((::Class_1_5A147CAFD15ABF71*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHPROFILE_EXIT_OFFSET))(this);
		}

		::Struct_2_3A004622942516C0 ToSplineEx(::FluffyUnderware::Curvy::CurvySpline* curvySpline)
		{
			return ((::Struct_2_3A004622942516C0(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TOSPLINEEX_OFFSET))(this, curvySpline);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONEVENTFROMANYONE_OFFSET))(this, evt);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void UpdateCheckSceneArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATECHECKSCENEAREA_OFFSET))(this);
		}

		::System::Boolean IsInSceneArea()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ISINSCENEAREA_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetScreenPosFromWorldPos(::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETSCREENPOSFROMWORLDPOS_OFFSET))(this, worldPos);
		}

		::System::Boolean CheckInScreenRange(::UnityEngine::Vector3 worldPos, ::System::Single majorAxisLength, ::System::Single minorAxisLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CHECKINSCREENRANGE_OFFSET))(this, worldPos, majorAxisLength, minorAxisLength);
		}

		::MoleMole::ZipLineSubSystem_Target* GetTarget(::System::UInt32 handle)
		{
			return ((::MoleMole::ZipLineSubSystem_Target*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETTARGET_OFFSET))(this, handle);
		}

		::System::Void UpdateTarget(::System::UInt32 handle, ::Class_2_3E3BE90491DD71C7* splinePointData, ::System::String* textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_3E3BE90491DD71C7*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_OFFSET))(this, handle, splinePointData, textmapKey);
		}

		::System::Void UpdateTarget_1(::System::UInt32 handle, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905> enterPointData, ::UnityEngine::Vector3 tangent, ::System::String* textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::Struct_2_CECEDD33F79E5905>, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_1_OFFSET))(this, handle, enterPointData, tangent, textmapKey);
		}

		::System::Void UpdateTarget_2(::System::UInt32 handle, ::System::Nullable_1<::UnityEngine::Vector3> position, ::System::Single progress, ::System::Single distance, ::System::String* textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_UPDATETARGET_2_OFFSET))(this, handle, position, progress, distance, textmapKey);
		}

		::System::Void ProcessDefaultTextmapKey(::System::UInt32 handle, ::System::String*& textmapKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_PROCESSDEFAULTTEXTMAPKEY_OFFSET))(this, handle, textmapKey);
		}

		::Class_1_01B94E8A7E4DDFF4_Enum_3_88BDAA8778A9F9E6 GetHudPointType(::System::UInt32 handle)
		{
			return ((::Class_1_01B94E8A7E4DDFF4_Enum_3_88BDAA8778A9F9E6(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDPOINTTYPE_OFFSET))(this, handle);
		}

		::System::Void SendEvent_ZipLineHintVisible(::System::Boolean value, ::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SENDEVENT_ZIPLINEHINTVISIBLE_OFFSET))(this, value, id);
		}

		::System::Void OnAvatarInOutBattleChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONAVATARINOUTBATTLECHANGE_OFFSET))(this, args);
		}

		::System::Void OnCommonSkillActive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLACTIVE_OFFSET))(this, arg);
		}

		::System::Void OnCommonSkillInactive(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONCOMMONSKILLINACTIVE_OFFSET))(this, arg);
		}

		::System::Void OnUnlock(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONUNLOCK_OFFSET))(this, obj);
		}

		::System::Void OnUILockChanged(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONUILOCKCHANGED_OFFSET))(this, obj);
		}

		::System::Void OnBeginConsoleCombo(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONBEGINCONSOLECOMBO_OFFSET))(this, obj);
		}

		::System::Void OnEndConsoleCombo(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_ONENDCONSOLECOMBO_OFFSET))(this, obj);
		}

		::System::Void SaveCheckPoint(::System::Int32 id, ::Struct_2_FC595D1A561D8C6F checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SAVECHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Void ClearCheckPoint(::System::Int32 id, ::Struct_2_FC595D1A561D8C6F checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CLEARCHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Void AutoSaveCheckPoint(::Struct_2_FC595D1A561D8C6F checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_AUTOSAVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void ClearAutoSaveCheckPoint(::System::Int32 id, ::Struct_2_FC595D1A561D8C6F checkPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Struct_2_FC595D1A561D8C6F))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_CLEARAUTOSAVECHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Boolean TryGetCheckPoint(::System::Int32 id, ::Struct_2_FC595D1A561D8C6F& checkPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::Struct_2_FC595D1A561D8C6F&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETCHECKPOINT_OFFSET))(this, id, checkPoint);
		}

		::System::Boolean TryGetAutoSaveCheckPoint(::Struct_2_FC595D1A561D8C6F& checkPoint)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FC595D1A561D8C6F&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETAUTOSAVECHECKPOINT_OFFSET))(this, checkPoint);
		}

		::System::Void AvatarSwitchIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHIN_OFFSET))(this);
		}

		::System::Void AvatarSwitchOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_AVATARSWITCHOUT_OFFSET))(this);
		}

		::System::Void Input(::Struct_2_D5328C5CE4F15537 command)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_D5328C5CE4F15537))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_INPUT_OFFSET))(this, command);
		}

		::Struct_2_57572BE5B21BFA95 InputWithHandler(::Struct_2_D5328C5CE4F15537 command)
		{
			return ((::Struct_2_57572BE5B21BFA95(*)(::PVOID, ::Struct_2_D5328C5CE4F15537))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_INPUTWITHHANDLER_OFFSET))(this, command);
		}

		::System::Void SyncDataFromMainEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SYNCDATAFROMMAINENTITY_OFFSET))(this);
		}

		::System::Void SyncCurrentPointFromMainEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SYNCCURRENTPOINTFROMMAINENTITY_OFFSET))(this);
		}

		::System::Void SetCurrentState(::System::Nullable_1<::Class_2_02480C4BB819085A_Enum_3_D5688A2D3F8EBDB6> state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Class_2_02480C4BB819085A_Enum_3_D5688A2D3F8EBDB6>))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SETCURRENTSTATE_OFFSET))(this, state);
		}

		static ::System::Boolean TryGetSplineGroupIDAndKey(::FluffyUnderware::Curvy::CurvySpline* curvySpline, ::System::UInt32& groupID, ::System::String*& splineName)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::UInt32&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_TRYGETSPLINEGROUPIDANDKEY_OFFSET))(curvySpline, groupID, splineName);
		}

		::MoleMole::ZipLineSubSystem_HUDModel* GetHUDModel()
		{
			return ((::MoleMole::ZipLineSubSystem_HUDModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GETHUDMODEL_OFFSET))(this);
		}

		::MoleMole::Config::ConfigZipLine* get_ConfigZipLine()
		{
			return ((::MoleMole::Config::ConfigZipLine*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_CONFIGZIPLINE_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_ZipLineAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_ZIPLINEAVATAR_OFFSET))(this);
		}

		::System::Void set_ZipLineAvatar(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SET_ZIPLINEAVATAR_OFFSET))(this, value);
		}

		::MoleMole::EntityHandle get_PredicateZipLineAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_PREDICATEZIPLINEAVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_PointSearchAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_POINTSEARCHAVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_LocalAvatar()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_LOCALAVATAR_OFFSET))(this);
		}

		::MoleMole::EntityHandle get_TeamEntity()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_TEAMENTITY_OFFSET))(this);
		}

		::System::Void set_TeamEntity(::MoleMole::EntityHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SET_TEAMENTITY_OFFSET))(this, value);
		}

		::MoleMole::ZipLineSubSystem_CModel* get_Model()
		{
			return ((::MoleMole::ZipLineSubSystem_CModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_GET_MODEL_OFFSET))(this);
		}

		::System::Void set_Model(::MoleMole::ZipLineSubSystem_CModel* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem_CModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_SET_MODEL_OFFSET))(this, value);
		}

		::System::Single _InitPointSearchProfiles_b__0_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_0_OFFSET))(this);
		}

		::System::Single _InitPointSearchProfiles_b__0_1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM__INITPOINTSEARCHPROFILES_B__0_1_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnEventFromAnyone(::Class_1_B7E341C5F1A6F199* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONEVENTFROMANYONE_OFFSET))(this, P0);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
