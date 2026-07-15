#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIButtonSoundType.h"
#include "unitysdk/UnityEngine/UI/InputField.h"

namespace RPG::Client { class LocalizedInputField_VoidDelegate; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define RPG_CLIENT_LOCALIZEDINPUTFIELD_AWAKE_OFFSET UNITYSDK_OFFSET(0x19AD45F0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_HASSTATE_OFFSET UNITYSDK_OFFSET(0x19AD5A30)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x19AD4980)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESELECT_OFFSET UNITYSDK_OFFSET(0x19AD5700)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19AD4820)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_ONSELECT_OFFSET UNITYSDK_OFFSET(0x19AD51F0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_SETCHECKED_OFFSET UNITYSDK_OFFSET(0x19AD55C0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD_UPDATELABEL_OFFSET UNITYSDK_OFFSET(0x19AD4C00)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ANIMATORCHECK_OFFSET UNITYSDK_OFFSET(0x19AD5940)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD6290)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__INITNAVIGATIONMODE_OFFSET UNITYSDK_OFFSET(0x19AD5DD0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONENDEDIT_OFFSET UNITYSDK_OFFSET(0x19AD5C40)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONUIINCONTROLTIPUPDATE_OFFSET UNITYSDK_OFFSET(0x19AD5E60)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__ONVALIDATEINPUT_OFFSET UNITYSDK_OFFSET(0x19AD5AE0)
#define RPG_CLIENT_LOCALIZEDINPUTFIELD__POSTINPUTSOUND_OFFSET UNITYSDK_OFFSET(0x19AD6090)

namespace RPG::Client
{
	inline static constexpr unsigned int LocalizedInputField_TypeDefinitionIndex = 69279;

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
	};
}
