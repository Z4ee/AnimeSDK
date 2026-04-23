#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/OneAxisInputControl.h"

namespace InControl { class PlayerAction; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_PLAYERONEAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x172068D0)
#define INCONTROL_PLAYERONEAXISACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17206A00)
#define INCONTROL_PLAYERONEAXISACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17206A20)
#define INCONTROL_PLAYERONEAXISACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x17206990)
#define INCONTROL_PLAYERONEAXISACTION_PROCESSACTIONUPDATE_OFFSET UNITYSDK_OFFSET(0x172069B0)
#define INCONTROL_PLAYERONEAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x17206930)
#define INCONTROL_PLAYERONEAXISACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17206A10)
#define INCONTROL_PLAYERONEAXISACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x17206A30)
#define INCONTROL_PLAYERONEAXISACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x172069A0)
#define INCONTROL_PLAYERONEAXISACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x172055F0)
#define INCONTROL_PLAYERONEAXISACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17204FF0)

namespace InControl
{
	inline static constexpr unsigned int PlayerOneAxisAction_TypeDefinitionIndex = 37112;

	class PlayerOneAxisAction : public ::InControl::OneAxisInputControl
	{
	public:
		::System::Object* _UserData_k__BackingField; // 0x68
		::InControl::PlayerAction* negativeAction; // 0x70
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x78
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
