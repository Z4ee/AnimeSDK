#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D2D7730)
#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D2D7540)
#define AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D2D7660)
#define AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1D2D7490)
#define AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1D2D74E0)
#define AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2D7480)

inline static constexpr unsigned int AkUnityPlatformSpecificSettings_TypeDefinitionIndex = 43614;

class AkUnityPlatformSpecificSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkUnityPlatformSpecificSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}
};
