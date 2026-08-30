#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EF51E20)
#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF51C30)
#define AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EF51D50)
#define AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF51B80)
#define AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF51BD0)
#define AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF51B70)

inline static constexpr unsigned int AkUnityPlatformSpecificSettings_TypeDefinitionIndex = 43614;

class AkUnityPlatformSpecificSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

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
