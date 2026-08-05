#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMUSICSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1FB77CB0)
#define AKMUSICSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FB77B90)
#define AKMUSICSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1FB77C40)
#define AKMUSICSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1FB77AD0)
#define AKMUSICSETTINGS_GET_FSTREAMINGLOOKAHEADRATIO_OFFSET UNITYSDK_OFFSET(0x1FB77E60)
#define AKMUSICSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1FB77AE0)
#define AKMUSICSETTINGS_SET_FSTREAMINGLOOKAHEADRATIO_OFFSET UNITYSDK_OFFSET(0x1FB764D0)
#define AKMUSICSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB77AC0)

inline static constexpr unsigned int AkMusicSettings_TypeDefinitionIndex = 33630;

class AkMusicSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkMusicSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkMusicSettings*))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_fStreamingLookAheadRatio(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_SET_FSTREAMINGLOOKAHEADRATIO_OFFSET))(this, value);
	}

	::System::Single get_fStreamingLookAheadRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_GET_FSTREAMINGLOOKAHEADRATIO_OFFSET))(this);
	}
};
