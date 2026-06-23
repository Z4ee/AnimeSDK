#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSTREAMMGRSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E716490)
#define AKSTREAMMGRSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E716370)
#define AKSTREAMMGRSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E716420)
#define AKSTREAMMGRSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E7162B0)
#define AKSTREAMMGRSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E7162C0)
#define AKSTREAMMGRSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7162A0)

inline static constexpr unsigned int AkStreamMgrSettings_TypeDefinitionIndex = 33018;

class AkStreamMgrSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkStreamMgrSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkStreamMgrSettings*))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSTREAMMGRSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}
};
