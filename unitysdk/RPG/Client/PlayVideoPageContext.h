#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_F75F1E7EF80C3D40;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace RPG::GameCore { class VideoConfigRow; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET UNITYSDK_OFFSET(0xC4913D0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xC491110)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0xC4901A0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xC491160)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xC490940)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xC4905A0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xC48FB60)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xC490080)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xC490C30)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET UNITYSDK_OFFSET(0xC490EF0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET UNITYSDK_OFFSET(0xC491040)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xC490D90)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xC490AC0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_OPENMASK_OFFSET UNITYSDK_OFFSET(0xC490250)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SET_VIDEOFULLPATH_OFFSET UNITYSDK_OFFSET(0xC4917E0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0xC491220)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0xC490760)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC4907A0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC48FC10)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xC48F8D0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC48FD70)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0xC490860)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xC490510)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC490140)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC490100)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xC491970)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC4917F0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xC491910)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC4918B0)
#define RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xC491850)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoPageContext_TypeDefinitionIndex = 68119;

	class PlayVideoPageContext : public ::RPG::Client::UIController
	{
	public:
		// static const ::System::Int32 AUDIO_TRACK_COUNT = 0x4; // 0x0
		// static const ::System::Single MASK_TIME; // 0x0
		::System::String* _videoFullPath; // 0x180
		::RPG::Client::LuaUIController* _skilDialog; // 0x188
		::RPG::GameCore::VideoCaptionConfig* _captionConfig; // 0x190
		::RPG::GameCore::VideoConfigRow* _videoConfig; // 0x198
		::System::Boolean _isLoop; // 0x1A0
		::System::Boolean _canSkip; // 0x1A1
		::System::Boolean _isSkipBtnShow; // 0x1A2
		::System::Boolean _isMasking; // 0x1A3
		::System::Boolean _isVideoPlaying; // 0x1A4
		::System::Boolean _hasCaption; // 0x1A5
		::System::Single _maskTimer; // 0x1A8
		::UnityEngine::Color _maskColor; // 0x1AC
		::RPG::Client::LockSource _LockSource; // 0x1BC

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnForceCloseVideo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET))(this, a1);
		}

		::System::Void TickCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_TICKCAPTION_OFFSET))(this);
		}

		::System::Void OnVideoButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnHideButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSkipButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Int32 onLuaCallback(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnSkipActionVerify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET))(this, a1);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDPLAY_OFFSET))(this);
		}

		::System::Void OpenMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_OPENMASK_OFFSET))(this);
		}

		::System::Void BeginFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET))(this);
		}

		::System::Void EndFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET))(this);
		}

		::System::Void FadeOutMask(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET))(this, a1);
		}

		::RPG::GameCore::VideoCaptionConfig* GetVideoCaptionConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::VideoCaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET))(this, a1);
		}

		::System::Void CloseCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET))(this);
		}

		::System::Void ShowCaption(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET))(this, a1);
		}

		::System::Void AdaptMovieImage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET))(this, a1);
		}

		::System::Void set_VideoFullPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_SET_VIDEOFULLPATH_OFFSET))(this, a1);
		}

		::Class_2_F75F1E7EF80C3D40* get__View()
		{
			return ((::Class_2_F75F1E7EF80C3D40*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT_GET__VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy__AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
		}
	};
}
