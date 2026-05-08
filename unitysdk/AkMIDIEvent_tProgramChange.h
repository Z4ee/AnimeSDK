#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1C128460)
#define AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C128340)
#define AKMIDIEVENT_TPROGRAMCHANGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C1283F0)
#define AKMIDIEVENT_TPROGRAMCHANGE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1C128280)
#define AKMIDIEVENT_TPROGRAMCHANGE_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1C128690)
#define AKMIDIEVENT_TPROGRAMCHANGE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1C128290)
#define AKMIDIEVENT_TPROGRAMCHANGE_SET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1C128610)
#define AKMIDIEVENT_TPROGRAMCHANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C128710)
#define AKMIDIEVENT_TPROGRAMCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C128270)

inline static constexpr unsigned int AkMIDIEvent_tProgramChange_TypeDefinitionIndex = 31433;

class AkMIDIEvent_tProgramChange : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

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
