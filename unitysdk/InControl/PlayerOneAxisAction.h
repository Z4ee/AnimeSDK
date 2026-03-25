#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/OneAxisInputControl.h"

namespace InControl { class PlayerAction; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_PLAYERONEAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C08F70)
#define INCONTROL_PLAYERONEAXISACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C090A0)
#define INCONTROL_PLAYERONEAXISACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C090C0)
#define INCONTROL_PLAYERONEAXISACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C09030)
#define INCONTROL_PLAYERONEAXISACTION_PROCESSACTIONUPDATE_OFFSET UNITYSDK_OFFSET(0x15C09050)
#define INCONTROL_PLAYERONEAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x15C08FD0)
#define INCONTROL_PLAYERONEAXISACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C090B0)
#define INCONTROL_PLAYERONEAXISACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x15C090D0)
#define INCONTROL_PLAYERONEAXISACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x15C09040)
#define INCONTROL_PLAYERONEAXISACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x15C07C20)
#define INCONTROL_PLAYERONEAXISACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15C07630)

namespace InControl
{
	inline static constexpr unsigned int PlayerOneAxisAction_TypeDefinitionIndex = 31392;

	class PlayerOneAxisAction : public ::InControl::OneAxisInputControl
	{
	public:
		::InControl::PlayerAction* negativeAction; // 0x68
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x70
		::System::Object* _UserData_k__BackingField; // 0x78
		::InControl::PlayerAction* positiveAction; // 0x80
		::InControl::BindingSourceType LastInputType; // 0x88

		::System::Void _ctor(::InControl::PlayerAction* negativeAction, ::InControl::PlayerAction* positiveAction)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION__CTOR_OFFSET))(this, negativeAction, positiveAction);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, value);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_SET_USERDATA_OFFSET))(this, value);
		}

		::System::Void Update(::System::UInt64 updateTick, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_UPDATE_OFFSET))(this, updateTick, deltaTime);
		}

		::System::Void ProcessActionUpdate(::InControl::PlayerAction* action)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_PROCESSACTIONUPDATE_OFFSET))(this, action);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_SET_LOWERDEADZONE_OFFSET))(this, value);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_SET_UPPERDEADZONE_OFFSET))(this, value);
		}
	};
}
