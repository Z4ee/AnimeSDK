#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/System/Object.h"

class AkAuxSendValue;
namespace UnityEngine { class GameObject; }

#define AKAUXSENDARRAY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1E6AF110)
#define AKAUXSENDARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1E6AEEB0)
#define AKAUXSENDARRAY_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1E6AF510)
#define AKAUXSENDARRAY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1E6AF1E0)
#define AKAUXSENDARRAY_COUNT_OFFSET UNITYSDK_OFFSET(0x1E6AFA60)
#define AKAUXSENDARRAY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6AEDF0)
#define AKAUXSENDARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E6AEE20)
#define AKAUXSENDARRAY_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1E6AFA50)
#define AKAUXSENDARRAY_GETOBJECTPTR_OFFSET UNITYSDK_OFFSET(0x1E6AEDC0)
#define AKAUXSENDARRAY_GETVALUES_OFFSET UNITYSDK_OFFSET(0x1E6AF820)
#define AKAUXSENDARRAY_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0x1E6AEDD0)
#define AKAUXSENDARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E6AED30)
#define AKAUXSENDARRAY_RESET_OFFSET UNITYSDK_OFFSET(0x1E6AEEA0)
#define AKAUXSENDARRAY_SETVALUES_OFFSET UNITYSDK_OFFSET(0x1E6AF600)
#define AKAUXSENDARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AEC90)

inline static constexpr unsigned int AkAuxSendArray_TypeDefinitionIndex = 33085;

class AkAuxSendArray : public ::System::Object
{
public:
	// static const ::System::Int32 MAX_COUNT = 0x4; // 0x0
	::System::IntPtr m_Buffer; // 0x10
	::System::Int32 m_Count; // 0x18
	::System::Int32 SIZE_OF_AKAUXSENDVALUE; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY__CTOR_OFFSET))(this);
	}

	::AkAuxSendValue* get_Item(::System::Int32 index)
	{
		return ((::AkAuxSendValue*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GET_ITEM_OFFSET))(this, index);
	}

	::System::Boolean get_isFull()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GET_ISFULL_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_DISPOSE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_RESET_OFFSET))(this);
	}

	::System::Boolean Add(::UnityEngine::GameObject* in_listenerGameObj, ::System::UInt32 in_AuxBusID, ::System::Single in_fValue)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_ADD_OFFSET))(this, in_listenerGameObj, in_AuxBusID, in_fValue);
	}

	::System::Boolean Add_1(::System::UInt32 in_AuxBusID, ::System::Single in_fValue)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_ADD_1_OFFSET))(this, in_AuxBusID, in_fValue);
	}

	::System::Boolean Contains(::UnityEngine::GameObject* in_listenerGameObj, ::System::UInt32 in_AuxBusID)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_CONTAINS_OFFSET))(this, in_listenerGameObj, in_AuxBusID);
	}

	::System::Boolean Contains_1(::System::UInt32 in_AuxBusID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_CONTAINS_1_OFFSET))(this, in_AuxBusID);
	}

	::AKRESULT SetValues(::UnityEngine::GameObject* gameObject)
	{
		return ((::AKRESULT(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_SETVALUES_OFFSET))(this, gameObject);
	}

	::AKRESULT GetValues(::UnityEngine::GameObject* gameObject)
	{
		return ((::AKRESULT(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GETVALUES_OFFSET))(this, gameObject);
	}

	::System::IntPtr GetBuffer()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GETBUFFER_OFFSET))(this);
	}

	::System::Int32 Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_COUNT_OFFSET))(this);
	}

	::System::IntPtr GetObjectPtr(::System::Int32 index)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKAUXSENDARRAY_GETOBJECTPTR_OFFSET))(this, index);
	}
};
