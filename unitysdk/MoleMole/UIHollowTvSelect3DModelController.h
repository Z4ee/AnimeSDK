#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"
#include "unitysdk/Struct_2_81427F9B3D4E62BC.h"

class Class_1_E4B28BF4798FAC79;
class Class_2_424C59E7A53DF715;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationState; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_DOFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x17818E90)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x178181F0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_LOOPBLENDTOENDANIM_OFFSET UNITYSDK_OFFSET(0x17818D60)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x178183E0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONSTOPLOOPANIM_OFFSET UNITYSDK_OFFSET(0x17818950)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17818470)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17818200)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17818390)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEINANDLOOPANIM_OFFSET UNITYSDK_OFFSET(0x17818700)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x17818A80)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_STOPALLANIM_OFFSET UNITYSDK_OFFSET(0x178185C0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_SYNCTRANSFORM_OFFSET UNITYSDK_OFFSET(0x17818F20)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_WAITFORANIMATION_OFFSET UNITYSDK_OFFSET(0x17818A00)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17819320)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER__WAITFORANIMATION_B__20_0_OFFSET UNITYSDK_OFFSET(0x17819400)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17819430)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x178194C0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x178194D0)
#define MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x178194E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTvSelect3DModelController_TypeDefinitionIndex = 43004;

	class UIHollowTvSelect3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::UnityEngine::Camera* _chessboardCamera; // 0x360
		::Class_1_E4B28BF4798FAC79* _animSyncer; // 0x368
		::UnityEngine::AnimationState* _loopState_QueuedClone; // 0x370
		::Foundation::Coroutine::CoroutineHandle _loopDelayEndHandler; // 0x378
		::UnityEngine::Coroutine* _loopQueuedHandler; // 0x380
		::System::String* FADE_OUT_ANIM_NAME; // 0x388
		::System::String* LOOP_ANIM_NAME; // 0x390
		::Class_2_424C59E7A53DF715* _view; // 0x398

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void StopAllAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_STOPALLANIM_OFFSET))(this);
		}

		::System::Void PlayFadeInAndLoopAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEINANDLOOPANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void PlayFadeOutAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_PLAYFADEOUTANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void LoopBlendToEndAnim(::System::Single normalizedTime, ::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_LOOPBLENDTOENDANIM_OFFSET))(this, normalizedTime, onFinishOrInterrupt);
		}

		::System::Void DoFadeOutAnim(::System::Action* onFinishOrInterrupt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_DOFADEOUTANIM_OFFSET))(this, onFinishOrInterrupt);
		}

		::System::Void SyncTransform(::Struct_2_81427F9B3D4E62BC hudTransform)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_81427F9B3D4E62BC))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_SYNCTRANSFORM_OFFSET))(this, hudTransform);
		}

		::System::Void OnStopLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_ONSTOPLOOPANIM_OFFSET))(this);
		}

		::System::Collections::IEnumerator* WaitForAnimation()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER_WAITFORANIMATION_OFFSET))(this);
		}

		::System::Boolean _WaitForAnimation_b__20_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER__WAITFORANIMATION_B__20_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTVSELECT3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
