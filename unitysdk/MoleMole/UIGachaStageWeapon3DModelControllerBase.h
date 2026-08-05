#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase.h"
#include "unitysdk/MoleMole/UIGachaStage3DModelControllerBase_UITextInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_208CC9941471731A_1178;
class Class_2_208CC9941471731A_52;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET UNITYSDK_OFFSET(0x170EB240)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETINITEULER_OFFSET UNITYSDK_OFFSET(0x170E7A00)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET UNITYSDK_OFFSET(0x170EB1E0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETSTAYEULER_OFFSET UNITYSDK_OFFSET(0x170E7AC0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET UNITYSDK_OFFSET(0x170EB2C0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISANGLEFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0x170EB310)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0x170EB300)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET UNITYSDK_OFFSET(0x170EB2B0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET UNITYSDK_OFFSET(0x170EB2A0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x170E9010)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x170E8600)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET UNITYSDK_OFFSET(0x170EAFA0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x170EAF50)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x170E8F70)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET UNITYSDK_OFFSET(0x170E9310)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET UNITYSDK_OFFSET(0x170E90F0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0x170E7740)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISANGLEFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0x170E8F00)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISFLOATINGACTIVE_OFFSET UNITYSDK_OFFSET(0x170E8B80)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x170E8390)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_TRYHANDLESPECIALWEAPONROTATE_OFFSET UNITYSDK_OFFSET(0x170E8110)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEANGLEFLOATING_OFFSET UNITYSDK_OFFSET(0x170E8BF0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEFLOATING_OFFSET UNITYSDK_OFFSET(0x170E8960)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEROTATEWEAPON_OFFSET UNITYSDK_OFFSET(0x170E7B80)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x170EB320)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET UNITYSDK_OFFSET(0x170EB410)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET UNITYSDK_OFFSET(0x170EB420)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET UNITYSDK_OFFSET(0x170EB4B0)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET UNITYSDK_OFFSET(0x170EB540)
#define MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET UNITYSDK_OFFSET(0x170EB5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaStageWeapon3DModelControllerBase_TypeDefinitionIndex = 56911;

	class UIGachaStageWeapon3DModelControllerBase : public ::MoleMole::UIGachaStage3DModelControllerBase
	{
	public:
		// static const ::System::Single kPerlinToSinSpeedFactor; // 0x0
		::System::String* CamRotDuration; // 0x648
		::System::String* MidUITextMats; // 0x650
		::System::String* MidUITextRoot; // 0x658
		::System::String* MidUITextMoveDistance; // 0x660
		::System::String* WeaponRotDuration; // 0x668
		::System::String* CamShakeDelay; // 0x670
		::System::String* TriggerWeaponGachaDelay; // 0x678
		::System::String* WeaponMats; // 0x680
		::System::String* WeaponLightColorProperty; // 0x688
		::System::String* WeaponLightColorIntensity; // 0x690
		::System::String* WeaponLightColorIntensityCurve; // 0x698
		::System::String* WeaponLightColorIntensityDuration; // 0x6A0
		::System::String* _LightColorReplace; // 0x6A8
		::UnityEngine::Transform* _itemPosTrans; // 0x6B0
		::UnityEngine::Transform* _topLight; // 0x6B8
		::UnityEngine::Transform* _faceLight; // 0x6C0
		::UnityEngine::Transform* _midUITextRoot; // 0x6C8
		::UnityEngine::Transform* _midUITextParent; // 0x6D0
		::UnityEngine::Transform* _uiTextMid; // 0x6D8
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo1; // 0x6E0
		::UnityEngine::GameObject* _monoCGCustomGlobalAnimationGo2; // 0x6E8
		::UnityEngine::Animator* _gachaStage_bangboo_object; // 0x6F0
		::UnityEngine::Animator* _gachaStage_bangboo_object_table; // 0x6F8
		::Class_2_208CC9941471731A_1178* _weaponPerformTemplate; // 0x700
		::System::Boolean _isRotActive; // 0x708
		::System::Boolean _isFloatingActive; // 0x709
		::System::Single _floatingDelayTimer; // 0x70C
		::System::Boolean _isAngleFloatingActive; // 0x710
		::System::Single _angleFloatingDelayTimer; // 0x714
		::UnityEngine::AnimationCurve* _rotCurve; // 0x718
		::UnityEngine::Vector3 _originEuler; // 0x720
		::UnityEngine::Vector3 _rotEuler; // 0x72C
		::System::Single _rotTimer; // 0x738
		::System::Single _rotDuration; // 0x73C
		::System::Single _floatTime; // 0x740
		::System::Single _angleTime; // 0x744
		::UnityEngine::Quaternion _baseLocalRot; // 0x748
		::MoleMole::UIGachaStage3DModelControllerBase_UITextInfo _midUITextInfo; // 0x758
		::System::Boolean _angleFloatingTag; // 0x788
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>* _weaponMats; // 0x790

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE__CTOR_OFFSET))(this);
		}

		::System::Void RotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ROTATEWEAPON_OFFSET))(this);
		}

		::System::Void TryHandleSpecialWeaponRotate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_TRYHANDLESPECIALWEAPONROTATE_OFFSET))(this);
		}

		::System::Void StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_STOPSOUND_OFFSET))(this);
		}

		::System::Void HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Void OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Void HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void UpdateRotateWeapon()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEROTATEWEAPON_OFFSET))(this);
		}

		::System::Void UpdateFloating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEFLOATING_OFFSET))(this);
		}

		::System::Void UpdateAngleFloating()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_UPDATEANGLEFLOATING_OFFSET))(this);
		}

		::System::Void PreloadStageBeforePlay(::Class_2_208CC9941471731A_52* template_, ::System::Action* preloadComplete)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_52*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_PRELOADSTAGEBEFOREPLAY_OFFSET))(this, template_, preloadComplete);
		}

		::System::Void OnRefreshStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ONREFRESHSTAGE_OFFSET))(this);
		}

		::System::Boolean IsVideoTvIndex(::System::Int32 tvIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_ISVIDEOTVINDEX_OFFSET))(this, tvIndex);
		}

		::UnityEngine::Vector3 GetInitEuler(::System::Int32 weaponItemID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETINITEULER_OFFSET))(this, weaponItemID);
		}

		::UnityEngine::Vector3 GetStayEuler(::System::Int32 weaponItemID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETSTAYEULER_OFFSET))(this, weaponItemID);
		}

		::System::Void InitLights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_INITLIGHTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetLightIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETLIGHTIDS_OFFSET))(this);
		}

		::System::String* GetCharacterLightsTLPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GETCHARACTERLIGHTSTLPATH_OFFSET))(this);
		}

		::System::Int32 get_TOTAL_TV_NUM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_TOTAL_TV_NUM_OFFSET))(this);
		}

		::System::Int32 get_RARITY_TV_INDEX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_RARITY_TV_INDEX_OFFSET))(this);
		}

		::System::String* get_BLUEPRINT_NAME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_BLUEPRINT_NAME_OFFSET))(this);
		}

		::System::Boolean get_isFloatingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISFLOATINGACTIVE_OFFSET))(this);
		}

		::System::Void set_isFloatingActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISFLOATINGACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_isAngleFloatingActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_GET_ISANGLEFLOATINGACTIVE_OFFSET))(this);
		}

		::System::Void set_isAngleFloatingActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE_SET_ISANGLEFLOATINGACTIVE_OFFSET))(this, value);
		}

		::System::Void __base_HandleOnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEONOPEN_OFFSET))(this);
		}

		::System::Void __base_HandleUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_HANDLEUPDATE_OFFSET))(this);
		}

		::System::Boolean __base_IsVideoTvIndex(::System::Int32 P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ISVIDEOTVINDEX_OFFSET))(this, P0);
		}

		::System::Void __base_OnCameraShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_ONCAMERASHAKE_OFFSET))(this);
		}

		::System::Void __base_StopSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHASTAGEWEAPON3DMODELCONTROLLERBASE___BASE_STOPSOUND_OFFSET))(this);
		}
	};
}
