#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AKRESULT.h"
#include "unitysdk/AkMIDIEvent.h"

namespace UnityEngine { class GameObject; }

#define AKMIDIPOST_CLONE_OFFSET UNITYSDK_OFFSET(0x1EEDC980)
#define AKMIDIPOST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EEDC410)
#define AKMIDIPOST_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEDC2C0)
#define AKMIDIPOST_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1EEDCAA0)
#define AKMIDIPOST_GET_UOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDC6C0)
#define AKMIDIPOST_POSTONEVENT_OFFSET UNITYSDK_OFFSET(0x1EEDC770)
#define AKMIDIPOST_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EEDC310)
#define AKMIDIPOST_SET_UOFFSET_OFFSET UNITYSDK_OFFSET(0x1EEDC600)
#define AKMIDIPOST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEDCB50)
#define AKMIDIPOST__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDC230)

inline static constexpr unsigned int AkMIDIPost_TypeDefinitionIndex = 43568;

class AkMIDIPost : public ::AkMIDIEvent
{
public:
	::System::IntPtr swigCPtr; // 0x20

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIPOST__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOST__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIPost* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIPost*))((::PBYTE)hIl2Cpp + AKMIDIPOST_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIPOST_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIPOST_DISPOSE_OFFSET))(this, a1);
	}

	::System::Void set_uOffset(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKMIDIPOST_SET_UOFFSET_OFFSET))(this, a1);
	}

	::System::UInt32 get_uOffset()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIPOST_GET_UOFFSET_OFFSET))(this);
	}

	::AKRESULT PostOnEvent(::System::UInt32 a1, ::UnityEngine::GameObject* a2, ::System::UInt32 a3)
	{
		return ((::AKRESULT(*)(::PVOID, ::System::UInt32, ::UnityEngine::GameObject*, ::System::UInt32))((::PBYTE)hIl2Cpp + AKMIDIPOST_POSTONEVENT_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clone(::AkMIDIPost* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkMIDIPost*))((::PBYTE)hIl2Cpp + AKMIDIPOST_CLONE_OFFSET))(this, a1);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKMIDIPOST_GETSIZEOF_OFFSET))();
	}
};
