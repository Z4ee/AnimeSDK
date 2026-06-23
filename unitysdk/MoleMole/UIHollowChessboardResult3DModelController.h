#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/MoleMole/UIHollowChessboardResult3DModelController_LightLerpState.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/MonoHollowResultPageConfig_LightConfig.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48F9448A0DC1016A;
class Class_1_E16AAB011063882E;
class Class_2_7BFFFE198B5C5FA5;
class MonoHollowResultPageConfig;
class MonoHollowResultPageConfig_BlinkConfigInfo;
class MonoHollowResultPageConfig_ResutlLights;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowChessPieceResult3DModelController; }
namespace MoleMole { class UIHollowChessboardResult3DModelController_NumberBlinker; }
namespace MoleMole::Config { class HollowResultConfigPageCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Light; }

#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBERBYPOSITION_OFFSET UNITYSDK_OFFSET(0x16D54DF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBER_OFFSET UNITYSDK_OFFSET(0x16D54E70)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BINDLIGHT_OFFSET UNITYSDK_OFFSET(0x16D528C0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BINK_OFFSET UNITYSDK_OFFSET(0x16D54090)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BUILDCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x16D52F50)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOBLINKNUMBERV2_OFFSET UNITYSDK_OFFSET(0x16D56AC0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOBLINKNUMBER_OFFSET UNITYSDK_OFFSET(0x16D55ED0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOBLINK_OFFSET UNITYSDK_OFFSET(0x16D55240)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOLIGHTLERP_OFFSET UNITYSDK_OFFSET(0x16D52AF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETBLINKMATRIXCONFIG_OFFSET UNITYSDK_OFFSET(0x16D55AE0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETLASTTWODIGITS_OFFSET UNITYSDK_OFFSET(0x16D569D0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETNUMBERREGION_OFFSET UNITYSDK_OFFSET(0x16D56A60)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_1_OFFSET UNITYSDK_OFFSET(0x16D551E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_OFFSET UNITYSDK_OFFSET(0x16D550C0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GET_NUMBERRESULT_OFFSET UNITYSDK_OFFSET(0x16D52770)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x16D54160)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITCHESSPIECES_OFFSET UNITYSDK_OFFSET(0x16D530D0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITMODELCAMERA_OFFSET UNITYSDK_OFFSET(0x16D541F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ISINARRAY_OFFSET UNITYSDK_OFFSET(0x16D55010)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16D52EF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D52790)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D52980)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D52A10)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D52820)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D52930)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQFOCUSCONFIGGRID_OFFSET UNITYSDK_OFFSET(0x16D54590)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQINITCAMERAANIM_OFFSET UNITYSDK_OFFSET(0x16D54D90)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQRESULTCAMERA_OFFSET UNITYSDK_OFFSET(0x16D544D0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETFAILBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x16D55BF0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETLIGHTBYPERCENT_OFFSET UNITYSDK_OFFSET(0x16D570F0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETLIGHTVAL_OFFSET UNITYSDK_OFFSET(0x16D56E50)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETLIGHT_OFFSET UNITYSDK_OFFSET(0x16D53D30)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SET_NUMBERRESULT_OFFSET UNITYSDK_OFFSET(0x16D52780)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x16D52A80)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__BINK_B__16_0_OFFSET UNITYSDK_OFFSET(0x16D57450)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D57400)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D572B0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__SETLIGHT_B__40_0_OFFSET UNITYSDK_OFFSET(0x16D574D0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16D574E0)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16D57570)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16D57630)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16D57640)
#define MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16D57650)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowChessboardResult3DModelController_TypeDefinitionIndex = 70489;

	class UIHollowChessboardResult3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::UnityEngine::Quaternion* StaticGet_DefaultRot()
		{
			return (::UnityEngine::Quaternion*)Il2CppClass::FromTypeDefinitionIndex(UIHollowChessboardResult3DModelController_TypeDefinitionIndex)->GetStaticField(0xDC70);
		}
		::System::Nullable_1<::System::Int32> _NumberResult_k__BackingField; // 0x360
		::Class_1_48F9448A0DC1016A* _hollowCameraGroup; // 0x368
		::MoleMole::UIHollowChessboardResult3DModelController_NumberBlinker* _numberBlinker; // 0x370
		::System::Threading::CancellationTokenSource* _numberblinkSource; // 0x378
		::Class_2_7BFFFE198B5C5FA5* _view; // 0x380
		::Il2CppArray<::MoleMole::UIHollowChessPieceResult3DModelController*>* _chessPieceCtrlGrid; // 0x388
		::Il2CppArray<::MoleMole::UIHollowChessPieceResult3DModelController*>* _chessPieceCtrlArray; // 0x390
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIHollowChessPieceResult3DModelController*>* _allChessPieces; // 0x398
		::MonoHollowResultPageConfig* _config; // 0x3A0
		::Class_1_E16AAB011063882E* _commonUiCamera; // 0x3A8
		::MoleMole::Config::HollowResultConfigPageCamera* _cameraConfig; // 0x3B0
		::MonoHollowResultPageConfig_ResutlLights* _lightsConfig; // 0x3B8
		::MoleMole::UIHollowChessboardResult3DModelController_LightLerpState _lightLerpState; // 0x3C0
		::System::Single lightLerpTimeCount; // 0x3C4
		::System::Boolean isStartLitghLerp; // 0x3C8
		::UnityEngine::Light* Light_top; // 0x3D0
		::UnityEngine::Light* Light_bottom; // 0x3D8
		::UnityEngine::Light* Light_left; // 0x3E0
		::UnityEngine::Light* Light_right; // 0x3E8
		::System::Single lightLerpTimeDir; // 0x3F0
		::UnityEngine::AnimationCurve* lightLerpCurve; // 0x3F8
		::System::Int32 _configRow; // 0x400
		::System::Int32 _configCol; // 0x404
		::System::Int32 _placeholderNumCol; // 0x408
		::System::Int32 _placeholderNumRow; // 0x40C
		::System::Int32 _fullRow; // 0x410
		::System::Int32 _fullCol; // 0x414
		::Il2CppArray<::System::Single>* DepthMatrix; // 0x418

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Nullable_1<::System::Int32> get_NumberResult()
		{
			return ((::System::Nullable_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GET_NUMBERRESULT_OFFSET))(this);
		}

		::System::Void set_NumberResult(::System::Nullable_1<::System::Int32> value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::System::Int32>))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SET_NUMBERRESULT_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void BuildChessboard(::MonoHollowResultPageConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BUILDCHESSBOARD_OFFSET))(this, config);
		}

		::System::Void Bink(::System::Single delayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BINK_OFFSET))(this, delayTime);
		}

		::System::Void InitCamera(::System::String* cameraKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITCAMERA_OFFSET))(this, cameraKey);
		}

		::System::Void ReqResultCamera(::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQRESULTCAMERA_OFFSET))(this, onDone);
		}

		::System::Void ReqInitCameraAnim(::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQINITCAMERAANIM_OFFSET))(this, onDone);
		}

		::System::Void ReqFocusConfigGrid(::System::Single screenRatioX, ::System::Single screenRatioY, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_REQFOCUSCONFIGGRID_OFFSET))(this, screenRatioX, screenRatioY, onDone);
		}

		::System::Void AddGroupMember(::System::Int32 weight, ::System::Single radius, ::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBER_OFFSET))(this, weight, radius, pos);
		}

		::System::Void AddGroupMemberByPosition(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ADDGROUPMEMBERBYPOSITION_OFFSET))(this, pos);
		}

		::System::Void InitChessPieces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITCHESSPIECES_OFFSET))(this);
		}

		::MoleMole::UIHollowChessPieceResult3DModelController* GetResultPiece(::System::Int32 fullX, ::System::Int32 fullY)
		{
			return ((::MoleMole::UIHollowChessPieceResult3DModelController*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_OFFSET))(this, fullX, fullY);
		}

		::MoleMole::UIHollowChessPieceResult3DModelController* GetResultPiece_1(::MoleMole::Vector2Int fullVec)
		{
			return ((::MoleMole::UIHollowChessPieceResult3DModelController*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETRESULTPIECE_1_OFFSET))(this, fullVec);
		}

		::System::Void InitModelCamera(::System::String* cameraKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_INITMODELCAMERA_OFFSET))(this, cameraKey);
		}

		::System::Void DoBlink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOBLINK_OFFSET))(this);
		}

		::MonoHollowResultPageConfig_BlinkConfigInfo* GetBlinkMatrixConfig(::System::Int32 index)
		{
			return ((::MonoHollowResultPageConfig_BlinkConfigInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETBLINKMATRIXCONFIG_OFFSET))(this, index);
		}

		::System::Void SetFailBrightness()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETFAILBRIGHTNESS_OFFSET))(this);
		}

		::System::Void DoBlinkNumber(::System::Int32 numberResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOBLINKNUMBER_OFFSET))(this, numberResult);
		}

		::System::Void DoBlinkNumberV2(::System::Int32 numberResult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOBLINKNUMBERV2_OFFSET))(this, numberResult);
		}

		static ::System::Void GetLastTwoDigits(::System::Int32 number, ::System::Int32& tens, ::System::Int32& units)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETLASTTWODIGITS_OFFSET))(number, tens, units);
		}

		static ::System::Boolean IsInArray(::Il2CppArray<::System::Single>* array, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_ISINARRAY_OFFSET))(array, x, y);
		}

		static ::System::Int32 GetNumberRegion(::System::Int32 regionCol, ::System::Int32 x, ::System::Int32 totalCol)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_GETNUMBERREGION_OFFSET))(regionCol, x, totalCol);
		}

		::System::Void BindLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_BINDLIGHT_OFFSET))(this);
		}

		::System::Void SetLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETLIGHT_OFFSET))(this);
		}

		::System::Void DoLightLerp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_DOLIGHTLERP_OFFSET))(this);
		}

		::System::Void SetLightByPercent(::MonoHollowResultPageConfig_LightConfig start, ::MonoHollowResultPageConfig_LightConfig target, ::System::Single percent)
		{
			return ((::System::Void(*)(::PVOID, ::MonoHollowResultPageConfig_LightConfig, ::MonoHollowResultPageConfig_LightConfig, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETLIGHTBYPERCENT_OFFSET))(this, start, target, percent);
		}

		::System::Void SetLightVal(::System::Single range, ::System::Single intensity, ::UnityEngine::Color color_top, ::UnityEngine::Color color_bottom, ::UnityEngine::Color color_left, ::UnityEngine::Color color_right)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER_SETLIGHTVAL_OFFSET))(this, range, intensity, color_top, color_bottom, color_left, color_right);
		}

		::System::Void _Bink_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__BINK_B__16_0_OFFSET))(this);
		}

		::System::Void _SetLight_b__40_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER__SETLIGHT_B__40_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCHESSBOARDRESULT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
