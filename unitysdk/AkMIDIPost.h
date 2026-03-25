#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkMIDIEvent.h"

namespace UnityEngine { class GameObject; }

#define AKMIDIPOST_CLONE_OFFSET UNITYSDK_OFFSET(0x18BBEE40)
#define AKMIDIPOST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BBE910)
#define AKMIDIPOST_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18BBE7F0)
#define AKMIDIPOST_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x18BBEF60)
#define AKMIDIPOST_GET_UOFFSET_OFFSET UNITYSDK_OFFSET(0x18BBEB80)
#define AKMIDIPOST_POSTONEVENT_OFFSET UNITYSDK_OFFSET(0x18BBEC30)
#define AKMIDIPOST_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18BBE840)
#define AKMIDIPOST_SET_UOFFSET_OFFSET UNITYSDK_OFFSET(0x18BBEAC0)
#define AKMIDIPOST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18BBF010)
#define AKMIDIPOST__CTOR_OFFSET UNITYSDK_OFFSET(0x18BBE760)
#define AKMIDIPOST___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BBF120)
#define AKMIDIPOST___IFIXBASEPROXY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18BBF110)

inline static constexpr unsigned int AkMIDIPost_TypeDefinitionIndex = 34496;

class AkMIDIPost : public ::AkMIDIEvent
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIPOST__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOST__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIPost* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIPost*))((::PBYTE)hIl2Cpp + AKMIDIPOST_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIPOST_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Dispose(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIPOST_DISPOSE_OFFSET))(this, disposing);
	}

	::System::Void set_uOffset(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKMIDIPOST_SET_UOFFSET_OFFSET))(this, value);
	}

	::System::UInt32 get_uOffset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOST_GET_UOFFSET_OFFSET))(this);
	}

	::AKRESULT PostOnEvent(::System::UInt32 in_eventID, ::UnityEngine::GameObject* in_gameObjectID, ::System::UInt32 in_uNumPosts)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKMIDIPOST_POSTONEVENT_OFFSET))(this, in_eventID, in_gameObjectID, in_uNumPosts);
	}

	::System::Void Clone(::AkMIDIPost* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIPost*))((::PBYTE)hIl2Cpp + AKMIDIPOST_CLONE_OFFSET))(this, other);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKMIDIPOST_GETSIZEOF_OFFSET))();
	}

	::System::Void __iFixBaseProxy_setCPtr(::System::IntPtr P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIPOST___IFIXBASEPROXY_SETCPTR_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIPOST___IFIXBASEPROXY_DISPOSE_OFFSET))(this, P0);
	}
};
