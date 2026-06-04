#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace RPG::Client { class LocalizedInputField_VoidDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define RPG_CLIENT_LOCALIZEDINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE581F0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_HASSTATE_OFFSET UNITYSDK_OFFSET(0xBE59720)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE586C0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xBE59360)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE584C0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONSELECT_OFFSET UNITYSDK_OFFSET(0xBE58EB0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_SETCHECKED_OFFSET UNITYSDK_OFFSET(0xBE59230)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0xBE58920)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0xBE59630)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0xBE5A000)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0xBE59AC0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONENDEDIT_OFFSET UNITYSDK_OFFSET(0xBE59930)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0xBE59BD0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0xBE597D0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__POSTINPUTSOUND_OFFSET UNITYSDK_OFFSET(0xBE59E00)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_AWAKE_OFFSET UNITYSDK_OFFSET(0xBE5A0A0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xBE5A140)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESELECT_OFFSET UNITYSDK_OFFSET(0xBE5A230)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xBE5A130)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONSELECT_OFFSET UNITYSDK_OFFSET(0xBE5A160)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0xBE5A150)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedInputField_TypeDefinitionIndex = 67795;

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

		::System::Void OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESELECT_OFFSET))(this, a1);
		}

		::System::Void SetChecked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_SETCHECKED_OFFSET))(this, a1);
		}

		::System::Boolean HasState(::UnityEngine::Animator* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD_HASSTATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Char _OnValidateInput(::System::String* a1, ::System::Int32 a2, ::System::Char a3)
		{
			return ((::System::Char(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ONVALIDATEINPUT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnEndEdit(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ONENDEDIT_OFFSET))(this, a1);
		}

		::System::Boolean _AnimatorCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ANIMATORCHECK_OFFSET))(this);
		}

		::System::Void _InitNavigationMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__INITNAVIGATIONMODE_OFFSET))(this);
		}

		::System::Void _OnUIInControlTipUpdate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD__ONUIINCONTROLTIPUPDATE_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_OnSelect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONSELECT_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_OnDeselect(::UnityEngine::EventSystems::BaseEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOCALIZEDINPUTFIELD___IFIXBASEPROXY_ONDESELECT_OFFSET))(this, a1);
		}
	};
}
