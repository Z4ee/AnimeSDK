#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

namespace DG::Tweening { class Tweener; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace MoleMole { class UIHollowCardOptionsAbyssS2DialogPopWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class CancellationTokenSource; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_CALCULATEDELAY_OFFSET UNITYSDK_OFFSET(0x19FEC000)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_CREATECOMPLETIONTASK_OFFSET UNITYSDK_OFFSET(0x19FEC0D0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_DESTROYSTARTEFFECTS_OFFSET UNITYSDK_OFFSET(0x19FEB300)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19FE6960)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_GETCENTERPOSITIONS_OFFSET UNITYSDK_OFFSET(0x19FEBF30)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_HANDLEEFFECT_OFFSET UNITYSDK_OFFSET(0x19FEAF30)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYBGEFFECT_OFFSET UNITYSDK_OFFSET(0x19FEC240)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDANIMASYNC_OFFSET UNITYSDK_OFFSET(0x19FEB8A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDANIM_OFFSET UNITYSDK_OFFSET(0x19FEC820)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDEFFECT_OFFSET UNITYSDK_OFFSET(0x19FEC2E0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDMERGEANIM_OFFSET UNITYSDK_OFFSET(0x19FEC3A0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDSHOWANIM_OFFSET UNITYSDK_OFFSET(0x19FEB970)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCOMBINEANIMATIONASYNC_OFFSET UNITYSDK_OFFSET(0x19FE9D60)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PREPARECARD_OFFSET UNITYSDK_OFFSET(0x19FEB4E0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PREPARECOMBINEEFFECT_OFFSET UNITYSDK_OFFSET(0x19FEA660)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_SETPARTICLESPEED_OFFSET UNITYSDK_OFFSET(0x19FEB280)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_SHOWCOMBINECARD_OFFSET UNITYSDK_OFFSET(0x19FEA5C0)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FE9CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper_TypeDefinitionIndex = 41313;

	class UIHollowCardOptionsAbyssS2DialogPopWindowController_CombineAnimationHelper : public ::System::Object
	{
	public:
		::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController* baseController; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* startEffects; // 0x18
		::System::Threading::CancellationTokenSource* _cts; // 0x20
		::System::Boolean InUpdating; // 0x28
		::System::Boolean _disposed; // 0x29
		::System::Single timeScale; // 0x2C

		::System::Void _ctor(::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController* baseController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsAbyssS2DialogPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER__CTOR_OFFSET))(this, baseController);
		}

		::Cysharp::Threading::Tasks::UniTask PlayCombineAnimationAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCOMBINEANIMATIONASYNC_OFFSET))(this);
		}

		::System::Void PrepareCombineEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PREPARECOMBINEEFFECT_OFFSET))(this);
		}

		::System::Void HandleEffect(::UnityEngine::GameObject* effect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_HANDLEEFFECT_OFFSET))(this, effect);
		}

		::System::Void SetParticleSpeed(::UnityEngine::ParticleSystem* ps, ::System::Single speed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_SETPARTICLESPEED_OFFSET))(this, ps, speed);
		}

		::System::Void DestroyStartEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_DESTROYSTARTEFFECTS_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask ShowCombineCard()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_SHOWCOMBINECARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* PrepareCard()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PREPARECARD_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask PlayCardAnimAsync(::MoleMole::HollowCardCombineConfig* config, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* combineGoList)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowCardCombineConfig*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDANIMASYNC_OFFSET))(this, config, combineGoList);
		}

		::Cysharp::Threading::Tasks::UniTask PlayCardShowAnim(::MoleMole::HollowCardCombineConfig* config, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* combineGoList, ::System::Single& maxDelay)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowCardCombineConfig*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDSHOWANIM_OFFSET))(this, config, combineGoList, maxDelay);
		}

		::Cysharp::Threading::Tasks::UniTask PlayBGEffect(::System::Boolean isSecondCombine, ::MoleMole::HollowCardCombineConfig* config)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::MoleMole::HollowCardCombineConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYBGEFFECT_OFFSET))(this, isSecondCombine, config);
		}

		::Cysharp::Threading::Tasks::UniTask PlayCardEffect(::System::Boolean isSecondCombine, ::MoleMole::HollowCardCombineConfig* config)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean, ::MoleMole::HollowCardCombineConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDEFFECT_OFFSET))(this, isSecondCombine, config);
		}

		::Cysharp::Threading::Tasks::UniTask PlayCardMergeAnim(::MoleMole::HollowCardCombineConfig* config, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* combineGoList)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowCardCombineConfig*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDMERGEANIM_OFFSET))(this, config, combineGoList);
		}

		::Cysharp::Threading::Tasks::UniTask CreateCompletionTask(::DG::Tweening::Tweener* tweener)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::DG::Tweening::Tweener*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_CREATECOMPLETIONTASK_OFFSET))(this, tweener);
		}

		::System::Collections::Generic::List_1<::System::Int32>* GetCenterPositions(::System::Int32 count)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_GETCENTERPOSITIONS_OFFSET))(this, count);
		}

		::System::Single CalculateDelay(::System::Collections::Generic::List_1<::System::Int32>* centerPos, ::System::Int32 index, ::System::Single delayInterval, ::System::Int32& len)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Int32, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_CALCULATEDELAY_OFFSET))(this, centerPos, index, delayInterval, len);
		}

		::System::Void PlayCardAnim(::MoleMole::HollowCardCombineConfig* config, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* combineGoList)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HollowCardCombineConfig*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_PLAYCARDANIM_OFFSET))(this, config, combineGoList);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSABYSSS2DIALOGPOPWINDOWCONTROLLER_COMBINEANIMATIONHELPER_DISPOSE_OFFSET))(this);
		}
	};
}
