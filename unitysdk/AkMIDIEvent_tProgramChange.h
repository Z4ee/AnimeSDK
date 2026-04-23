#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A5F8A60)
#define AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A5F8970)
#define AKMIDIEVENT_TPROGRAMCHANGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5F89F0)
#define AKMIDIEVENT_TPROGRAMCHANGE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5F5040)
#define AKMIDIEVENT_TPROGRAMCHANGE_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1A5F8CC0)
#define AKMIDIEVENT_TPROGRAMCHANGE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A5F88B0)
#define AKMIDIEVENT_TPROGRAMCHANGE_SET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1A5F8C00)
#define AKMIDIEVENT_TPROGRAMCHANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A5F8D70)
#define AKMIDIEVENT_TPROGRAMCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F51A0)

inline static constexpr unsigned int AkMIDIEvent_tProgramChange_TypeDefinitionIndex = 40312;

class AkMIDIEvent_tProgramChange : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tProgramChange* obj)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tProgramChange*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_byProgramNum(::System::Byte value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_SET_BYPROGRAMNUM_OFFSET))(this, value);
	}

	::System::Byte get_byProgramNum()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_GET_BYPROGRAMNUM_OFFSET))(this);
	}
};
