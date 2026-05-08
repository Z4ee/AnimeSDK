#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIYorozuyaVideoInfoStoryPageController___c__DisplayClass10_0.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A047EA5169B6B30F;
class Class_1_E9529ED64113E4E9;
class Class_2_0A55B5A82A61DAFA_2;
class Class_2_1A39E1B51756BF41;
class Class_2_33EA27A25F076E07;
class Class_2_47BEEACD66EA947F;
class Class_2_79F6D62CE30E3F8E_26;
class Class_2_D6F9B792012303A1;
class Class_2_E664D9FA0EBE07B0;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralPopUpArrowWidgetController; }
namespace MoleMole { class UIMainStoryRow03ChildWindowController; }
namespace MoleMole { class UITapesGroup3DModelController; }
namespace MoleMole::Config { class UIAnimDelayPara; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GETYOROZUYAVIDEOURL_OFFSET UNITYSDK_OFFSET(0xE861F80)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_ISSHOW2DUI_OFFSET UNITYSDK_OFFSET(0xE8628C0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xE85EF90)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE85F540)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE85F880)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE85EFA0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_OVERRIDELOOPTEXT_OFFSET UNITYSDK_OFFSET(0xE861C20)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_PLAYMAPLOGO_OFFSET UNITYSDK_OFFSET(0xE862770)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0xE860FE0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHRECOMMENDEDHITTYPES_OFFSET UNITYSDK_OFFSET(0xE8613F0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHVIDEOVIEW_OFFSET UNITYSDK_OFFSET(0xE8623D0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETCOMPLEXITYINFO_OFFSET UNITYSDK_OFFSET(0xE860820)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETLEVELINFO_OFFSET UNITYSDK_OFFSET(0xE8619B0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETNOISE_OFFSET UNITYSDK_OFFSET(0xE85F620)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETVIDEINFO_OFFSET UNITYSDK_OFFSET(0xE860B10)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SET_ISSHOW2DUI_OFFSET UNITYSDK_OFFSET(0xE8628B0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_UPDATELEFTVIEW_OFFSET UNITYSDK_OFFSET(0xE85FAE0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE8628D0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__REFRESHVIDEOVIEW_B__15_0_OFFSET UNITYSDK_OFFSET(0xE862A40)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETCOMPLEXITYINFO_G__SETTIMECOST_10_0_OFFSET UNITYSDK_OFFSET(0xE861E80)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETVIDEINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0xE862A00)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__VIDEOPLAYER_PREPARECOMPLETED_OFFSET UNITYSDK_OFFSET(0xE85F5D0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE862A50)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE862AE0)
#define MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE862B70)

namespace MoleMole
{
	inline static constexpr unsigned int UIYorozuyaVideoInfoStoryPageController_TypeDefinitionIndex = 52555;

	class UIYorozuyaVideoInfoStoryPageController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 MAX_RECOMMENDEDHITTYPES_COUNT = 0x2; // 0x0
		::Class_2_79F6D62CE30E3F8E_26* _view; // 0x2B8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lastSelectVideoDir; // 0x2C0
		::System::Boolean _isLevelFadeIn; // 0x2C8
		::System::Boolean _isMoving; // 0x2C9
		::System::Boolean isStartPerformFinish; // 0x2CA
		::System::Action* _startPerformFinishAction; // 0x2D0
		::MoleMole::Config::UIAnimDelayPara* _delayPara; // 0x2D8
		::MoleMole::UITapesGroup3DModelController* _tapesGroup; // 0x2E0
		::System::Int32 _curArchiveType; // 0x2E8
		::System::Int32 _curVHSTemplateID; // 0x2EC
		::Class_2_33EA27A25F076E07* _mainStoryModel; // 0x2F0
		::System::Single _dragBegTimeStamp; // 0x2F8
		::System::Single _dragEndTimeStamp; // 0x2FC
		::UnityEngine::Vector3 _dragBegPosition; // 0x300
		::UnityEngine::Vector3 _dragEndPosition; // 0x30C
		::MoleMole::UIMainStoryRow03ChildWindowController* _selectRow; // 0x318
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x320
		::UnityEngine::UI::RawImage* _videoRawImg; // 0x328
		::System::Int32 _curDiff; // 0x330
		::System::Boolean _isShow2DUI; // 0x334
		::System::Single stickPressTimeCount; // 0x338
		::System::String* curVideoUrl; // 0x340
		::Class_2_D6F9B792012303A1* _fromBattleTaskCompletionSource; // 0x348
		::System::Boolean _showTapeDeckInfo; // 0x350
		::UnityEngine::RectTransform* _currentScrollToTarget; // 0x358
		::System::Boolean _needScrollToTarget; // 0x360
		::System::Boolean _personalWaitStartPerformFinish; // 0x361
		::System::Boolean _ignoreInProgressTips; // 0x362
		::MoleMole::UIGeneralBottomRewardInfoWidgetController* _bottomRewardInfo; // 0x368
		::MoleMole::UIGeneralPopUpArrowWidgetController* _leftPopupArrowWidget; // 0x370
		::MoleMole::UIGeneralPopUpArrowWidgetController* _rightPopupArrowWidget; // 0x378
		::Class_1_A047EA5169B6B30F* _selectQuestInfo; // 0x380
		::Class_2_E664D9FA0EBE07B0* questModel; // 0x388
		::Class_2_47BEEACD66EA947F* _yorozuyaModel; // 0x390
		::Il2CppArray<::Class_2_1A39E1B51756BF41*>* _rewardTypeIcons; // 0x398
		::Class_2_0A55B5A82A61DAFA_2* _selectQuestConfig; // 0x3A0
		::UnityEngine::Material* difficutyVideoMaterial; // 0x3A8
		::System::UInt32 leftVideoSoundPlayID; // 0x3B0
		::System::Boolean isOpenVideoPanel; // 0x3B4
		::Foundation::AssetRequestHandle _aniCloneMatHandle; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void _videoPlayer_prepareCompleted(::Class_1_E9529ED64113E4E9* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__VIDEOPLAYER_PREPARECOMPLETED_OFFSET))(this, source);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateLeftView(::Class_2_0A55B5A82A61DAFA_2* _questConfig)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0A55B5A82A61DAFA_2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_UPDATELEFTVIEW_OFFSET))(this, _questConfig);
		}

		::System::Void SetLevelInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETLEVELINFO_OFFSET))(this);
		}

		::System::Void OverrideLoopText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_OVERRIDELOOPTEXT_OFFSET))(this, text);
		}

		::System::Void SetComplexityInfo(::System::String* complexity)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETCOMPLEXITYINFO_OFFSET))(this, complexity);
		}

		::System::Void SetVideInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETVIDEINFO_OFFSET))(this);
		}

		::System::String* GetYorozuyaVideoUrl(::System::Int32 hollowConfigID)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GETYOROZUYAVIDEOURL_OFFSET))(this, hollowConfigID);
		}

		::System::Void SetNoise()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SETNOISE_OFFSET))(this);
		}

		::System::Void RefreshVideoView(::System::String* videoUrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHVIDEOVIEW_OFFSET))(this, videoUrl);
		}

		::System::Void RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void RefreshRecommendedHitTypes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_REFRESHRECOMMENDEDHITTYPES_OFFSET))(this);
		}

		::System::Void PlayMapLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_PLAYMAPLOGO_OFFSET))(this);
		}

		::System::Void set_IsShow2DUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_SET_ISSHOW2DUI_OFFSET))(this, value);
		}

		::System::Boolean get_IsShow2DUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER_GET_ISSHOW2DUI_OFFSET))(this);
		}

		static ::System::Void _SetComplexityInfo_g__SetTimeCost_10_0(::System::Int32 c, ::MoleMole::UIYorozuyaVideoInfoStoryPageController___c__DisplayClass10_0& a2)
		{
			return ((::System::Void(*)(::System::Int32, ::MoleMole::UIYorozuyaVideoInfoStoryPageController___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETCOMPLEXITYINFO_G__SETTIMECOST_10_0_OFFSET))(c, a2);
		}

		::System::Void _SetVideInfo_b__11_0(::Class_1_E9529ED64113E4E9* vp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__SETVIDEINFO_B__11_0_OFFSET))(this, vp);
		}

		::System::Void _RefreshVideoView_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER__REFRESHVIDEOVIEW_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIYOROZUYAVIDEOINFOSTORYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
