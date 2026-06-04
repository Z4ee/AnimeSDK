#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriMana/EventPoint.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/RPG/Client/ManaVideoPageContext_VideoPlayStep.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_A1E038C9E9F68E59;
class Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242;
namespace CriWare { class CriManaMovieControllerForUI; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class VideoCaption; }
namespace RPG::GameCore { class VideoCaptionConfig; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET UNITYSDK_OFFSET(0xBEA5080)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_BEGINFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xBEA55C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEA5040)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET UNITYSDK_OFFSET(0xBEA4E10)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEA31D0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_DESTROYCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEA5BB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDFADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xBEA5610)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ENDPLAY_OFFSET UNITYSDK_OFFSET(0xBEA3E10)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_EXITDIALOG_OFFSET UNITYSDK_OFFSET(0xBEA5840)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET UNITYSDK_OFFSET(0xBEA56B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0xBEA1310)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET_CURRENTSTATE_OFFSET UNITYSDK_OFFSET(0xBEA4280)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET UNITYSDK_OFFSET(0xBEA36E0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xBEA2710)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET UNITYSDK_OFFSET(0xBEA2560)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xBEA33D0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET UNITYSDK_OFFSET(0xBEA3B00)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIEEND_OFFSET UNITYSDK_OFFSET(0xBEA3060)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONMOVIESTART_OFFSET UNITYSDK_OFFSET(0xBEA2E90)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xBEA3720)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET UNITYSDK_OFFSET(0xBEA39D0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET UNITYSDK_OFFSET(0xBEA3C50)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xBEA34C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xBEA3260)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_OPENMASK_OFFSET UNITYSDK_OFFSET(0xBEA53B0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_PREPARETICK_OFFSET UNITYSDK_OFFSET(0xBEA2D20)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET UNITYSDK_OFFSET(0xBEA4E70)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET UNITYSDK_OFFSET(0xBEA4EF0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET UNITYSDK_OFFSET(0xBEA4D40)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET UNITYSDK_OFFSET(0xBEA4830)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET UNITYSDK_OFFSET(0xBEA40C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET UNITYSDK_OFFSET(0xBEA2320)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBEA2420)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0xBEA5C50)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0xBEA45C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET UNITYSDK_OFFSET(0xBEA2030)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBEA13C0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xBEA0E90)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBEA1B20)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__GETWAITEXITFRAME_OFFSET UNITYSDK_OFFSET(0xBEA5890)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET UNITYSDK_OFFSET(0xBEA4360)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBEA2500)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET UNITYSDK_OFFSET(0xBEA2640)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET UNITYSDK_OFFSET(0xBEA1FB0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET UNITYSDK_OFFSET(0xBEA1E60)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBEA1DF0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xBEA5D90)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xBEA5C70)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xBEA5DF0)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xBEA5D30)
#define RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBEA5CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ManaVideoPageContext_TypeDefinitionIndex = 68115;

	class ManaVideoPageContext : public ::RPG::Client::UIController
	{
	public:
		static ::System::Int32* StaticGet_WAIT_TRIGGER_CUSTOM_STRING()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoPageContext_TypeDefinitionIndex)->GetStaticField(0x82E0);
		}
		static ::System::Int32* StaticGet_WAIT_DIALOG_FRAME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoPageContext_TypeDefinitionIndex)->GetStaticField(0x82E4);
		}
		static ::System::Int32* StaticGet_WAIT_CRACK_FRAME()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ManaVideoPageContext_TypeDefinitionIndex)->GetStaticField(0x82E8);
		}
		// static const ::System::Single _WAIT_NO_LOG_ERROR_PAUSE_MAX_TIME; // 0x0
		// static const ::System::Single MASK_TIME; // 0x0
		::CriWare::CriManaMovieControllerForUI* _movieControllerForUI; // 0x180
		::RPG::Client::LuaUIController* _skilDialog; // 0x188
		::System::String* _videoFullPath; // 0x190
		::Il2CppArray<::RPG::GameCore::VideoCaption*>* _ActiveCaptionConfig; // 0x198
		::RPG::GameCore::VideoCaptionConfig* _captionConfig; // 0x1A0
		::System::Single _EndBlackBeforeTime; // 0x1A8
		::CriWare::CriMana::Player_Status _lastPlayerStatus; // 0x1AC
		::System::Single _maskTimer; // 0x1B0
		::System::UInt32 _blockUID; // 0x1B4
		::System::UInt64 _videoKey; // 0x1B8
		::RPG::Client::ManaVideoPageContext_VideoPlayStep _videoStep; // 0x1C0
		::UnityEngine::Color _maskColor; // 0x1C4
		::System::Boolean _isDebug; // 0x1D4
		::System::Boolean _isMasking; // 0x1D5
		::System::Boolean _isLoop; // 0x1D6
		::System::Single _NoLogErrorPauseTime; // 0x1D8
		::RPG::Client::LockSource _LockSource; // 0x1DC
		::System::UInt32 _PerformanceID; // 0x1E0
		::System::Single _lastVideoTime; // 0x1E4
		::System::UInt32 _videoID; // 0x1E8
		::System::Int32 _controllerRuntimeID; // 0x1EC
		::System::Boolean _isVideoPlaying; // 0x1F0
		::System::Boolean _hasCaption; // 0x1F1
		::System::Boolean _HasSend_VideoNearlyEnd; // 0x1F2
		::System::Boolean _canSkip; // 0x1F3
		::System::UInt64 _NoLogErrorPauseFrameTime; // 0x1F8

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void MuteCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_MUTECAMERA_OFFSET))(this, a1);
		}

		::System::Void _OnForceCloseVideo(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__ONFORCECLOSEVIDEO_OFFSET))(this, a1);
		}

		::System::Void TickVideoStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKVIDEOSTEP_OFFSET))(this);
		}

		::System::Void _CheckNoLogErrorPause(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHECKNOLOGERRORPAUSE_OFFSET))(this, a1);
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

		::System::Void CuePointCallback(::CriWare::CriMana::EventPoint& a1)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::EventPoint&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CUEPOINTCALLBACK_OFFSET))(this, a1);
		}

		::RPG::GameCore::VideoCaptionConfig* GetVideoCaptionConfig(::System::String* a1)
		{
			return ((::RPG::GameCore::VideoCaptionConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GETVIDEOCAPTIONCONFIG_OFFSET))(this, a1);
		}

		::System::Void _SetupButtonShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__SETUPBUTTONSHOW_OFFSET))(this);
		}

		::System::Void OnVideoButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONVIDEOBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnHideButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONHIDEBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnSkipButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Void OnPauseButtonClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSEBUTTONCLICK_OFFSET))(this, a1);
		}

		::System::Int32 OnPauseResume(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONPAUSERESUME_OFFSET))(this, a1);
		}

		::System::Int32 onLuaCallback(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONLUACALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnSkipActionVerify(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ONSKIPACTIONVERIFY_OFFSET))(this, a1);
		}

		::System::Void TickNearlyEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKNEARLYEND_OFFSET))(this);
		}

		::System::Void _InitEndBlackBeforeTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__INITENDBLACKBEFORETIME_OFFSET))(this);
		}

		::System::Void _ChangeEndBlackBeforeTime(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT__CHANGEENDBLACKBEFORETIME_OFFSET))(this, a1);
		}

		::System::Void TickCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_TICKCAPTION_OFFSET))(this);
		}

		::System::Void SetupCaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETUPCAPTION_OFFSET))(this);
		}

		::System::Void CloseCaption(::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CLOSECAPTION_OFFSET))(this, a1);
		}

		::System::Void ShowCaption(::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242* a1, ::RPG::Client::TextID a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242*, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SHOWCAPTION_OFFSET))(this, a1, a2);
		}

		::System::Void SetCaptionAlpha(::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A1E038C9E9F68E59_Class_1_152E032112DD3242*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_SETCAPTIONALPHA_OFFSET))(this, a1, a2);
		}

		::System::Void CheckCaptionConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_CHECKCAPTIONCONFIG_OFFSET))(this);
		}

		::System::Void AdaptMovieImage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_ADAPTMOVIEIMAGE_OFFSET))(this, a1);
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

		::System::Void FadeOutMask(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_FADEOUTMASK_OFFSET))(this, a1);
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

		::Class_2_A1E038C9E9F68E59* get__View()
		{
			return ((::Class_2_A1E038C9E9F68E59*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT_GET__VIEW_OFFSET))(this);
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

		::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MANAVIDEOPAGECONTEXT___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
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
