#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/BindingSourceType.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/InControl/InputDeviceStyle.h"
#include "unitysdk/System/Object.h"

namespace InControl { class InputDevice; }
namespace InControl { class PlayerAction; }
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define INCONTROL_BINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B65D10)
#define INCONTROL_BINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B65D90)
#define INCONTROL_BINDINGSOURCE_GET_BOUNDTO_OFFSET UNITYSDK_OFFSET(0x15B65DA0)
#define INCONTROL_BINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x15B65DC0)
#define INCONTROL_BINDINGSOURCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x15B65C30)
#define INCONTROL_BINDINGSOURCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x15B65CA0)
#define INCONTROL_BINDINGSOURCE_SET_BOUNDTO_OFFSET UNITYSDK_OFFSET(0x15B65DB0)
#define INCONTROL_BINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B65DD0)

namespace InControl
{
	inline static constexpr unsigned int BindingSource_TypeDefinitionIndex = 31377;

	class BindingSource : public ::System::Object
	{
	public:
		::InControl::PlayerAction* _BoundTo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::InControl::BindingSource* a, ::InControl::BindingSource* b)
		{
			return ((::System::Boolean(*)(::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::InControl::BindingSource* a, ::InControl::BindingSource* b)
		{
			return ((::System::Boolean(*)(::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::PlayerAction* get_BoundTo()
		{
			return ((::InControl::PlayerAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_GET_BOUNDTO_OFFSET))(this);
		}

		::System::Void set_BoundTo(::InControl::PlayerAction* value)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_SET_BOUNDTO_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_GET_ISVALID_OFFSET))(this);
		}
	};
}
