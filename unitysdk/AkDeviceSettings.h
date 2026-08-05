#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkThreadProperties;

#define AKDEVICESETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F8BC8A0)
#define AKDEVICESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F8BC780)
#define AKDEVICESETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F8BC830)
#define AKDEVICESETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F8BC6C0)
#define AKDEVICESETTINGS_GET_BUSESTREAMCACHE_OFFSET UNITYSDK_OFFSET(0x1F8BD460)
#define AKDEVICESETTINGS_GET_EPOOLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F8BCDD0)
#define AKDEVICESETTINGS_GET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1F8BD260)
#define AKDEVICESETTINGS_GET_PIOMEMORY_OFFSET UNITYSDK_OFFSET(0x1F8BCAD0)
#define AKDEVICESETTINGS_GET_THREADPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F8BD0F0)
#define AKDEVICESETTINGS_GET_UGRANULARITY_OFFSET UNITYSDK_OFFSET(0x1F8BCED0)
#define AKDEVICESETTINGS_GET_UIOMEMORYALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1F8BCCD0)
#define AKDEVICESETTINGS_GET_UIOMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1F8BCBD0)
#define AKDEVICESETTINGS_GET_UMAXCACHEPINNEDBYTES_OFFSET UNITYSDK_OFFSET(0x1F8BD560)
#define AKDEVICESETTINGS_GET_UMAXCONCURRENTIO_OFFSET UNITYSDK_OFFSET(0x1F8BD360)
#define AKDEVICESETTINGS_GET_USCHEDULERTYPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1F8BCFD0)
#define AKDEVICESETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F8BC6D0)
#define AKDEVICESETTINGS_SET_BUSESTREAMCACHE_OFFSET UNITYSDK_OFFSET(0x1F8BD3E0)
#define AKDEVICESETTINGS_SET_EPOOLATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1F8BCD50)
#define AKDEVICESETTINGS_SET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET UNITYSDK_OFFSET(0x1F8BD1D0)
#define AKDEVICESETTINGS_SET_PIOMEMORY_OFFSET UNITYSDK_OFFSET(0x1F8BCA50)
#define AKDEVICESETTINGS_SET_THREADPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1F8BD050)
#define AKDEVICESETTINGS_SET_UGRANULARITY_OFFSET UNITYSDK_OFFSET(0x1F8BCE50)
#define AKDEVICESETTINGS_SET_UIOMEMORYALIGNMENT_OFFSET UNITYSDK_OFFSET(0x1F8BCC50)
#define AKDEVICESETTINGS_SET_UIOMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1F8BCB50)
#define AKDEVICESETTINGS_SET_UMAXCACHEPINNEDBYTES_OFFSET UNITYSDK_OFFSET(0x1F8BD4E0)
#define AKDEVICESETTINGS_SET_UMAXCONCURRENTIO_OFFSET UNITYSDK_OFFSET(0x1F8BD2E0)
#define AKDEVICESETTINGS_SET_USCHEDULERTYPEFLAGS_OFFSET UNITYSDK_OFFSET(0x1F8BCF50)
#define AKDEVICESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8BC6B0)

inline static constexpr unsigned int AkDeviceSettings_TypeDefinitionIndex = 33595;

class AkDeviceSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	static ::System::IntPtr getCPtr(::AkDeviceSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkDeviceSettings*))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_pIOMemory(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_PIOMEMORY_OFFSET))(this, value);
	}

	::System::IntPtr get_pIOMemory()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_PIOMEMORY_OFFSET))(this);
	}

	::System::Void set_uIOMemorySize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UIOMEMORYSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uIOMemorySize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UIOMEMORYSIZE_OFFSET))(this);
	}

	::System::Void set_uIOMemoryAlignment(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UIOMEMORYALIGNMENT_OFFSET))(this, value);
	}

	::System::UInt32 get_uIOMemoryAlignment()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UIOMEMORYALIGNMENT_OFFSET))(this);
	}

	::System::Void set_ePoolAttributes(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_EPOOLATTRIBUTES_OFFSET))(this, value);
	}

	::System::UInt32 get_ePoolAttributes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_EPOOLATTRIBUTES_OFFSET))(this);
	}

	::System::Void set_uGranularity(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UGRANULARITY_OFFSET))(this, value);
	}

	::System::UInt32 get_uGranularity()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UGRANULARITY_OFFSET))(this);
	}

	::System::Void set_uSchedulerTypeFlags(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_USCHEDULERTYPEFLAGS_OFFSET))(this, value);
	}

	::System::UInt32 get_uSchedulerTypeFlags()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_USCHEDULERTYPEFLAGS_OFFSET))(this);
	}

	::System::Void set_threadProperties(::AkThreadProperties* value)
	{
		return ((::System::Void(*)(::PVOID, ::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_THREADPROPERTIES_OFFSET))(this, value);
	}

	::AkThreadProperties* get_threadProperties()
	{
		return ((::AkThreadProperties*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_THREADPROPERTIES_OFFSET))(this);
	}

	::System::Void set_fTargetAutoStmBufferLength(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET))(this, value);
	}

	::System::Single get_fTargetAutoStmBufferLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_FTARGETAUTOSTMBUFFERLENGTH_OFFSET))(this);
	}

	::System::Void set_uMaxConcurrentIO(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UMAXCONCURRENTIO_OFFSET))(this, value);
	}

	::System::UInt32 get_uMaxConcurrentIO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UMAXCONCURRENTIO_OFFSET))(this);
	}

	::System::Void set_bUseStreamCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_BUSESTREAMCACHE_OFFSET))(this, value);
	}

	::System::Boolean get_bUseStreamCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_BUSESTREAMCACHE_OFFSET))(this);
	}

	::System::Void set_uMaxCachePinnedBytes(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_SET_UMAXCACHEPINNEDBYTES_OFFSET))(this, value);
	}

	::System::UInt32 get_uMaxCachePinnedBytes()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDEVICESETTINGS_GET_UMAXCACHEPINNEDBYTES_OFFSET))(this);
	}
};
