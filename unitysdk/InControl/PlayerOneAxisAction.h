#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/OneAxisInputControl.h"

namespace InControl { class PlayerAction; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_PLAYERONEAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1803C150)
#define INCONTROL_PLAYERONEAXISACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1803C290)
#define INCONTROL_PLAYERONEAXISACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1803C2B0)
#define INCONTROL_PLAYERONEAXISACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1803C210)
#define INCONTROL_PLAYERONEAXISACTION_PROCESSACTIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1803C230)
#define INCONTROL_PLAYERONEAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x1803C1B0)
#define INCONTROL_PLAYERONEAXISACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1803C2A0)
#define INCONTROL_PLAYERONEAXISACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x1803C2C0)
#define INCONTROL_PLAYERONEAXISACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x1803C220)
#define INCONTROL_PLAYERONEAXISACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x1803AD50)
#define INCONTROL_PLAYERONEAXISACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1803A6E0)

namespace InControl
{
	inline static constexpr unsigned int PlayerOneAxisAction_TypeDefinitionIndex = 37844;

	class PlayerOneAxisAction : public ::InControl::OneAxisInputControl
	{
	public:
		::InControl::PlayerAction* positiveAction; // 0x68
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0x70
		::InControl::PlayerAction* negativeAction; // 0x78
		::System::Object* _UserData_k__BackingField; // 0x80
		::InControl::BindingSourceType LastInputType; // 0x88

		::System::Void _ctor(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_SET_USERDATA_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessActionUpdate(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_PROCESSACTIONUPDATE_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERONEAXISACTION_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}
	};
}
