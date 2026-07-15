#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BD633F0)
#define AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BD63200)
#define AKMIDIEVENT_TPROGRAMCHANGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BD63320)
#define AKMIDIEVENT_TPROGRAMCHANGE_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1BD5F1C0)
#define AKMIDIEVENT_TPROGRAMCHANGE_GET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1BD63690)
#define AKMIDIEVENT_TPROGRAMCHANGE_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1BD631A0)
#define AKMIDIEVENT_TPROGRAMCHANGE_SET_BYPROGRAMNUM_OFFSET UNITYSDK_OFFSET(0x1BD635D0)
#define AKMIDIEVENT_TPROGRAMCHANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD63740)
#define AKMIDIEVENT_TPROGRAMCHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5F320)

inline static constexpr unsigned int AkMIDIEvent_tProgramChange_TypeDefinitionIndex = 41954;

class AkMIDIEvent_tProgramChange : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkMIDIEvent_tProgramChange* a1)
	{
		return ((::System::IntPtr(*)(::AkMIDIEvent_tProgramChange*))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_byProgramNum(::System::Byte a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_SET_BYPROGRAMNUM_OFFSET))(this, a1);
	}

	::System::Byte get_byProgramNum()
	{
		return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMIDIEVENT_TPROGRAMCHANGE_GET_BYPROGRAMNUM_OFFSET))(this);
	}
};
