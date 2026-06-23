#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/MultipleVideoPlayerManager_PlayParam.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_E9529ED64113E4E9;
class Class_2_4213727AF74D4ECF;
namespace MoleMole { class MultipleVideoPlayerManager; }
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET UNITYSDK_OFFSET(0x166D2820)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x166D17E0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_ISPREPARED_OFFSET UNITYSDK_OFFSET(0x166D2790)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0x166D17F0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x166D17D0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET UNITYSDK_OFFSET(0x166D2010)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_2_OFFSET UNITYSDK_OFFSET(0x166D21D0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET UNITYSDK_OFFSET(0x166D1DD0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166D1B30)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONFULLSCREENVIDEORAWIMAGEANIM_OFFSET UNITYSDK_OFFSET(0x166D1A70)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x166D1BC0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166D1D60)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166D1800)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAYBYINDEX_OFFSET UNITYSDK_OFFSET(0x166D26A0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0x166D2380)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_SETALPHA_OFFSET UNITYSDK_OFFSET(0x166D19F0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0x166D2730)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_TRYPLAY_OFFSET UNITYSDK_OFFSET(0x166D23E0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x166D2880)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166D28E0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166D29B0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x166D28F0)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166D2A40)
#define MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166D2A50)

namespace MoleMole
{
	inline static constexpr unsigned int UIFullScreenVideoV2PopWindowController_TypeDefinitionIndex = 87130;

	class UIFullScreenVideoV2PopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_4213727AF74D4ECF* _view; // 0x318
		::MoleMole::MultipleVideoPlayerManager* _multipleVideoPlayerManager; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnFullScreenVideoRawImageAnim(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONFULLSCREENVIDEORAWIMAGEANIM_OFFSET))(this, obj);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitVideoPlayer(::System::String* relativeUrl, ::System::Boolean loop, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* onPrepare, ::System::Action_1<::Class_1_E9529ED64113E4E9*>* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*, ::System::Action_1<::Class_1_E9529ED64113E4E9*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_OFFSET))(this, relativeUrl, loop, onPrepare, onEnd);
		}

		::System::Void InitVideoPlayer_1(::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>* paramList, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd, ::System::Boolean onlyPrepare)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::MultipleVideoPlayerManager_PlayParam>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_1_OFFSET))(this, paramList, onPrepare, onEnd, onlyPrepare);
		}

		::System::Void InitVideoPlayer_2(::System::String* videoGroupKey, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onPrepare, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*, ::System::Action_1<::MoleMole::MultipleVideoPlayerManager*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_INITVIDEOPLAYER_2_OFFSET))(this, videoGroupKey, onPrepare, onEnd);
		}

		::System::Void Play(::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAY_OFFSET))(this, onEnd);
		}

		::System::Void TryPlay(::System::Action* onEnd, ::System::Boolean& isPreparing, ::System::Action* prepareFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean&, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_TRYPLAY_OFFSET))(this, onEnd, isPreparing, prepareFinished);
		}

		::System::Void PlayByIndex(::System::Int32 index, ::System::Boolean autoPlay, ::System::Action* onPlayNext, ::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_PLAYBYINDEX_OFFSET))(this, index, autoPlay, onPlayNext, onEnd);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void SetAlpha(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_SETALPHA_OFFSET))(this, v);
		}

		::System::Boolean get_IsPrePared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_ISPREPARED_OFFSET))(this);
		}

		::Class_1_E9529ED64113E4E9* get_CurrentVideoPlayerHelper()
		{
			return ((::Class_1_E9529ED64113E4E9*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_GET_CURRENTVIDEOPLAYERHELPER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFULLSCREENVIDEOV2POPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
