#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define PARADOXNOTION_EVENTDATA_GET_RECEIVER_OFFSET UNITYSDK_OFFSET(0x246290)
#define PARADOXNOTION_EVENTDATA_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define PARADOXNOTION_EVENTDATA_GET_VALUEBOXED_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define PARADOXNOTION_EVENTDATA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x3E3F20)
#define PARADOXNOTION_EVENTDATA_SET_RECEIVER_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define PARADOXNOTION_EVENTDATA_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x446DA0)
#define PARADOXNOTION_EVENTDATA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x446DB0)
#define PARADOXNOTION_EVENTDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA07CA0)
#define PARADOXNOTION_EVENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA07C90)

namespace ParadoxNotion
{
	inline static constexpr unsigned int EventData_TypeDefinitionIndex = 30557;

	struct alignas(8) EventData
	{
		::UnityEngine::GameObject* _receiver_k__BackingField; // 0x10
		::System::Object* _sender_k__BackingField; // 0x18
		::System::Object* _value_k__BackingField; // 0x20

		::System::Void _ctor(::System::Object* value, ::UnityEngine::GameObject* receiver, ::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA__CTOR_OFFSET))(this, value, receiver, sender);
		}

		::System::Void _ctor_1(::UnityEngine::GameObject* receiver, ::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA__CTOR_1_OFFSET))(this, receiver, sender);
		}

		::UnityEngine::GameObject* get_receiver()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_GET_RECEIVER_OFFSET))(this);
		}

		::System::Void set_receiver(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_SET_RECEIVER_OFFSET))(this, value);
		}

		::System::Object* get_sender()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_sender(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_SET_SENDER_OFFSET))(this, value);
		}

		::System::Object* get_value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_SET_VALUE_OFFSET))(this, value);
		}

		::System::Object* get_valueBoxed()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_EVENTDATA_GET_VALUEBOXED_OFFSET))(this);
		}
	};
}
