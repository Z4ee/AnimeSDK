#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_2D9FE49A93BEEC6D_1.h"

class Class_1_C36838F99C1670AD;
class Class_2_23D9BB4D5379D91C_6;
class Class_2_6968552DB576BBB3;
namespace MoleMole { class BuddyCameraConfig; }
namespace MoleMole { class BuddyChangeDepthConfig; }
namespace MoleMole { class BuddyDepthConfig; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIModificationShop3DModelController_BuddyFadeGroup; }
namespace MoleMole { class UIModificationShop3DModelController_Context; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class BuddyDiyPageCamera; }
namespace MoleMole::Config { class CameraTargetConfig; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_APPLYCHANGEDEPTH_OFFSET UNITYSDK_OFFSET(0x182FADC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CALCHANGEDEPTH_OFFSET UNITYSDK_OFFSET(0x182FABC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CREATEBUDDYMODEL_OFFSET UNITYSDK_OFFSET(0x182FA740)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CREATEBUDDY_OFFSET UNITYSDK_OFFSET(0x182FB000)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_DESTROYALLBUDDIES_OFFSET UNITYSDK_OFFSET(0x182F9930)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_GETTVSCREEN_OFFSET UNITYSDK_OFFSET(0x182FA080)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_HIDETV_OFFSET UNITYSDK_OFFSET(0x182FBB20)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_INITBUDDYCAMERA_OFFSET UNITYSDK_OFFSET(0x182F9000)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182F9320)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182F9470)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182F8150)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x182F93B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYBUDDYANI_OFFSET UNITYSDK_OFFSET(0x182FAB50)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYENTEREDITOREFFECT_OFFSET UNITYSDK_OFFSET(0x182FBDB0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYEXITEDITOREFFECT_OFFSET UNITYSDK_OFFSET(0x182FBDF0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYFIRSTBUDDY_OFFSET UNITYSDK_OFFSET(0x182FA560)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYSWITCHBUDDY_OFFSET UNITYSDK_OFFSET(0x182FA380)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_REMOVEBUDDY_OFFSET UNITYSDK_OFFSET(0x182FBBE0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_RESERGAMEPADCONTROL_OFFSET UNITYSDK_OFFSET(0x182F9C80)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x182FB4A0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYEDITORCAMERAPOS_OFFSET UNITYSDK_OFFSET(0x182FB310)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYINITCAMERA_OFFSET UNITYSDK_OFFSET(0x182FBAC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETCURRENTBUDDY_OFFSET UNITYSDK_OFFSET(0x182FA0F0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SHOWTV_OFFSET UNITYSDK_OFFSET(0x182FB3F0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKDEPTH_OFFSET UNITYSDK_OFFSET(0x182F9FF0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKGAMEPADCONTROL_OFFSET UNITYSDK_OFFSET(0x182F9BC0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x182F9D10)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x182FBE30)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x182FC070)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182FC100)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x182FC110)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x182FC120)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_TypeDefinitionIndex = 67399;

	class UIModificationShop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* TV_FadeIn; // 0x0
		// static const ::System::String* TV_FadeOut; // 0x0
		// static const ::System::String* buddy_editor_ani_enter; // 0x0
		// static const ::System::String* buddy_editor_ani_exit; // 0x0
		// static const ::System::String* Play_EnterEditor_Effect; // 0x0
		// static const ::System::String* Play_ExitEditor_Effect; // 0x0
		::Class_2_23D9BB4D5379D91C_6* _view; // 0x360
		::MoleMole::UIModificationShop3DModelController_Context* _context; // 0x368
		::System::Boolean isFade; // 0x370
		::MoleMole::UIModificationShop3DModelController_BuddyFadeGroup* switchBuddy; // 0x378
		::UnityEngine::Animator* currentBuddyAni; // 0x380
		::System::Single timeCount; // 0x388
		::System::Boolean isStartTimeCount; // 0x38C
		::MoleMole::BuddyCameraConfig* moveTarget; // 0x390
		::Class_2_6968552DB576BBB3* _cameraClipRoot; // 0x398
		::System::String* _camera_born_key; // 0x3A0
		::System::String* _camera_editor_key; // 0x3A8
		::System::String* _camera_init_key; // 0x3B0
		::System::String* _camera_page_key; // 0x3B8
		::System::String* _currentCameraKey; // 0x3C0
		::MoleMole::Config::BuddyDiyPageCamera* _cameraConfig; // 0x3C8
		::MoleMole::Config::CameraTargetConfig* bornConfig; // 0x3D0
		::MoleMole::Config::CameraTargetConfig* initConfig; // 0x3D8
		::MoleMole::Config::CameraTargetConfig* editorConfig; // 0x3E0
		::UnityEngine::Animation* TVAni; // 0x3E8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* cacheBuddyEntityDic; // 0x3F0
		::System::Boolean isEditorMode; // 0x3F8
		::System::Single GamePad_Select_Timer; // 0x3FC
		::System::Single GamePad_Select_Inteval; // 0x400
		::MoleMole::BuddyChangeDepthConfig* _buddyChangeDepthConfig; // 0x408
		::MoleMole::BuddyDepthConfig* changingConfig; // 0x410
		::System::Boolean isStartChangeDepth; // 0x418
		::UnityEngine::Rendering::Universal::DepthOfField* volumeDepthRef; // 0x420
		::System::Single depthChangeTimer; // 0x428
		::System::Boolean isForward; // 0x42C
		::System::Collections::Generic::List_1<::Struct_2_2D9FE49A93BEEC6D_1>* waitFadeActions; // 0x430
		::System::Int32 currentBuddy; // 0x438
		::System::Int32 willRemoveBuddy; // 0x43C
		::System::Boolean isPlayBuddySwitchAni; // 0x440

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TickGamePadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKGAMEPADCONTROL_OFFSET))(this);
		}

		::System::Void ReserGamePadControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_RESERGAMEPADCONTROL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTVScreen()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_GETTVSCREEN_OFFSET))(this);
		}

		::System::Void SetCurrentBuddy(::Class_1_C36838F99C1670AD* buddyData, ::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C36838F99C1670AD*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETCURRENTBUDDY_OFFSET))(this, buddyData, isLeft);
		}

		::System::Void PlayFirstBuddy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYFIRSTBUDDY_OFFSET))(this);
		}

		::System::Void PlaySwitchBuddy(::System::Boolean isLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYSWITCHBUDDY_OFFSET))(this, isLeft);
		}

		::System::Void PlayBuddyAni(::UnityEngine::Animator* animator, ::System::String* aniTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYBUDDYANI_OFFSET))(this, animator, aniTrigger);
		}

		::System::Void TickDepth(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKDEPTH_OFFSET))(this, deltaTime);
		}

		::System::Void CalChangeDepth(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CALCHANGEDEPTH_OFFSET))(this, deltaTime);
		}

		::System::Void ApplyChangeDepth()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_APPLYCHANGEDEPTH_OFFSET))(this);
		}

		::UnityEngine::Animator* CreateBuddyModel(::Class_1_C36838F99C1670AD* buddyData)
		{
			return ((::UnityEngine::Animator*(*)(::PVOID, ::Class_1_C36838F99C1670AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CREATEBUDDYMODEL_OFFSET))(this, buddyData);
		}

		::System::Void SetBuddyEditorCameraPos(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYEDITORCAMERAPOS_OFFSET))(this, arg);
		}

		::System::Void InitBuddyCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_INITBUDDYCAMERA_OFFSET))(this);
		}

		::System::Void SetBuddyInitCamera(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYINITCAMERA_OFFSET))(this, arg);
		}

		::System::Void SetBuddyCameraConfig(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYCAMERACONFIG_OFFSET))(this, key);
		}

		::System::Void ShowTV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SHOWTV_OFFSET))(this);
		}

		::System::Void HideTV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_HIDETV_OFFSET))(this);
		}

		::System::Void DestroyAllBuddies()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_DESTROYALLBUDDIES_OFFSET))(this);
		}

		::MoleMole::Battle::Entity* CreateBuddy(::Class_1_C36838F99C1670AD* buddyData)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::Class_1_C36838F99C1670AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CREATEBUDDY_OFFSET))(this, buddyData);
		}

		::System::Void RemoveBuddy(::System::Int32 buddyID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_REMOVEBUDDY_OFFSET))(this, buddyID);
		}

		::System::Void PlayEnterEditorEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYENTEREDITOREFFECT_OFFSET))(this);
		}

		::System::Void PlayExitEditorEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYEXITEDITOREFFECT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
