#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define AKAUXSENDVALUE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5CEE80)
#define AKAUXSENDVALUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5CED90)
#define AKAUXSENDVALUE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5CEE10)
#define AKAUXSENDVALUE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5CEC80)
#define AKAUXSENDVALUE_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1A5CF890)
#define AKAUXSENDVALUE_GET_AUXBUSID_OFFSET UNITYSDK_OFFSET(0x1A5CF250)
#define AKAUXSENDVALUE_GET_FCONTROLVALUE_OFFSET UNITYSDK_OFFSET(0x1A5CF3C0)
#define AKAUXSENDVALUE_GET_LISTENERID_OFFSET UNITYSDK_OFFSET(0x1A5CF0E0)
#define AKAUXSENDVALUE_ISSAME_OFFSET UNITYSDK_OFFSET(0x1A5CF680)
#define AKAUXSENDVALUE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5CECD0)
#define AKAUXSENDVALUE_SET_AUXBUSID_OFFSET UNITYSDK_OFFSET(0x1A5CF190)
#define AKAUXSENDVALUE_SET_FCONTROLVALUE_OFFSET UNITYSDK_OFFSET(0x1A5CF300)
#define AKAUXSENDVALUE_SET_LISTENERID_OFFSET UNITYSDK_OFFSET(0x1A5CF020)
#define AKAUXSENDVALUE_SET_OFFSET UNITYSDK_OFFSET(0x1A5CF470)
#define AKAUXSENDVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5CDF80)

inline static constexpr unsigned int AkAuxSendValue_TypeDefinitionIndex = 40274;

class AkAuxSendValue : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkAuxSendValue* obj)
	{
		return ((::System::IntPtr(*)(::AkAuxSendValue*))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_listenerID(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_SET_LISTENERID_OFFSET))(this, value);
	}

	::System::UInt64 get_listenerID()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_GET_LISTENERID_OFFSET))(this);
	}

	::System::Void set_auxBusID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_SET_AUXBUSID_OFFSET))(this, value);
	}

	::System::UInt32 get_auxBusID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_GET_AUXBUSID_OFFSET))(this);
	}

	::System::Void set_fControlValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_SET_FCONTROLVALUE_OFFSET))(this, value);
	}

	::System::Single get_fControlValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_GET_FCONTROLVALUE_OFFSET))(this);
	}

	::System::Void Set(::UnityEngine::GameObject* listener, ::System::UInt32 id, ::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_SET_OFFSET))(this, listener, id, value);
	}

	::System::Boolean IsSame(::UnityEngine::GameObject* listener, ::System::UInt32 id)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_ISSAME_OFFSET))(this, listener, id);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKAUXSENDVALUE_GETSIZEOF_OFFSET))();
	}
};
