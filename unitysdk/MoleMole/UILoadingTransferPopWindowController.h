#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/MoleMole/UILoadingTransferPopWindowController_PlayType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_CD3DD745FAE9C3D4;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFullScreenVideoV2PopInLoadingWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_COMPAREPLAYPARAMS_OFFSET UNITYSDK_OFFSET(0x16431970)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_DOSTOPUNTILCHESSBOARDLOADINGFINISH_OFFSET UNITYSDK_OFFSET(0x16431740)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x164303F0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET UNITYSDK_OFFSET(0x16430390)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x16430290)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x16430300)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1642FF30)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x16430080)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x164301A0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISREADY_OFFSET UNITYSDK_OFFSET(0x16430200)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISVIDEOSHOW_OFFSET UNITYSDK_OFFSET(0x16430570)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0x16430070)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_VIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x16430580)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1642FF20)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET UNITYSDK_OFFSET(0x16430A00)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x164308C0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16430630)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONPREPAREFAKELOADING_OFFSET UNITYSDK_OFFSET(0x164319E0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x164306C0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16430590)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x164317C0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1642FF40)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_CURPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x16430400)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_CURVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x164302F0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_ISVIDEOSHOW_OFFSET UNITYSDK_OFFSET(0x16430410)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPANDHIDE_OFFSET UNITYSDK_OFFSET(0x16430DA0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x16431200)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_UPDATEALPHABYISVIDEOSHOW_OFFSET UNITYSDK_OFFSET(0x164304E0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16431A80)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16431A30)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__STOPANDHIDE_B__49_0_OFFSET UNITYSDK_OFFSET(0x16431B10)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16431BE0)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16431C70)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16431C80)
#define MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x16431C90)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingTransferPopWindowController_TypeDefinitionIndex = 77865;

	class UILoadingTransferPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::String** StaticGet_kTranformBattle2ToHollowPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3D6F0);
		}
		static ::System::String** StaticGet_kBattle2ChessboardPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3D6F8);
		}
		static ::System::String** StaticGet_kBattle2ChessboardFakeLoadingPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3D700);
		}
		static ::System::String** StaticGet_kToBattlePath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3D708);
		}
		static ::System::String** StaticGet_kToBattleFakeLoadingPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UILoadingTransferPopWindowController_TypeDefinitionIndex)->GetStaticField(0x3D710);
		}
		::MoleMole::UILoadingTransferPopWindowController_PlayType _CurPlayType_k__BackingField; // 0x310
		::System::Boolean _isVideoShow; // 0x314
		::Class_2_CD3DD745FAE9C3D4* _view; // 0x318
		::System::String* _videoPath; // 0x320
		::MoleMole::MultipleVideoPlayerManager* _multipleVideoPlayerManager; // 0x328
		::System::UInt32 _soundLoadingSignalLostID; // 0x330
		::System::Boolean _isFakeLoadingPlaying; // 0x334
		::System::Boolean _ownFakeLoading; // 0x335
		::System::Action* _OnStopAction; // 0x338
		::MoleMole::UIFullScreenVideoV2PopInLoadingWindowController* _fakeLoadingController; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_IsReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISREADY_OFFSET))(this);
		}

		::System::String* get_CurVideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURVIDEOPATH_OFFSET))(this);
		}

		::System::Void set_CurVideoPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_CURVIDEOPATH_OFFSET))(this, value);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_DURATION_OFFSET))(this);
		}

		::MoleMole::UILoadingTransferPopWindowController_PlayType get_CurPlayType()
		{
			return ((::MoleMole::UILoadingTransferPopWindowController_PlayType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURPLAYTYPE_OFFSET))(this);
		}

		::System::Void set_CurPlayType(::MoleMole::UILoadingTransferPopWindowController_PlayType value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILoadingTransferPopWindowController_PlayType))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_CURPLAYTYPE_OFFSET))(this, value);
		}

		::System::Void set_IsVideoShow(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_SET_ISVIDEOSHOW_OFFSET))(this, value);
		}

		::System::Boolean get_IsVideoShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_ISVIDEOSHOW_OFFSET))(this);
		}

		::MoleMole::MultipleVideoPlayerManager* get_VideoPlayer()
		{
			return ((::MoleMole::MultipleVideoPlayerManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_VIDEOPLAYER_OFFSET))(this);
		}

		::Class_1_E9529ED64113E4E9* get_CurrentVideoPlayerHelper()
		{
			return ((::Class_1_E9529ED64113E4E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitVideoPlayer(::System::String* videoPath, ::System::Boolean loop, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::String* fakeLoadingVideoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET))(this, videoPath, loop, onPrepare, onEnd, fakeLoadingVideoPath);
		}

		::System::Void InitVideoPlayer_1(::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* videoPlayParams, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>* onVideoStartPlay, ::System::String* fakeLoadingVideoPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_2<::MoleMole::MultipleVideoPlayerManager*, ::System::Int32>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET))(this, videoPlayParams, onPrepare, onEnd, onVideoStartPlay, fakeLoadingVideoPath);
		}

		::System::Void StopAndHide(::System::Action* onStopAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPANDHIDE_OFFSET))(this, onStopAction);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_PLAY_OFFSET))(this);
		}

		::System::Boolean ComparePlayParams(::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* videoPlayParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_COMPAREPLAYPARAMS_OFFSET))(this, videoPlayParams);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* DoStopUntilChessboardLoadingFinish()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_DOSTOPUNTILCHESSBOARDLOADINGFINISH_OFFSET))(this);
		}

		::System::Void StopImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_STOPIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnPrepareFakeLoading(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_ONPREPAREFAKELOADING_OFFSET))(this, _);
		}

		::System::Void UpdateAlphaByIsVideoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER_UPDATEALPHABYISVIDEOSHOW_OFFSET))(this);
		}

		::System::Void _StopAndHide_b__49_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER__STOPANDHIDE_B__49_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGTRANSFERPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
