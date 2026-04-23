#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_614;
namespace InControl { class PlayerAction; }
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class UIController; }
namespace System { class String; }

#define RPG_CLIENT_MONOINCONTROLBUTTON_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA9CA5A0)
#define RPG_CLIENT_MONOINCONTROLBUTTON_DOSUBMIT_OFFSET UNITYSDK_OFFSET(0xA9CA9C0)
#define RPG_CLIENT_MONOINCONTROLBUTTON_GET_ACTIONENABLED_OFFSET UNITYSDK_OFFSET(0xA9CC390)
#define RPG_CLIENT_MONOINCONTROLBUTTON_GET_ISOWNERTOPPAGEORDIALOGBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0xA9CC430)
#define RPG_CLIENT_MONOINCONTROLBUTTON_GET_SUBMITENABLED_OFFSET UNITYSDK_OFFSET(0xA9CC410)
#define RPG_CLIENT_MONOINCONTROLBUTTON_HASGAMEPADACTION_OFFSET UNITYSDK_OFFSET(0xA9CA8E0)
#define RPG_CLIENT_MONOINCONTROLBUTTON_ISCOMBOCONTROLRELEASED_OFFSET UNITYSDK_OFFSET(0xA9CC250)
#define RPG_CLIENT_MONOINCONTROLBUTTON_ISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xA9CC320)
#define RPG_CLIENT_MONOINCONTROLBUTTON_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0xA9CA620)
#define RPG_CLIENT_MONOINCONTROLBUTTON_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0xA9CA690)
#define RPG_CLIENT_MONOINCONTROLBUTTON_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA9CA3C0)
#define RPG_CLIENT_MONOINCONTROLBUTTON_RESET_OFFSET UNITYSDK_OFFSET(0xA9CA980)
#define RPG_CLIENT_MONOINCONTROLBUTTON_SETACTIONNAME_OFFSET UNITYSDK_OFFSET(0xA9CA700)
#define RPG_CLIENT_MONOINCONTROLBUTTON_SET_ACTIONENABLED_OFFSET UNITYSDK_OFFSET(0xA9CC3A0)
#define RPG_CLIENT_MONOINCONTROLBUTTON_SET_ISOWNERTOPPAGEORDIALOGBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0xA9CC440)
#define RPG_CLIENT_MONOINCONTROLBUTTON_SET_SUBMITENABLED_OFFSET UNITYSDK_OFFSET(0xA9CC420)
#define RPG_CLIENT_MONOINCONTROLBUTTON_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA9CA560)
#define RPG_CLIENT_MONOINCONTROLBUTTON_UPDATE_OFFSET UNITYSDK_OFFSET(0xA9CAC60)
#define RPG_CLIENT_MONOINCONTROLBUTTON__CCTOR_OFFSET UNITYSDK_OFFSET(0xA9CC490)
#define RPG_CLIENT_MONOINCONTROLBUTTON__CLEAROTHERCONFLICTACTIONSTATE_OFFSET UNITYSDK_OFFSET(0xA9CBD50)
#define RPG_CLIENT_MONOINCONTROLBUTTON__CLEAR_OFFSET UNITYSDK_OFFSET(0xA9CA440)
#define RPG_CLIENT_MONOINCONTROLBUTTON__CTOR_OFFSET UNITYSDK_OFFSET(0xA9CC450)
#define RPG_CLIENT_MONOINCONTROLBUTTON__DOSUBMIT_OFFSET UNITYSDK_OFFSET(0xA9CB640)
#define RPG_CLIENT_MONOINCONTROLBUTTON__HASREGISTERCOMBOACTIONRELEASED_OFFSET UNITYSDK_OFFSET(0xA9CBEB0)
#define RPG_CLIENT_MONOINCONTROLBUTTON__ISACTIONMOUSETYPELEFTBUTTON_OFFSET UNITYSDK_OFFSET(0xA9CB4A0)
#define RPG_CLIENT_MONOINCONTROLBUTTON__ISCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0xA9CBC60)
#define RPG_CLIENT_MONOINCONTROLBUTTON__ISFIREDOWN_OFFSET UNITYSDK_OFFSET(0xA9CB560)
#define RPG_CLIENT_MONOINCONTROLBUTTON__ISFIREREPEATDOWN_OFFSET UNITYSDK_OFFSET(0xA9CB900)
#define RPG_CLIENT_MONOINCONTROLBUTTON__ISFIREUP_OFFSET UNITYSDK_OFFSET(0xA9CB9E0)
#define RPG_CLIENT_MONOINCONTROLBUTTON__ISSELECTED_OFFSET UNITYSDK_OFFSET(0xA9CBB50)
#define RPG_CLIENT_MONOINCONTROLBUTTON__REGISTERCOMBOACTION_OFFSET UNITYSDK_OFFSET(0xA9CA830)
#define RPG_CLIENT_MONOINCONTROLBUTTON__UNREGISTERCOMBOACTION_OFFSET UNITYSDK_OFFSET(0xA9CA4A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlButton_TypeDefinitionIndex = 56566;

	class MonoInControlButton : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlButtonUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlButton_TypeDefinitionIndex)->GetStaticField(0xE100);
		}
		::System::String* ActionName; // 0x18
		::System::Boolean RepeatPressEnabled; // 0x20
		::System::Boolean PressDownEnabled; // 0x21
		::System::Boolean RespondWhenSelected; // 0x22
		::System::Boolean NeedTransitionToPressedState; // 0x23
		::System::Boolean InternalActionEnabled; // 0x24
		::System::Boolean _IsOwnerTopPageOrDialogByGamePad_k__BackingField; // 0x25
		::System::Boolean _ActionEnabled; // 0x26
		::System::Boolean _ActionEnabledBackup; // 0x27
		::System::Boolean _SubmitEnabled; // 0x28
		::System::Boolean _IsCurrentClick; // 0x29
		::InControl::PlayerAction* _PlayerAction; // 0x30
		::System::String* _AttackActionName; // 0x38
		::System::String* _CancelActionName; // 0x40
		::Class_0_16E4307DCC419505_614* _ControllerGetter; // 0x48
		::RPG::Client::UIController* _Controller; // 0x50
		::RPG::Client::LongPressEvent* _LongPressEvent; // 0x58
		::RPG::Client::AnimatorButton* _AnimationButton; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__CLEAR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void OnApplicationPause(::System::Boolean pause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_ONAPPLICATIONPAUSE_OFFSET))(this, pause);
		}

		::System::Void SetActionName(::System::String* actionName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_SETACTIONNAME_OFFSET))(this, actionName);
		}

		::System::Boolean HasGamePadAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_HASGAMEPADACTION_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_RESET_OFFSET))(this);
		}

		static ::System::Void DoSubmit(::RPG::Client::AnimatorButton* animatorButton)
		{
			return ((::System::Void(*)(::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_DOSUBMIT_OFFSET))(animatorButton);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_UPDATE_OFFSET))(this);
		}

		::System::Void _DoSubmit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__DOSUBMIT_OFFSET))(this);
		}

		::System::Boolean _IsFireUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__ISFIREUP_OFFSET))(this);
		}

		::System::Boolean _IsFireDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__ISFIREDOWN_OFFSET))(this);
		}

		::System::Boolean _IsFireRepeatDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__ISFIREREPEATDOWN_OFFSET))(this);
		}

		::System::Boolean _IsActionMouseTypeLeftButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__ISACTIONMOUSETYPELEFTBUTTON_OFFSET))(this);
		}

		::System::Boolean _IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__ISSELECTED_OFFSET))(this);
		}

		::System::Boolean _IsComboControl(::InControl::PlayerAction* playerAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__ISCOMBOCONTROL_OFFSET))(this, playerAction);
		}

		::System::Void _ClearOtherConflictActionState(::InControl::PlayerAction* playerAction)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__CLEAROTHERCONFLICTACTIONSTATE_OFFSET))(this, playerAction);
		}

		::System::Boolean _HasRegisterComboActionReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__HASREGISTERCOMBOACTIONRELEASED_OFFSET))(this);
		}

		::System::Void _RegisterComboAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__REGISTERCOMBOACTION_OFFSET))(this);
		}

		::System::Void _UnRegisterComboAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON__UNREGISTERCOMBOACTION_OFFSET))(this);
		}

		::System::Boolean IsComboControlReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_ISCOMBOCONTROLRELEASED_OFFSET))(this);
		}

		::System::Boolean IsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_ISINTERACTABLE_OFFSET))(this);
		}

		::System::Boolean get_ActionEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_GET_ACTIONENABLED_OFFSET))(this);
		}

		::System::Void set_ActionEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_SET_ACTIONENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_SubmitEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_GET_SUBMITENABLED_OFFSET))(this);
		}

		::System::Void set_SubmitEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_SET_SUBMITENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_IsOwnerTopPageOrDialogByGamePad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_GET_ISOWNERTOPPAGEORDIALOGBYGAMEPAD_OFFSET))(this);
		}

		::System::Void set_IsOwnerTopPageOrDialogByGamePad(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLBUTTON_SET_ISOWNERTOPPAGEORDIALOGBYGAMEPAD_OFFSET))(this, value);
		}
	};
}
