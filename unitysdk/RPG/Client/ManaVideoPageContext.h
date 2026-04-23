#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/Client/ManaVideoPageContext_VideoPlayStep.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_E3AFB73B0489B5D0;
class Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242;
namespace CriWare { class CriManaMovieControllerForUI; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET UNITYSDK_OFFSET(0xA77E270)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xA77E0B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA77F660)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0xA77F580)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA77E690)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_DESTROYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA77FA90)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xA77F6A0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xA77D230)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_EXITDIALOG_OFFSET UNITYSDK_OFFSET(0xA77F730)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xA77C850)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xA77B230)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xA77DDD0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xA77BCB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA77D680)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET UNITYSDK_OFFSET(0xA77D4D0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA77E880)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET UNITYSDK_OFFSET(0xA77EF40)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIEEND_OFFSET UNITYSDK_OFFSET(0xA77E100)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIESTART_OFFSET UNITYSDK_OFFSET(0xA77DED0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA77EB60)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET UNITYSDK_OFFSET(0xA77EE10)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET UNITYSDK_OFFSET(0xA77F090)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA77E960)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xA77E720)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_OPENMASK_OFFSET UNITYSDK_OFFSET(0xA77BFC0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_PREPARETICK_OFFSET UNITYSDK_OFFSET(0xA77DC70)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET UNITYSDK_OFFSET(0xA77F5E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET UNITYSDK_OFFSET(0xA77BEB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0xA77F4B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0xA77C9E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET UNITYSDK_OFFSET(0xA77CF60)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET UNITYSDK_OFFSET(0xA77C750)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA77D120)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xA77FB30)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0xA77F250)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET UNITYSDK_OFFSET(0xA77C480)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA77B2E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA77AD90)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA77BA80)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__GETWAITEXITFRAME_OFFSET UNITYSDK_OFFSET(0xA77F780)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0xA77C1B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA77D1D0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0xA77D5B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xA77C400)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET UNITYSDK_OFFSET(0xA77BD60)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA77BCF0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xA77FC80)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xA77FB50)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xA77FCE0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xA77FC10)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xA77FBB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPageContext_TypeDefinitionIndex = 67172;

	class ManaVideoPageContext : public ::RPG::Client::UIController
	{
	public:
		static ::System::Int32* StaticGet_WAIT_TRIGGER_CUSTOM_STRING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoPageContext_TypeDefinitionIndex)->GetStaticField(0x78A0);
		}
		static ::System::Int32* StaticGet_WAIT_DIALOG_FRAME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoPageContext_TypeDefinitionIndex)->GetStaticField(0x78A4);
		}
		static ::System::Int32* StaticGet_WAIT_CRACK_FRAME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoPageContext_TypeDefinitionIndex)->GetStaticField(0x78A8);
		}
		// static const ::System::Single _WAIT_NO_LOG_ERROR_PAUSE_MAX_TIME; // 0x0
		// static const ::System::Single MASK_TIME; // 0x0
		::CriWare::CriManaMovieControllerForUI* _movieControllerForUI; // 0x180
		::RPG::Client::LuaUIController* _skilDialog; // 0x188
		::System::String* _videoFullPath; // 0x190
		::Il2CppArray<::RPG::GameCore::VideoCaption*>* _ActiveCaptionConfig; // 0x198
		::RPG::GameCore::VideoCaptionConfig* _captionConfig; // 0x1A0
		::System::Boolean _canSkip; // 0x1A8
		::System::Boolean _isMasking; // 0x1A9
		::System::Boolean _isDebug; // 0x1AA
		::System::Boolean _isLoop; // 0x1AB
		::UnityEngine::Color _maskColor; // 0x1AC
		::System::Single _lastVideoTime; // 0x1BC
		::System::UInt32 _blockUID; // 0x1C0
		::RPG::Client::LockSource _LockSource; // 0x1C4
		::System::Boolean _hasCaption; // 0x1C8
		::System::Boolean _isVideoPlaying; // 0x1C9
		::System::Boolean _HasSend_VideoNearlyEnd; // 0x1CA
		::System::Single _maskTimer; // 0x1CC
		::CriWare::CriMana::Player_Status _lastPlayerStatus; // 0x1D0
		::System::UInt64 _NoLogErrorPauseFrameTime; // 0x1D8
		::System::Single _EndBlackBeforeTime; // 0x1E0
		::System::UInt32 _videoID; // 0x1E4
		::System::UInt64 _videoKey; // 0x1E8
		::System::Single _NoLogErrorPauseTime; // 0x1F0
		::RPG::Client::ManaVideoPageContext_VideoPlayStep _videoStep; // 0x1F4
		::System::UInt32 _PerformanceID; // 0x1F8
		::System::Int32 _controllerRuntimeID; // 0x1FC

		::System::Void _ctor(::System::UInt32 videoID, ::System::UInt32 performanceID, ::System::Boolean canSkip, ::System::Boolean isLoop, ::System::Boolean lockSound, ::System::String* overrideCaptionPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_OFFSET))(this, videoID, performanceID, canSkip, isLoop, lockSound, overrideCaptionPath);
		}

		::System::Void _ctor_1(::System::String* filePath, ::System::UInt32 videoID, ::System::Boolean isVideo, ::System::Boolean isLoopCG, ::System::Boolean isGuideVideo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_1_OFFSET))(this, filePath, videoID, isVideo, isLoopCG, isGuideVideo);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CCTOR_OFFSET))();
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET))(this, deltaSecond);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void MuteCamera(::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET))(this, isMute);
		}

		::System::Void _OnForceCloseVideo(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET))(this, arg);
		}

		::System::Void TickVideoStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET))(this);
		}

		::System::Void _CheckNoLogErrorPause(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET))(this, deltaSecond);
		}

		::System::Void OnMovieStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIESTART_OFFSET))(this);
		}

		::System::Void OnMovieEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIEEND_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void PrepareTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_PREPARETICK_OFFSET))(this);
		}

		::System::Void CuePointCallback(::CriWare::CriMana::EventPoint& eventPoint)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET))(this, eventPoint);
		}

		::RPG::GameCore::VideoCaptionConfig* GetVideoCaptionConfig(::System::String* captionPath)
		{
			return ((::RPG::GameCore::VideoCaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET))(this, captionPath);
		}

		::System::Void _SetupButtonShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET))(this);
		}

		::System::Void OnVideoButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Void OnHideButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Void OnSkipButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Void OnPauseButtonClick(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET))(this, param);
		}

		::System::Int32 OnPauseResume(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET))(this, L);
		}

		::System::Int32 onLuaCallback(::System::IntPtr L)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET))(this, L);
		}

		::System::Void OnSkipActionVerify(::System::Boolean isOK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET))(this, isOK);
		}

		::System::Void TickNearlyEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET))(this);
		}

		::System::Void _InitEndBlackBeforeTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET))(this);
		}

		::System::Void _ChangeEndBlackBeforeTime(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET))(this, arg);
		}

		::System::Void TickCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET))(this);
		}

		::System::Void SetupCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET))(this);
		}

		::System::Void CloseCaption(::Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242* captionbind)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET))(this, captionbind);
		}

		::System::Void ShowCaption(::Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242* captionbind, ::RPG::Client::TextID textID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET))(this, captionbind, textID);
		}

		::System::Void SetCaptionAlpha(::Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242* captionbind, ::System::Single alpha)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_E3AFB73B0489B5D0_Class_1_152E032112DD3242*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET))(this, captionbind, alpha);
		}

		::System::Void CheckCaptionConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET))(this);
		}

		::System::Void AdaptMovieImage(::System::Single videoRatio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET))(this, videoRatio);
		}

		::System::Void OpenMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_OPENMASK_OFFSET))(this);
		}

		::System::Void BeginFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET))(this);
		}

		::System::Void EndFadeOutMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET))(this);
		}

		::System::Void FadeOutMask(::System::Single deltaSecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET))(this, deltaSecond);
		}

		::System::Void EndPlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDPLAY_OFFSET))(this);
		}

		::System::Int32 _GetWaitExitFrame()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__GETWAITEXITFRAME_OFFSET))(this);
		}

		::System::Void ExitDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_EXITDIALOG_OFFSET))(this);
		}

		::System::Void DestroyComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_DESTROYCOMPONENT_OFFSET))(this);
		}

		::Class_2_E3AFB73B0489B5D0* get__View()
		{
			return ((::Class_2_E3AFB73B0489B5D0*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET))(this);
		}

		::CriWare::CriMana::Player_Status get_currentState()
		{
			return ((::CriWare::CriMana::Player_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET_CURRENTSTATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
		}
	};
}
