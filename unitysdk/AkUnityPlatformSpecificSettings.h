#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18C325A0)
#define AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18C324B0)
#define AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18C32530)
#define AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x18C323A0)
#define AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x18C323F0)
#define AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18C32390)

inline static constexpr unsigned int AkUnityPlatformSpecificSettings_TypeDefinitionIndex = 34542;

class AkUnityPlatformSpecificSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkUnityPlatformSpecificSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkUnityPlatformSpecificSettings*))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKUNITYPLATFORMSPECIFICSETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}
};
