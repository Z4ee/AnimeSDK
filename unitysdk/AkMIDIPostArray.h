#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkMIDIPost;
namespace UnityEngine { class GameObject; }

#define AKMIDIPOSTARRAY_COUNT_OFFSET UNITYSDK_OFFSET(0x1B4452D0)
#define AKMIDIPOSTARRAY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B444DA0)
#define AKMIDIPOSTARRAY_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1B445290)
#define AKMIDIPOSTARRAY_GETOBJECTPTR_OFFSET UNITYSDK_OFFSET(0x1B444B60)
#define AKMIDIPOSTARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B4449E0)
#define AKMIDIPOSTARRAY_POSTONEVENT_1_OFFSET UNITYSDK_OFFSET(0x1B445020)
#define AKMIDIPOSTARRAY_POSTONEVENT_OFFSET UNITYSDK_OFFSET(0x1B444E20)
#define AKMIDIPOSTARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B444BC0)
#define AKMIDIPOSTARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B444940)

inline static constexpr unsigned int AkMIDIPostArray_TypeDefinitionIndex = 41249;

class AkMIDIPostArray : public ::System::Object
{
public:
	::System::Int32 m_Count; // 0x10
	::System::Int32 SIZE_OF; // 0x14
	::System::IntPtr m_Buffer; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY__CTOR_OFFSET))(this, a1);
	}

	::AkMIDIPost* get_Item(::System::Int32 a1)
	{
		return ((::AkMIDIPost*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_GET_ITEM_OFFSET))(this, a1);
	}

	::System::Void set_Item(::System::Int32 a1, ::AkMIDIPost* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::AkMIDIPost*))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_SET_ITEM_OFFSET))(this, a1, a2);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_FINALIZE_OFFSET))(this);
	}

	::System::Void PostOnEvent(::System::UInt32 a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_POSTONEVENT_OFFSET))(this, a1, a2);
	}

	::System::Void PostOnEvent_1(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_POSTONEVENT_1_OFFSET))(this, a1, a2, a3);
	}

	::System::IntPtr GetBuffer()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_GETBUFFER_OFFSET))(this);
	}

	::System::Int32 Count()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_COUNT_OFFSET))(this);
	}

	::System::IntPtr GetObjectPtr(::System::Int32 a1)
	{
		return ((::System::IntPtr(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKMIDIPOSTARRAY_GETOBJECTPTR_OFFSET))(this, a1);
	}
};
