#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/TwoAxisInputControl.h"

namespace InControl { class PlayerAction; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define INCONTROL_PLAYERTWOAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x14987D40)
#define INCONTROL_PLAYERTWOAXISACTION_GET_INVERTXAXIS_OFFSET UNITYSDK_OFFSET(0x14987D00)
#define INCONTROL_PLAYERTWOAXISACTION_GET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x14987D20)
#define INCONTROL_PLAYERTWOAXISACTION_GET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x14987EA0)
#define INCONTROL_PLAYERTWOAXISACTION_GET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x14987EC0)
#define INCONTROL_PLAYERTWOAXISACTION_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x14987E20)
#define INCONTROL_PLAYERTWOAXISACTION_PROCESSACTIONUPDATE_OFFSET UNITYSDK_OFFSET(0x14987E40)
#define INCONTROL_PLAYERTWOAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET UNITYSDK_OFFSET(0x14987DB0)
#define INCONTROL_PLAYERTWOAXISACTION_SET_INVERTXAXIS_OFFSET UNITYSDK_OFFSET(0x14987D10)
#define INCONTROL_PLAYERTWOAXISACTION_SET_INVERTYAXIS_OFFSET UNITYSDK_OFFSET(0x14987D30)
#define INCONTROL_PLAYERTWOAXISACTION_SET_LOWERDEADZONE_OFFSET UNITYSDK_OFFSET(0x14987EB0)
#define INCONTROL_PLAYERTWOAXISACTION_SET_UPPERDEADZONE_OFFSET UNITYSDK_OFFSET(0x14987ED0)
#define INCONTROL_PLAYERTWOAXISACTION_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x14987E30)
#define INCONTROL_PLAYERTWOAXISACTION_UPDATE_OFFSET UNITYSDK_OFFSET(0x14986370)
#define INCONTROL_PLAYERTWOAXISACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x14985CC0)

namespace InControl
{
	inline static constexpr unsigned int PlayerTwoAxisAction_TypeDefinitionIndex = 39512;

	class PlayerTwoAxisAction : public ::InControl::TwoAxisInputControl
	{
	public:
		::InControl::PlayerAction* negativeXAction; // 0x78
		::InControl::PlayerAction* positiveXAction; // 0x80
		::InControl::PlayerAction* negativeYAction; // 0x88
		::System::Object* _UserData_k__BackingField; // 0x90
		::InControl::PlayerAction* positiveYAction; // 0x98
		::System::Action_1<::InControl::BindingSourceType>* OnLastInputTypeChanged; // 0xA0
		::System::Boolean _InvertXAxis_k__BackingField; // 0xA8
		::System::Boolean _InvertYAxis_k__BackingField; // 0xA9
		::InControl::BindingSourceType LastInputType; // 0xAC

		::System::Void _ctor(::InControl::PlayerAction* a1, ::InControl::PlayerAction* a2, ::InControl::PlayerAction* a3, ::InControl::PlayerAction* a4)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_InvertXAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_INVERTXAXIS_OFFSET))(this);
		}

		::System::Void set_InvertXAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_INVERTXAXIS_OFFSET))(this, a1);
		}

		::System::Boolean get_InvertYAxis()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_INVERTYAXIS_OFFSET))(this);
		}

		::System::Void set_InvertYAxis(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_INVERTYAXIS_OFFSET))(this, a1);
		}

		::System::Void add_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_ADD_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnLastInputTypeChanged(::System::Action_1<::InControl::BindingSourceType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::InControl::BindingSourceType>*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_REMOVE_ONLASTINPUTTYPECHANGED_OFFSET))(this, a1);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_USERDATA_OFFSET))(this, a1);
		}

		::System::Void Update(::System::UInt64 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessActionUpdate(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_PROCESSACTIONUPDATE_OFFSET))(this, a1);
		}

		::System::Single get_LowerDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_LOWERDEADZONE_OFFSET))(this);
		}

		::System::Void set_LowerDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_LOWERDEADZONE_OFFSET))(this, a1);
		}

		::System::Single get_UpperDeadZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_GET_UPPERDEADZONE_OFFSET))(this);
		}

		::System::Void set_UpperDeadZone(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_PLAYERTWOAXISACTION_SET_UPPERDEADZONE_OFFSET))(this, a1);
		}
	};
}
