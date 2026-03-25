#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkMIDIPost;
namespace UnityEngine { class GameObject; }

#define AKMIDIPOSTARRAY_COUNT_OFFSET UNITYSDK_OFFSET(0x18BBFAC0)
#define AKMIDIPOSTARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18BBF590)
#define AKMIDIPOSTARRAY_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x18BBFA80)
#define AKMIDIPOSTARRAY_GETOBJECTPTR_OFFSET UNITYSDK_OFFSET(0x18BBF350)
#define AKMIDIPOSTARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18BBF1D0)
#define AKMIDIPOSTARRAY_POSTONEVENT_1_OFFSET UNITYSDK_OFFSET(0x18BBF810)
#define AKMIDIPOSTARRAY_POSTONEVENT_OFFSET UNITYSDK_OFFSET(0x18BBF610)
#define AKMIDIPOSTARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18BBF3B0)
#define AKMIDIPOSTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBF130)

inline static constexpr unsigned int AkMIDIPostArray_TypeDefinitionIndex = 34603;

class AkMIDIPostArray : public ::System::Object
{
public:
	::System::Int32 SIZE_OF; // 0x10
	::System::Int32 m_Count; // 0x14
	::System::IntPtr m_Buffer; // 0x18

	::System::Void _ctor(::System::Int32 size)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY__CTOR_OFFSET))(this, size);
	}

	::AkMIDIPost* get_Item(::System::Int32 index)
	{
		return ((::AkMIDIPost*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_GET_ITEM_OFFSET))(this, index);
	}

	::System::Void set_Item(::System::Int32 index, ::AkMIDIPost* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AkMIDIPost*))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_SET_ITEM_OFFSET))(this, index, value);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void PostOnEvent(::System::UInt32 in_eventID, ::UnityEngine::GameObject* gameObject)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_POSTONEVENT_OFFSET))(this, in_eventID, gameObject);
	}

	::System::Void PostOnEvent_1(::System::UInt32 in_eventID, ::UnityEngine::GameObject* gameObject, ::System::Int32 count)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_POSTONEVENT_1_OFFSET))(this, in_eventID, gameObject, count);
	}

	::System::IntPtr GetBuffer()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_GETBUFFER_OFFSET))(this);
	}

	::System::Int32 Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_COUNT_OFFSET))(this);
	}

	::System::IntPtr GetObjectPtr(::System::Int32 index)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_GETOBJECTPTR_OFFSET))(this, index);
	}
};
