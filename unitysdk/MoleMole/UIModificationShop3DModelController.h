#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_2D9FE49A93BEEC6D_1.h"

class Class_1_C36838F99C1670AD;
class Class_2_23D9BB4D5379D91C_1;
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

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_APPLYCHANGEDEPTH_OFFSET UNITYSDK_OFFSET(0x12DF21F0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CALCHANGEDEPTH_OFFSET UNITYSDK_OFFSET(0x12DF1FF0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CREATEBUDDYMODEL_OFFSET UNITYSDK_OFFSET(0x12DF1B70)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_CREATEBUDDY_OFFSET UNITYSDK_OFFSET(0x12DF2430)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_DESTROYALLBUDDIES_OFFSET UNITYSDK_OFFSET(0x12DF0D50)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_GETTVSCREEN_OFFSET UNITYSDK_OFFSET(0x12DF14B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_HIDETV_OFFSET UNITYSDK_OFFSET(0x12DF2F40)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_INITBUDDYCAMERA_OFFSET UNITYSDK_OFFSET(0x12DF0620)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12DF0940)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12DF0A90)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12DEF770)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12DF09D0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYBUDDYANI_OFFSET UNITYSDK_OFFSET(0x12DF1F80)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYENTEREDITOREFFECT_OFFSET UNITYSDK_OFFSET(0x12DF31D0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYEXITEDITOREFFECT_OFFSET UNITYSDK_OFFSET(0x12DF3210)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYFIRSTBUDDY_OFFSET UNITYSDK_OFFSET(0x12DF1990)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_PLAYSWITCHBUDDY_OFFSET UNITYSDK_OFFSET(0x12DF17B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_REMOVEBUDDY_OFFSET UNITYSDK_OFFSET(0x12DF3000)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_RESERGAMEPADCONTROL_OFFSET UNITYSDK_OFFSET(0x12DF10B0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYCAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x12DF28C0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYEDITORCAMERAPOS_OFFSET UNITYSDK_OFFSET(0x12DF2730)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETBUDDYINITCAMERA_OFFSET UNITYSDK_OFFSET(0x12DF2EE0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SETCURRENTBUDDY_OFFSET UNITYSDK_OFFSET(0x12DF1520)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_SHOWTV_OFFSET UNITYSDK_OFFSET(0x12DF2810)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKDEPTH_OFFSET UNITYSDK_OFFSET(0x12DF1420)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_TICKGAMEPADCONTROL_OFFSET UNITYSDK_OFFSET(0x12DF0FF0)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12DF1140)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12DF3250)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12DF3490)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12DF3520)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12DF3530)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12DF3540)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_TypeDefinitionIndex = 77491;

	class UIModificationShop3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		// static const ::System::String* TV_FadeIn; // 0x0
		// static const ::System::String* TV_FadeOut; // 0x0
		// static const ::System::String* buddy_editor_ani_enter; // 0x0
		// static const ::System::String* buddy_editor_ani_exit; // 0x0
		// static const ::System::String* Play_EnterEditor_Effect; // 0x0
		// static const ::System::String* Play_ExitEditor_Effect; // 0x0
		::Class_2_23D9BB4D5379D91C_1* _view; // 0x358
		::MoleMole::UIModificationShop3DModelController_Context* _context; // 0x360
		::System::Boolean isFade; // 0x368
		::MoleMole::UIModificationShop3DModelController_BuddyFadeGroup* switchBuddy; // 0x370
		::UnityEngine::Animator* currentBuddyAni; // 0x378
		::System::Single timeCount; // 0x380
		::System::Boolean isStartTimeCount; // 0x384
		::MoleMole::BuddyCameraConfig* moveTarget; // 0x388
		::Class_2_6968552DB576BBB3* _cameraClipRoot; // 0x390
		::System::String* _camera_born_key; // 0x398
		::System::String* _camera_editor_key; // 0x3A0
		::System::String* _camera_init_key; // 0x3A8
		::System::String* _camera_page_key; // 0x3B0
		::System::String* _currentCameraKey; // 0x3B8
		::MoleMole::Config::BuddyDiyPageCamera* _cameraConfig; // 0x3C0
		::MoleMole::Config::CameraTargetConfig* bornConfig; // 0x3C8
		::MoleMole::Config::CameraTargetConfig* initConfig; // 0x3D0
		::MoleMole::Config::CameraTargetConfig* editorConfig; // 0x3D8
		::UnityEngine::Animation* TVAni; // 0x3E0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* cacheBuddyEntityDic; // 0x3E8
		::System::Boolean isEditorMode; // 0x3F0
		::System::Single GamePad_Select_Timer; // 0x3F4
		::System::Single GamePad_Select_Inteval; // 0x3F8
		::MoleMole::BuddyChangeDepthConfig* _buddyChangeDepthConfig; // 0x400
		::MoleMole::BuddyDepthConfig* changingConfig; // 0x408
		::System::Boolean isStartChangeDepth; // 0x410
		::UnityEngine::Rendering::Universal::DepthOfField* volumeDepthRef; // 0x418
		::System::Single depthChangeTimer; // 0x420
		::System::Boolean isForward; // 0x424
		::System::Collections::Generic::List_1<::Struct_2_2D9FE49A93BEEC6D_1>* waitFadeActions; // 0x428
		::System::Int32 currentBuddy; // 0x430
		::System::Int32 willRemoveBuddy; // 0x434
		::System::Boolean isPlayBuddySwitchAni; // 0x438

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
