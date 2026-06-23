#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0.h"
#include "unitysdk/System/Object.h"

class Class_2_416175823F05B577;
namespace Coffee::UIExtensions { class UIParticle; }
namespace MoleMole { class UIArpeggioBottomBlessRowWidgetController; }
namespace MoleMole { class UIHollowMainBottomWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_CLEARBUFFID_OFFSET UNITYSDK_OFFSET(0x16915210)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_CLEARHANDLE_OFFSET UNITYSDK_OFFSET(0x16913FC0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_CLEARNEXTBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x16913C30)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GETPLACEHOLDERCOUNT_OFFSET UNITYSDK_OFFSET(0x16914160)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_END_OFFSET UNITYSDK_OFFSET(0x16912060)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_LOOP02ROOT_OFFSET UNITYSDK_OFFSET(0x16911270)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_LOOP02_OFFSET UNITYSDK_OFFSET(0x16911410)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x16911C70)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_START_OFFSET UNITYSDK_OFFSET(0x16912530)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_ISSPECIAL_OFFSET UNITYSDK_OFFSET(0x16914540)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_PLAYBUFFDES_OFFSET UNITYSDK_OFFSET(0x16914D70)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_REFRESHSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x16912DC0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_REPLAY_OFFSET UNITYSDK_OFFSET(0x169154A0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_RESETBUFFID_OFFSET UNITYSDK_OFFSET(0x16914F80)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_RESET_OFFSET UNITYSDK_OFFSET(0x16913C90)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETBUFFID_OFFSET UNITYSDK_OFFSET(0x169148F0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETNEXTBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x16913E00)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETSATURATION_OFFSET UNITYSDK_OFFSET(0x16913620)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETTOTOP_OFFSET UNITYSDK_OFFSET(0x169135D0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SHOWLOOP_OFFSET UNITYSDK_OFFSET(0x16914C40)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_UPDATEMUTESTATE_OFFSET UNITYSDK_OFFSET(0x169143A0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__CLEARBUFFID_B__45_0_OFFSET UNITYSDK_OFFSET(0x169156C0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x169131A0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__CTOR_OFFSET UNITYSDK_OFFSET(0x16912A00)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__DELAY_OFFSET UNITYSDK_OFFSET(0x16914CF0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__REFRESHSPECIALSTATE_G__UPDATEPARTICLE_38_0_OFFSET UNITYSDK_OFFSET(0x169145B0)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__SETNEXTBUFFSTATE_B__34_0_OFFSET UNITYSDK_OFFSET(0x16915510)
#define MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT___DELAY_B__42_0_OFFSET UNITYSDK_OFFSET(0x16915680)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainBottomWidgetController_BuffSlot_TypeDefinitionIndex = 47514;

	class UIHollowMainBottomWidgetController_BuffSlot : public ::System::Object
	{
	public:
		::UnityEngine::Animation* ani; // 0x10
		::UnityEngine::UI::Text* buffDes; // 0x18
		::UnityEngine::RectTransform* transform; // 0x20
		::Class_2_416175823F05B577* bless; // 0x28
		::MoleMole::UIHollowMainBottomWidgetController* ctrl; // 0x30
		::UnityEngine::Animation* lockAnim; // 0x38
		::System::Action* callback; // 0x40
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* handles; // 0x48
		::UnityEngine::GameObject* specialGo; // 0x50
		::MoleMole::UIArpeggioBottomBlessRowWidgetController* _widget; // 0x58
		::UnityEngine::GameObject* normalGo; // 0x60
		::UnityEngine::CanvasGroup* group; // 0x68
		::System::Int32 slotIndex; // 0x70
		::System::Boolean ForbidSpecial; // 0x74
		::System::Int32 itemid; // 0x78
		::System::Boolean isStarting; // 0x7C
		::System::Boolean isNextBuff; // 0x7D
		::System::Boolean isSpecial; // 0x7E
		::System::Boolean isRemoving; // 0x7F

		::System::Void _ctor(::System::Int32 slotIndex, ::UnityEngine::RectTransform* transform, ::MoleMole::UIHollowMainBottomWidgetController* ctrl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*, ::MoleMole::UIHollowMainBottomWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__CTOR_OFFSET))(this, slotIndex, transform, ctrl);
		}

		::System::Void _ctor_1(::System::Int32 i, ::Class_3_6F805C3FA3D1D41D<::MoleMole::UIArpeggioBottomBlessRowWidgetController*>* tran, ::MoleMole::UIHollowMainBottomWidgetController* uiHollowMainBottomWidgetController)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_3_6F805C3FA3D1D41D<::MoleMole::UIArpeggioBottomBlessRowWidgetController*>*, ::MoleMole::UIHollowMainBottomWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__CTOR_1_OFFSET))(this, i, tran, uiHollowMainBottomWidgetController);
		}

		::UnityEngine::GameObject* get_loop02Root()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_LOOP02ROOT_OFFSET))(this);
		}

		::Coffee::UIExtensions::UIParticle* get_loop02()
		{
			return ((::Coffee::UIExtensions::UIParticle*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_LOOP02_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_loop()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_LOOP_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* get_end()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_END_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* get_start()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GET_START_OFFSET))(this);
		}

		::System::Void SetToTop(::System::Boolean top)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETTOTOP_OFFSET))(this, top);
		}

		::System::Void SetSaturation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETSATURATION_OFFSET))(this, value);
		}

		::System::Void ClearNextBuffState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_CLEARNEXTBUFFSTATE_OFFSET))(this);
		}

		::System::Void SetNextBuffState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETNEXTBUFFSTATE_OFFSET))(this);
		}

		::System::Void ClearHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_CLEARHANDLE_OFFSET))(this);
		}

		::System::Int32 GetPlaceHolderCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_GETPLACEHOLDERCOUNT_OFFSET))(this);
		}

		::System::Void UpdateMuteState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_UPDATEMUTESTATE_OFFSET))(this);
		}

		::System::Void RefreshSpecialState(::System::Boolean update)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_REFRESHSPECIALSTATE_OFFSET))(this, update);
		}

		::System::Boolean IsSpecial(::System::Boolean hasSuper, ::System::Int32 placeHolderCount)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_ISSPECIAL_OFFSET))(this, hasSuper, placeHolderCount);
		}

		::System::Void SetBuffID(::Class_2_416175823F05B577* buff)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_416175823F05B577*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SETBUFFID_OFFSET))(this, buff);
		}

		::System::Void PlayBuffDes(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_PLAYBUFFDES_OFFSET))(this, desc);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* _Delay()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__DELAY_OFFSET))(this);
		}

		::System::Void ShowLoop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_SHOWLOOP_OFFSET))(this);
		}

		::System::Void ResetBuffID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_RESETBUFFID_OFFSET))(this);
		}

		::System::Void ClearBuffID(::System::Action* clearCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_CLEARBUFFID_OFFSET))(this, clearCallback);
		}

		::System::Void Replay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_REPLAY_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT_RESET_OFFSET))(this);
		}

		::System::Void _SetNextBuffState_b__34_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__SETNEXTBUFFSTATE_B__34_0_OFFSET))(this);
		}

		::System::Void _RefreshSpecialState_g__UpdateParticle_38_0(::MoleMole::UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0& a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowMainBottomWidgetController_BuffSlot___c__DisplayClass38_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__REFRESHSPECIALSTATE_G__UPDATEPARTICLE_38_0_OFFSET))(this, a1);
		}

		::System::Void __Delay_b__42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT___DELAY_B__42_0_OFFSET))(this);
		}

		::System::Void _ClearBuffID_b__45_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINBOTTOMWIDGETCONTROLLER_BUFFSLOT__CLEARBUFFID_B__45_0_OFFSET))(this);
		}
	};
}
