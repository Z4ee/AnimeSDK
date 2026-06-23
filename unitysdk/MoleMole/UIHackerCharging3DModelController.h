#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_95D3EC8CED91AD21;
class Class_2_FDFE69FE7B72463B;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class MonoHackProgressItem; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEANIMATIONS_OFFSET UNITYSDK_OFFSET(0x166FC240)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEFULLBATTERYANIMATION_OFFSET UNITYSDK_OFFSET(0x166FC190)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEPROGRESSITEMFROMBINDER_OFFSET UNITYSDK_OFFSET(0x166FC0E0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHETIPORIGINS_OFFSET UNITYSDK_OFFSET(0x166FDB40)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CANPLAYPROGRESSANIMATIONS_OFFSET UNITYSDK_OFFSET(0x166FF910)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x166FD320)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x166FBFB0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x166FC0D0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x166FBFA0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166FBFC0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_KILLTWEENS_OFFSET UNITYSDK_OFFSET(0x166FE500)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x166FF740)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166FC030)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x166FE850)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166FE490)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166FC5B0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_PLAYINTROSEQUENCE_OFFSET UNITYSDK_OFFSET(0x166FDEA0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_PLAYTRANSITIONTOCHARGING_OFFSET UNITYSDK_OFFSET(0x166FE960)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x166FD530)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_REGISTERPROPERTYLISTENER_OFFSET UNITYSDK_OFFSET(0x166FD140)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_SETTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x166FFCC0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_SETUPFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x166FC890)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_TRYGETLOOPNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x166FFAD0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_UNREGISTERPROPERTYLISTENER_OFFSET UNITYSDK_OFFSET(0x166FE610)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166FFE30)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER__PLAYINTROSEQUENCE_B__48_0_OFFSET UNITYSDK_OFFSET(0x166FFEC0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166FFED0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166FFF70)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166FFF80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerCharging3DModelController_TypeDefinitionIndex = 64129;

	class UIHackerCharging3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::Single TipSlideOffset; // 0x0
		// static const ::System::Single TipSlideDownDuration; // 0x0
		// static const ::System::Single TipBounceOutDuration; // 0x0
		// static const ::System::Single ProgressPopInDuration; // 0x0
		// static const ::System::String* HackerDroneChargingPointFinishFadeInAnim; // 0x0
		// static const ::System::String* HackerDroneChargingPointFinishFadeOutAnim; // 0x0
		// static const ::System::String* HackerDroneChargingPointFinishLoopAnim; // 0x0
		// static const ::System::String* HackerDroneChargingFullBatterySwitchInAnim; // 0x0
		// static const ::System::String* HackerDroneChargingFullBatterySwitchOutAnim; // 0x0
		::System::UInt32 _entityID; // 0x360
		::System::String* _customPropertyName; // 0x368
		::MoleMole::MonoHackProgressItem* _progressItem; // 0x370
		::Class_2_FDFE69FE7B72463B* _fullBatteryAnimation; // 0x378
		::UnityEngine::Animation* _rootAnimation; // 0x380
		::System::Boolean _isRootPlaying; // 0x388
		::System::Single _scaleMultiplier; // 0x38C
		::UnityEngine::Vector3 _startScale; // 0x390
		::System::Int32 _currentFilledCount; // 0x39C
		::DG::Tweening::Sequence* _introSequence; // 0x3A0
		::System::Boolean _decoFinished; // 0x3A8
		::System::Boolean _chargingShown; // 0x3A9
		::Il2CppArray<::System::Single>* _tipOriginLocalY; // 0x3B0
		::Il2CppArray<::UnityEngine::Animation*>* _finishAnimations; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_AutoProcessCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET))(this);
		}

		::Class_2_95D3EC8CED91AD21* get__viewModel()
		{
			return ((::Class_2_95D3EC8CED91AD21*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Boolean get_Show3dSceneEntities()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET))(this);
		}

		::System::Void CacheProgressItemFromBinder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEPROGRESSITEMFROMBINDER_OFFSET))(this);
		}

		::System::Void CacheFullBatteryAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEFULLBATTERYANIMATION_OFFSET))(this);
		}

		::System::Void CacheAnimations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEANIMATIONS_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFighter_PropertyValueChanged(::System::UInt32 fighterId, ::MoleMole::Config::BaseProperty type, ::System::String* customType, ::System::Double oldValue, ::System::Double newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET))(this, fighterId, type, customType, oldValue, newValue);
		}

		::System::Void SetupFollowTarget(::System::UInt32 entityID, ::System::String* attachPointName)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_SETUPFOLLOWTARGET_OFFSET))(this, entityID, attachPointName);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RegisterPropertyListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_REGISTERPROPERTYLISTENER_OFFSET))(this);
		}

		::System::Void UnregisterPropertyListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_UNREGISTERPROPERTYLISTENER_OFFSET))(this);
		}

		::System::Single GetCurrentProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GETCURRENTPROGRESS_OFFSET))(this);
		}

		::System::Boolean CanPlayProgressAnimations()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CANPLAYPROGRESSANIMATIONS_OFFSET))(this);
		}

		::System::Boolean TryGetLoopNormalizedTime(::System::Int32 index, ::System::Single& loopTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_TRYGETLOOPNORMALIZEDTIME_OFFSET))(this, index, loopTime);
		}

		::System::Void RefreshProgress(::System::Single progress, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_REFRESHPROGRESS_OFFSET))(this, progress, force);
		}

		::System::Void CacheTipOrigins()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHETIPORIGINS_OFFSET))(this);
		}

		::System::Void PlayIntroSequence()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_PLAYINTROSEQUENCE_OFFSET))(this);
		}

		::System::Void PlayTransitionToCharging()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_PLAYTRANSITIONTOCHARGING_OFFSET))(this);
		}

		::System::Void SetTipsActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_SETTIPSACTIVE_OFFSET))(this, active);
		}

		::System::Void KillTweens()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_KILLTWEENS_OFFSET))(this);
		}

		::System::Void _PlayIntroSequence_b__48_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER__PLAYINTROSEQUENCE_B__48_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
