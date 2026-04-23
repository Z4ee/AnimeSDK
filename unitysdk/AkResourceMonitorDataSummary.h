#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKRESOURCEMONITORDATASUMMARY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A60BEF0)
#define AKRESOURCEMONITORDATASUMMARY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A60BE00)
#define AKRESOURCEMONITORDATASUMMARY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A60BE80)
#define AKRESOURCEMONITORDATASUMMARY_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A60BCF0)
#define AKRESOURCEMONITORDATASUMMARY_GET_NBACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A60C880)
#define AKRESOURCEMONITORDATASUMMARY_GET_PHYSICALVOICES_OFFSET UNITYSDK_OFFSET(0x1A60C430)
#define AKRESOURCEMONITORDATASUMMARY_GET_PLUGINCPU_OFFSET UNITYSDK_OFFSET(0x1A60C2C0)
#define AKRESOURCEMONITORDATASUMMARY_GET_TOTALCPU_OFFSET UNITYSDK_OFFSET(0x1A60C150)
#define AKRESOURCEMONITORDATASUMMARY_GET_TOTALVOICES_OFFSET UNITYSDK_OFFSET(0x1A60C710)
#define AKRESOURCEMONITORDATASUMMARY_GET_VIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1A60C5A0)
#define AKRESOURCEMONITORDATASUMMARY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A60BD40)
#define AKRESOURCEMONITORDATASUMMARY_SET_NBACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1A60C7C0)
#define AKRESOURCEMONITORDATASUMMARY_SET_PHYSICALVOICES_OFFSET UNITYSDK_OFFSET(0x1A60C370)
#define AKRESOURCEMONITORDATASUMMARY_SET_PLUGINCPU_OFFSET UNITYSDK_OFFSET(0x1A60C200)
#define AKRESOURCEMONITORDATASUMMARY_SET_TOTALCPU_OFFSET UNITYSDK_OFFSET(0x1A60C090)
#define AKRESOURCEMONITORDATASUMMARY_SET_TOTALVOICES_OFFSET UNITYSDK_OFFSET(0x1A60C650)
#define AKRESOURCEMONITORDATASUMMARY_SET_VIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1A60C4E0)
#define AKRESOURCEMONITORDATASUMMARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A60C930)
#define AKRESOURCEMONITORDATASUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60BCE0)

inline static constexpr unsigned int AkResourceMonitorDataSummary_TypeDefinitionIndex = 40338;

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
