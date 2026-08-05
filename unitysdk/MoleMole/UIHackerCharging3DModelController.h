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

#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEANIMATIONS_OFFSET UNITYSDK_OFFSET(0x18EC8C60)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEFULLBATTERYANIMATION_OFFSET UNITYSDK_OFFSET(0x18EC8BC0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHEPROGRESSITEMFROMBINDER_OFFSET UNITYSDK_OFFSET(0x18EC8B10)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CACHETIPORIGINS_OFFSET UNITYSDK_OFFSET(0x18ECA570)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_CANPLAYPROGRESSANIMATIONS_OFFSET UNITYSDK_OFFSET(0x18ECC360)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GETCURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x18EC9D50)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_AUTOPROCESSCAMERA_OFFSET UNITYSDK_OFFSET(0x18EC89E0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_SHOW3DSCENEENTITIES_OFFSET UNITYSDK_OFFSET(0x18EC8B00)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18EC89D0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EC89F0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_KILLTWEENS_OFFSET UNITYSDK_OFFSET(0x18ECAF50)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18ECC190)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18EC8A60)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONFIGHTER_PROPERTYVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x18ECB2A0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECAEE0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EC8FD0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_PLAYINTROSEQUENCE_OFFSET UNITYSDK_OFFSET(0x18ECA8E0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_PLAYTRANSITIONTOCHARGING_OFFSET UNITYSDK_OFFSET(0x18ECB3B0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x18EC9F60)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_REGISTERPROPERTYLISTENER_OFFSET UNITYSDK_OFFSET(0x18EC9B70)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_SETTIPSACTIVE_OFFSET UNITYSDK_OFFSET(0x18ECC710)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_SETUPFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x18EC92B0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_TRYGETLOOPNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x18ECC520)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER_UNREGISTERPROPERTYLISTENER_OFFSET UNITYSDK_OFFSET(0x18ECB060)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECC880)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER__PLAYINTROSEQUENCE_B__48_0_OFFSET UNITYSDK_OFFSET(0x18ECC910)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18ECC920)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECC9C0)
#define MOLEMOLE_UIHACKERCHARGING3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ECC9D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackerCharging3DModelController_TypeDefinitionIndex = 56425;

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
