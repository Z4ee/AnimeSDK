#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKMUSICSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1DA9B190)
#define AKMUSICSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA9AFA0)
#define AKMUSICSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DA9B0C0)
#define AKMUSICSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA9AEF0)
#define AKMUSICSETTINGS_GET_FSTREAMINGLOOKAHEADRATIO_OFFSET UNITYSDK_OFFSET(0x1DA9B430)
#define AKMUSICSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1DA9AF40)
#define AKMUSICSETTINGS_SET_FSTREAMINGLOOKAHEADRATIO_OFFSET UNITYSDK_OFFSET(0x1DA9B370)
#define AKMUSICSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9AEE0)

inline static constexpr unsigned int AkMusicSettings_TypeDefinitionIndex = 43576;

class AkMusicSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkMusicSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkMusicSettings*))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_fStreamingLookAheadRatio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_SET_FSTREAMINGLOOKAHEADRATIO_OFFSET))(this, a1);
	}

	::System::Single get_fStreamingLookAheadRatio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMUSICSETTINGS_GET_FSTREAMINGLOOKAHEADRATIO_OFFSET))(this);
	}
};
