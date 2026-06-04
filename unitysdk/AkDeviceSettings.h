#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkThreadProperties;

#define AKDEVICESETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B42B780)
#define AKDEVICESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B42B660)
#define AKDEVICESETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B42B710)
#define AKDEVICESETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B42B520)
#define AKDEVICESETTINGS_GET_BUSESTREAMCACHE_OFFSET UNITYSDK_OFFSET(0x1B42C590)
#define AKDEVICESETTINGS_GET_EPOOLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B42BDB0)
#define AKDEVICESETTINGS_GET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1B42C370)
#define AKDEVICESETTINGS_GET_PIOMEMORY_OFFSET UNITYSDK_OFFSET(0x1B42BA20)
#define AKDEVICESETTINGS_GET_THREADPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B42C260)
#define AKDEVICESETTINGS_GET_UGRANULARITY_OFFSET UNITYSDK_OFFSET(0x1B42BF20)
#define AKDEVICESETTINGS_GET_UIOMEMORYALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B42BC40)
#define AKDEVICESETTINGS_GET_UIOMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B42BAD0)
#define AKDEVICESETTINGS_GET_UMAXCACHEPINNEDBYTES_OFFSET UNITYSDK_OFFSET(0x1B42C640)
#define AKDEVICESETTINGS_GET_UMAXCONCURRENTIO_OFFSET UNITYSDK_OFFSET(0x1B42C4E0)
#define AKDEVICESETTINGS_GET_USCHEDULERTYPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1B42C090)
#define AKDEVICESETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B42B570)
#define AKDEVICESETTINGS_SET_BUSESTREAMCACHE_OFFSET UNITYSDK_OFFSET(0x1B4250E0)
#define AKDEVICESETTINGS_SET_EPOOLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1B42BCF0)
#define AKDEVICESETTINGS_SET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1B425020)
#define AKDEVICESETTINGS_SET_PIOMEMORY_OFFSET UNITYSDK_OFFSET(0x1B42B960)
#define AKDEVICESETTINGS_SET_THREADPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1B42C140)
#define AKDEVICESETTINGS_SET_UGRANULARITY_OFFSET UNITYSDK_OFFSET(0x1B42BE60)
#define AKDEVICESETTINGS_SET_UIOMEMORYALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1B42BB80)
#define AKDEVICESETTINGS_SET_UIOMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1B424F60)
#define AKDEVICESETTINGS_SET_UMAXCACHEPINNEDBYTES_OFFSET UNITYSDK_OFFSET(0x1B4251A0)
#define AKDEVICESETTINGS_SET_UMAXCONCURRENTIO_OFFSET UNITYSDK_OFFSET(0x1B42C420)
#define AKDEVICESETTINGS_SET_USCHEDULERTYPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1B42BFD0)
#define AKDEVICESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B42B510)

inline static constexpr unsigned int AkDeviceSettings_TypeDefinitionIndex = 41115;

class AkDeviceSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::IntPtr getCPtr(::AkDeviceSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_pIOMemory(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_PIOMEMORY_OFFSET))(this, a1);
	}

	::System::IntPtr get_pIOMemory()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_PIOMEMORY_OFFSET))(this);
	}

	::System::Void set_uIOMemorySize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UIOMEMORYSIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uIOMemorySize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UIOMEMORYSIZE_OFFSET))(this);
	}

	::System::Void set_uIOMemoryAlignment(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UIOMEMORYALIGNMENT_OFFSET))(this, a1);
	}

	::System::UInt32 get_uIOMemoryAlignment()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UIOMEMORYALIGNMENT_OFFSET))(this);
	}

	::System::Void set_ePoolAttributes(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_EPOOLATTRIBUTES_OFFSET))(this, a1);
	}

	::System::UInt32 get_ePoolAttributes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_EPOOLATTRIBUTES_OFFSET))(this);
	}

	::System::Void set_uGranularity(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UGRANULARITY_OFFSET))(this, a1);
	}

	::System::UInt32 get_uGranularity()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UGRANULARITY_OFFSET))(this);
	}

	::System::Void set_uSchedulerTypeFlags(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_USCHEDULERTYPEFLAGS_OFFSET))(this, a1);
	}

	::System::UInt32 get_uSchedulerTypeFlags()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_USCHEDULERTYPEFLAGS_OFFSET))(this);
	}

	::System::Void set_threadProperties(::AkThreadProperties* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_THREADPROPERTIES_OFFSET))(this, a1);
	}

	::AkThreadProperties* get_threadProperties()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_THREADPROPERTIES_OFFSET))(this);
	}

	::System::Void set_fTargetAutoStmBufferLength(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET))(this, a1);
	}

	::System::Single get_fTargetAutoStmBufferLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET))(this);
	}

	::System::Void set_uMaxConcurrentIO(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UMAXCONCURRENTIO_OFFSET))(this, a1);
	}

	::System::UInt32 get_uMaxConcurrentIO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UMAXCONCURRENTIO_OFFSET))(this);
	}

	::System::Void set_bUseStreamCache(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_BUSESTREAMCACHE_OFFSET))(this, a1);
	}

	::System::Boolean get_bUseStreamCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_BUSESTREAMCACHE_OFFSET))(this);
	}

	::System::Void set_uMaxCachePinnedBytes(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UMAXCACHEPINNEDBYTES_OFFSET))(this, a1);
	}

	::System::UInt32 get_uMaxCachePinnedBytes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UMAXCACHEPINNEDBYTES_OFFSET))(this);
	}
};
