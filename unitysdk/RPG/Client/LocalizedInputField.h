#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace RPG::Client { class LocalizedInputField_VoidDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define RPG_CLIENT_LOCALIZEDINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A4A920)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_HASSTATE_OFFSET UNITYSDK_OFFSET(0x9A4C3D0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A4ADA0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x9A4C010)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A4ABE0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9A4B610)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_SETCHECKED_OFFSET UNITYSDK_OFFSET(0x9A4B990)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x9A4AFF0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0x9A4C2E0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x9A4CC30)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0x9A4C770)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x9A4C5E0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0x9A4C800)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x9A4C480)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__POSTINPUTSOUND_OFFSET UNITYSDK_OFFSET(0x9A4CA30)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0x9A4CCD0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x9A4CD70)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x9A4CE60)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9A4CD60)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0x9A4CD90)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x9A4CD80)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedInputField_TypeDefinitionIndex = 59460;

	class LocalizedInputField : public ::UnityEngine::UI::InputField
	{
	public:
		::UnityEngine::Animator* _LocalAnimator; // 0x240
		::System::Boolean _IsFirstSet; // 0x248
		::System::String* _TutorialOverViewActionName; // 0x250
		::System::Int32 _IsSelectedHash; // 0x258
		::System::Int32 _SelectedHash; // 0x25C
		::System::Int32 _NormalHash; // 0x260
		::RPG::Client::LocalizedInputField_VoidDelegate* onSelectTrigger; // 0x268
		::RPG::Client::LocalizedInputField_VoidDelegate* onDeselectTrigger; // 0x270
		::RPG::Client::UIButtonSoundType SoundType; // 0x278
		::System::String* SpecialSoundEvent; // 0x280

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_LATEUPDATE_OFFSET))(this);
		}

		::System::Void UpdateLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_UPDATELABEL_OFFSET))(this);
		}

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_ONSELECT_OFFSET))(this, eventData);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESELECT_OFFSET))(this, eventData);
		}

		::System::Void SetChecked(::System::Boolean isChecked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_SETCHECKED_OFFSET))(this, isChecked);
		}

		::System::Boolean HasState(::UnityEngine::Animator* _animator, ::System::String* state_name, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_HASSTATE_OFFSET))(this, _animator, state_name, index);
		}

		::System::Char _OnValidateInput(::System::String* s, ::System::Int32 charIndex, ::System::Char addedChar)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ONVALIDATEINPUT_OFFSET))(this, s, charIndex, addedChar);
		}

		::System::Void _OnEndEdit(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ONENDEDIT_OFFSET))(this, str);
		}

		::System::Boolean _AnimatorCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ANIMATORCHECK_OFFSET))(this);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Void _OnUIInControlTipUpdate(::System::Object* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ONUIINCONTROLTIPUPDATE_OFFSET))(this, args);
		}

		::System::Void _PostInputSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__POSTINPUTSOUND_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_AWAKE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESTROY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_UpdateLabel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_UPDATELABEL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONSELECT_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, P0);
		}
	};
}
