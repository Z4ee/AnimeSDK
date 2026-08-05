#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIBaseChatPlayController.h"

class Class_2_60638234271CCDB8_133;
class Class_2_B4378B46E0020E85;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET UNITYSDK_OFFSET(0x192AA2A0)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_GET_LONGPRESSBTN_OFFSET UNITYSDK_OFFSET(0x192AA240)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYLASTNODEFINISH_OFFSET UNITYSDK_OFFSET(0x192AA420)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEIN_OFFSET UNITYSDK_OFFSET(0x192AA740)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEOUT_OFFSET UNITYSDK_OFFSET(0x192AAA20)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192AAD20)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER__PLAYLASTNODEFINISH_B__11_0_OFFSET UNITYSDK_OFFSET(0x192AAD30)
#define MOLEMOLE_UIBASECHATPLUSCONTROLLER__PLAYLASTNODEFINISH_B__11_1_OFFSET UNITYSDK_OFFSET(0x192AAD70)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseChatPlusController_TypeDefinitionIndex = 67736;

	class UIBaseChatPlusController : public ::MoleMole::UIBaseChatPlayController
	{
	public:
		// static const ::System::String* MaskFadeInAniName; // 0x0
		// static const ::System::String* MaskFadeOutAniName; // 0x0
		// static const ::System::String* OngoingFadeIn; // 0x0
		// static const ::System::String* OngoingTextFadeIn; // 0x0
		// static const ::System::String* NarratorFadeIn; // 0x0
		// static const ::System::String* NarratorFadeOut; // 0x0
		// static const ::System::String* OngoingFadeOut; // 0x0
		::Class_2_60638234271CCDB8_133* _view; // 0x3C8
		::Foundation::Coroutine::CoroutineHandle _fadeCoroutineHandle; // 0x3D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_B4378B46E0020E85* get_LongPressBtn()
		{
			return ((::Class_2_B4378B46E0020E85*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_GET_LONGPRESSBTN_OFFSET))(this);
		}

		::System::Single EnsurePreviousNodeFadeOut(::UnityEngine::GameObject* targetGo, ::System::Action* callback)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_ENSUREPREVIOUSNODEFADEOUT_OFFSET))(this, targetGo, callback);
		}

		::System::Single PlayLastNodeFinish(::UnityEngine::GameObject* nextObj)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYLASTNODEFINISH_OFFSET))(this, nextObj);
		}

		::System::Void PlayMaskFadeIn(::System::Action* onFadeInCompleted, ::System::Boolean isWithAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEIN_OFFSET))(this, onFadeInCompleted, isWithAni);
		}

		::System::Void PlayMaskFadeOut(::System::Action* onFadeOutCompleted, ::System::Boolean isWithAni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER_PLAYMASKFADEOUT_OFFSET))(this, onFadeOutCompleted, isWithAni);
		}

		::System::Void _PlayLastNodeFinish_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER__PLAYLASTNODEFINISH_B__11_0_OFFSET))(this);
		}

		::System::Void _PlayLastNodeFinish_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECHATPLUSCONTROLLER__PLAYLASTNODEFINISH_B__11_1_OFFSET))(this);
		}
	};
}
