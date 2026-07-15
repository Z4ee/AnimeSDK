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

#define INCONTROL_BINDINGSOURCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17331AF0)
#define INCONTROL_BINDINGSOURCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17331BE0)
#define INCONTROL_BINDINGSOURCE_GET_BOUNDTO_OFFSET UNITYSDK_OFFSET(0x17331BF0)
#define INCONTROL_BINDINGSOURCE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x17331C10)
#define INCONTROL_BINDINGSOURCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x17331940)
#define INCONTROL_BINDINGSOURCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x17331AE0)
#define INCONTROL_BINDINGSOURCE_SET_BOUNDTO_OFFSET UNITYSDK_OFFSET(0x17331C00)
#define INCONTROL_BINDINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17331C20)

namespace InControl
{
	inline static constexpr unsigned int BindingSource_TypeDefinitionIndex = 38637;

	class BindingSource : public ::System::Object
	{
	public:
		::InControl::PlayerAction* _BoundTo_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::InControl::BindingSource* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::InControl::BindingSource* a1, ::InControl::BindingSource* a2)
		{
			return ((::System::Boolean(*)(::InControl::BindingSource*, ::InControl::BindingSource*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_GETHASHCODE_OFFSET))(this);
		}

		::InControl::PlayerAction* get_BoundTo()
		{
			return ((::InControl::PlayerAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_GET_BOUNDTO_OFFSET))(this);
		}

		::System::Void set_BoundTo(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_SET_BOUNDTO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_BINDINGSOURCE_GET_ISVALID_OFFSET))(this);
		}
	};
}
