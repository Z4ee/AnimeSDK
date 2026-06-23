#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKRESOURCEMONITORDATASUMMARY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E8038B0)
#define AKRESOURCEMONITORDATASUMMARY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E803790)
#define AKRESOURCEMONITORDATASUMMARY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E803840)
#define AKRESOURCEMONITORDATASUMMARY_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E8036D0)
#define AKRESOURCEMONITORDATASUMMARY_GET_NBACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1E804000)
#define AKRESOURCEMONITORDATASUMMARY_GET_PHYSICALVOICES_OFFSET UNITYSDK_OFFSET(0x1E803D00)
#define AKRESOURCEMONITORDATASUMMARY_GET_PLUGINCPU_OFFSET UNITYSDK_OFFSET(0x1E803C00)
#define AKRESOURCEMONITORDATASUMMARY_GET_TOTALCPU_OFFSET UNITYSDK_OFFSET(0x1E803AF0)
#define AKRESOURCEMONITORDATASUMMARY_GET_TOTALVOICES_OFFSET UNITYSDK_OFFSET(0x1E803F00)
#define AKRESOURCEMONITORDATASUMMARY_GET_VIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1E803E00)
#define AKRESOURCEMONITORDATASUMMARY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E8036E0)
#define AKRESOURCEMONITORDATASUMMARY_SET_NBACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1E803F80)
#define AKRESOURCEMONITORDATASUMMARY_SET_PHYSICALVOICES_OFFSET UNITYSDK_OFFSET(0x1E803C80)
#define AKRESOURCEMONITORDATASUMMARY_SET_PLUGINCPU_OFFSET UNITYSDK_OFFSET(0x1E803B70)
#define AKRESOURCEMONITORDATASUMMARY_SET_TOTALCPU_OFFSET UNITYSDK_OFFSET(0x1E803A60)
#define AKRESOURCEMONITORDATASUMMARY_SET_TOTALVOICES_OFFSET UNITYSDK_OFFSET(0x1E803E80)
#define AKRESOURCEMONITORDATASUMMARY_SET_VIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1E803D80)
#define AKRESOURCEMONITORDATASUMMARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E804080)
#define AKRESOURCEMONITORDATASUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8036C0)

inline static constexpr unsigned int AkResourceMonitorDataSummary_TypeDefinitionIndex = 33010;

class AkResourceMonitorDataSummary : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkResourceMonitorDataSummary* obj)
	{
		return ((::System::IntPtr(*)(::AkResourceMonitorDataSummary*))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_totalCPU(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_TOTALCPU_OFFSET))(this, value);
	}

	::System::Single get_totalCPU()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_TOTALCPU_OFFSET))(this);
	}

	::System::Void set_pluginCPU(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_PLUGINCPU_OFFSET))(this, value);
	}

	::System::Single get_pluginCPU()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_PLUGINCPU_OFFSET))(this);
	}

	::System::Void set_physicalVoices(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_PHYSICALVOICES_OFFSET))(this, value);
	}

	::System::UInt32 get_physicalVoices()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_PHYSICALVOICES_OFFSET))(this);
	}

	::System::Void set_virtualVoices(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_VIRTUALVOICES_OFFSET))(this, value);
	}

	::System::UInt32 get_virtualVoices()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_VIRTUALVOICES_OFFSET))(this);
	}

	::System::Void set_totalVoices(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_TOTALVOICES_OFFSET))(this, value);
	}

	::System::UInt32 get_totalVoices()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_TOTALVOICES_OFFSET))(this);
	}

	::System::Void set_nbActiveEvents(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_NBACTIVEEVENTS_OFFSET))(this, value);
	}

	::System::UInt32 get_nbActiveEvents()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_NBACTIVEEVENTS_OFFSET))(this);
	}
};
