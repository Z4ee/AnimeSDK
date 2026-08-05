#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_DB663931210BBC27.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

class AkCallbackInfo;
class Class_2_79F6D62CE30E3F8E_50;
class Class_2_BF1F922B5C5C5180;
class Class_2_BF1F922B5C5C5180_Class_1_110CEE6864079A61_2;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x1796B010)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_CHECKANDGENERATERANDOMLIST_OFFSET UNITYSDK_OFFSET(0x1796C230)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_COMPUTESMOOTHENERGY_OFFSET UNITYSDK_OFFSET(0x17970140)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_CREATEGAUSSIANKERNEL_OFFSET UNITYSDK_OFFSET(0x17970B20)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_DEALPAUSE_OFFSET UNITYSDK_OFFSET(0x1796C7B0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_DEALRESUME_OFFSET UNITYSDK_OFFSET(0x1796CA40)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_DURATIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1796FB30)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_FADESPECTRUM_OFFSET UNITYSDK_OFFSET(0x17970780)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GAUSSIANSMOOTH_OFFSET UNITYSDK_OFFSET(0x17970450)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GET_CURMUSICDURATION_OFFSET UNITYSDK_OFFSET(0x1796A5F0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GET_MUSICTIMEPERCENT_OFFSET UNITYSDK_OFFSET(0x1796A610)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1796A5E0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_INITSPECTRUMS_OFFSET UNITYSDK_OFFSET(0x1796A7F0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1796FEF0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1796A630)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONDRAGFINISHED_OFFSET UNITYSDK_OFFSET(0x1796CDF0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONENDEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1796FA60)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONEVENTPLAYFAILED_OFFSET UNITYSDK_OFFSET(0x1796FAD0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x1796FE10)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1796B4B0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONMAINBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1796E040)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONPOSTEVENTSUCCESS_OFFSET UNITYSDK_OFFSET(0x1796FA00)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONSLIDERPOINTERDOWNHANDLE_OFFSET UNITYSDK_OFFSET(0x1796D140)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONSLIDERPOINTERUPHANDLE_OFFSET UNITYSDK_OFFSET(0x1796D090)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1796D1F0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1796A6C0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1796B890)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYINDEX_OFFSET UNITYSDK_OFFSET(0x1796C5D0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYNEXT_OFFSET UNITYSDK_OFFSET(0x1796D680)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYPREV_OFFSET UNITYSDK_OFFSET(0x1796FF40)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYSONG_OFFSET UNITYSDK_OFFSET(0x1796E160)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_REFRESHMODEDISPLAY_OFFSET UNITYSDK_OFFSET(0x1796C350)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SETDRAGGING_OFFSET UNITYSDK_OFFSET(0x1796B800)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SETMODE_OFFSET UNITYSDK_OFFSET(0x1796FD20)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SETSPECTRUMPARAMS_OFFSET UNITYSDK_OFFSET(0x1796F380)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SET_CURMUSICDURATION_OFFSET UNITYSDK_OFFSET(0x1796A600)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SHOWCURPLAYTIME_OFFSET UNITYSDK_OFFSET(0x1796D4F0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SHOWCURSPECTRUM_OFFSET UNITYSDK_OFFSET(0x1796D7A0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_TOGGLELIKE_OFFSET UNITYSDK_OFFSET(0x17970040)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_TOGGLEPLAY_OFFSET UNITYSDK_OFFSET(0x1796FDA0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_TOGGLESPECTRUMNOISE_OFFSET UNITYSDK_OFFSET(0x1796DDA0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_UPDATELIKEBTNSTATUS_OFFSET UNITYSDK_OFFSET(0x1796C0D0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_UPDATEPLAYDISPLAY_OFFSET UNITYSDK_OFFSET(0x1796F070)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1796D420)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_0_OFFSET UNITYSDK_OFFSET(0x17970F00)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_1_OFFSET UNITYSDK_OFFSET(0x17970F10)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_2_OFFSET UNITYSDK_OFFSET(0x17970F20)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_3_OFFSET UNITYSDK_OFFSET(0x17970F30)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17970D70)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__FADESPECTRUM_B__84_0_OFFSET UNITYSDK_OFFSET(0x17970F40)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__ONUIOPEN_B__45_1_OFFSET UNITYSDK_OFFSET(0x17970E20)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__ONUIOPEN_B__45_2_OFFSET UNITYSDK_OFFSET(0x17970ED0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17970F80)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET UNITYSDK_OFFSET(0x17971010)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x179710A0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179710D0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179710E0)
#define MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179710F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicPlayerPageController_TypeDefinitionIndex = 45101;

	class UIMusicPlayerPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* CD_GROUP_FADEIN; // 0x0
		// static const ::System::String* CD_GROUP_FADEOUT; // 0x0
		// static const ::System::Single SAMPLE_TIME; // 0x0
		// static const ::System::String* SPECTRUM_MATRIX_NAME; // 0x0
		// static const ::System::String* NOISE_CTRL; // 0x0
		// static const ::System::String* FLOW_SPEED; // 0x0
		// static const ::System::String* AMP_LEVEL; // 0x0
		// static const ::System::Int32 MIN_BPM = 0x32; // 0x0
		// static const ::System::Int32 MAX_BPM = 0xC8; // 0x0
		::Class_2_79F6D62CE30E3F8E_50* _view; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* curUnlockedIDList; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* curRamdomList; // 0x328
		::System::Int32 curPlayIndex; // 0x330
		::System::Int32 curRandomIndex; // 0x334
		::System::Int32 curMusicId; // 0x338
		::System::Boolean isCurLike; // 0x33C
		::System::Int32 curPlayGroupId; // 0x340
		::System::Boolean isBtnPlaying; // 0x344
		::System::Boolean isRealPlaying; // 0x345
		::System::Single _curMusicDuration; // 0x348
		::System::Single curMusicTimer; // 0x34C
		::System::Single _lastShowtimer; // 0x350
		::Class_2_BF1F922B5C5C5180* _musicPlayerModel; // 0x358
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Single>*>* _initParams; // 0x360
		::Class_2_BF1F922B5C5C5180_Class_1_110CEE6864079A61_2* _spectrumData; // 0x368
		::UnityEngine::Matrix4x4 _matrix; // 0x370
		::System::Single _lerpSpeed; // 0x3B0
		::System::Collections::Generic::List_1<::DG::Tweening::Tween*>* _spectrumTweens; // 0x3B8
		::System::Boolean _isShowSpectrum; // 0x3C0
		::System::UInt32 _currentPendingId; // 0x3C4
		::System::UInt32 _currentPlayingId; // 0x3C8
		::UnityEngine::GameObject* _currentPlayingSoundEmitter; // 0x3D0
		::Foundation::Coroutine::CoroutineHandle _coroutineHandle; // 0x3D8
		::Foundation::Coroutine::CoroutineHandle _switchHandle; // 0x3DC
		::System::Boolean isLastFrameAxisInputting; // 0x3E0
		::System::Boolean isDragging; // 0x3E1
		::System::Boolean isDragStartPlaying; // 0x3E2
		::System::Int32 _lastClickIndex; // 0x3E4
		::System::Collections::Generic::List_1<::System::Single>* energyList; // 0x3E8
		::System::Collections::Generic::List_1<::System::Single>* smoothEnergy; // 0x3F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Single get_curMusicDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GET_CURMUSICDURATION_OFFSET))(this);
		}

		::System::Void set_curMusicDuration(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SET_CURMUSICDURATION_OFFSET))(this, value);
		}

		::System::Single get_musicTimePercent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GET_MUSICTIMEPERCENT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetDragging(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SETDRAGGING_OFFSET))(this, isDrag);
		}

		::System::Void OnSliderPointerUpHandle(::UnityEngine::EventSystems::PointerEventData* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONSLIDERPOINTERUPHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnDragFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONDRAGFINISHED_OFFSET))(this);
		}

		::System::Void OnSliderPointerDownHandle(::UnityEngine::EventSystems::PointerEventData* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONSLIDERPOINTERDOWNHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void ShowCurPlayTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SHOWCURPLAYTIME_OFFSET))(this);
		}

		::System::Void ShowCurSpectrum()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SHOWCURSPECTRUM_OFFSET))(this);
		}

		::System::Void OnMainBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONMAINBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void PlaySong(::System::Int32 songId, ::System::Int32 lastIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYSONG_OFFSET))(this, songId, lastIndex);
		}

		::System::Void OnPostEventSuccess(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONPOSTEVENTSUCCESS_OFFSET))(this, pendingId, playingId);
		}

		::System::Void OnEndedCallback(::System::UInt32 pendingId, ::System::UInt32 playingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONENDEDCALLBACK_OFFSET))(this, pendingId, playingId);
		}

		::System::Void OnEventPlayFailed(::System::UInt32 pendingId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONEVENTPLAYFAILED_OFFSET))(this, pendingId);
		}

		::System::Void DurationCallback(::System::Object* in_cookie, ::AkCallbackType type, ::AkCallbackInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_DURATIONCALLBACK_OFFSET))(this, in_cookie, type, info);
		}

		::System::Void SetMode(::Enum_3_DB663931210BBC27 mode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SETMODE_OFFSET))(this, mode);
		}

		::System::Void RefreshModeDisplay(::Enum_3_DB663931210BBC27 mode, ::System::Boolean isOpen)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_REFRESHMODEDISPLAY_OFFSET))(this, mode, isOpen);
		}

		::System::Void CheckAndGenerateRandomList(::Enum_3_DB663931210BBC27 mode)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_CHECKANDGENERATERANDOMLIST_OFFSET))(this, mode);
		}

		::System::Void DealResume(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_DEALRESUME_OFFSET))(this, isDrag);
		}

		::System::Void DealPause(::System::Boolean isDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_DEALPAUSE_OFFSET))(this, isDrag);
		}

		::System::Void TogglePlay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_TOGGLEPLAY_OFFSET))(this);
		}

		::System::Void UpdatePlayDisplay(::System::Boolean isPlay, ::System::Boolean ignoreAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_UPDATEPLAYDISPLAY_OFFSET))(this, isPlay, ignoreAnim);
		}

		::System::Void OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnClick(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_ONCLICK_OFFSET))(this, index);
		}

		::System::Void PlayIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYINDEX_OFFSET))(this, index);
		}

		::System::Void PlayNext(::System::Boolean fromBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYNEXT_OFFSET))(this, fromBtn);
		}

		::System::Void PlayPrev()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_PLAYPREV_OFFSET))(this);
		}

		::System::Void ToggleLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_TOGGLELIKE_OFFSET))(this);
		}

		::System::Void UpdateLikeBtnStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_UPDATELIKEBTNSTATUS_OFFSET))(this);
		}

		::System::Void InitSpectrums()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_INITSPECTRUMS_OFFSET))(this);
		}

		::System::Void SetSpectrumParams(::System::Int32 songId, ::System::Single BPM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_SETSPECTRUMPARAMS_OFFSET))(this, songId, BPM);
		}

		::System::Void ComputeSmoothEnergy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_COMPUTESMOOTHENERGY_OFFSET))(this);
		}

		::System::Void ToggleSpectrumNoise(::System::Boolean isActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_TOGGLESPECTRUMNOISE_OFFSET))(this, isActive);
		}

		::System::Void FadeSpectrum(::System::Boolean isFadein, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_FADESPECTRUM_OFFSET))(this, isFadein, duration);
		}

		::Il2CppArray<::System::Single>* GaussianSmooth(::Il2CppArray<::System::Single>* inputArray, ::System::Int32 kernelSize, ::System::Single sigma)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_GAUSSIANSMOOTH_OFFSET))(this, inputArray, kernelSize, sigma);
		}

		::Il2CppArray<::System::Single>* CreateGaussianKernel(::System::Int32 size, ::System::Single sigma)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER_CREATEGAUSSIANKERNEL_OFFSET))(this, size, sigma);
		}

		::System::Void _OnUIOpen_b__45_1(::System::Single f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__ONUIOPEN_B__45_1_OFFSET))(this, f);
		}

		::System::Boolean _OnUIOpen_b__45_2(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__ONUIOPEN_B__45_2_OFFSET))(this, x);
		}

		::System::Void _BindEvent_b__54_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_0_OFFSET))(this);
		}

		::System::Void _BindEvent_b__54_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_1_OFFSET))(this);
		}

		::System::Void _BindEvent_b__54_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_2_OFFSET))(this);
		}

		::System::Void _BindEvent_b__54_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__BINDEVENT_B__54_3_OFFSET))(this);
		}

		::System::Void _FadeSpectrum_b__84_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER__FADESPECTRUM_B__84_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleLostFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONGAMEPADMODULELOSTFOCUS_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICPLAYERPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
