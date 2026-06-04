#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKRESOURCEMONITORDATASUMMARY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B456BA0)
#define AKRESOURCEMONITORDATASUMMARY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B456A80)
#define AKRESOURCEMONITORDATASUMMARY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B456B30)
#define AKRESOURCEMONITORDATASUMMARY_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B456940)
#define AKRESOURCEMONITORDATASUMMARY_GET_NBACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B457570)
#define AKRESOURCEMONITORDATASUMMARY_GET_PHYSICALVOICES_OFFSET UNITYSDK_OFFSET(0x1B457120)
#define AKRESOURCEMONITORDATASUMMARY_GET_PLUGINCPU_OFFSET UNITYSDK_OFFSET(0x1B456FB0)
#define AKRESOURCEMONITORDATASUMMARY_GET_TOTALCPU_OFFSET UNITYSDK_OFFSET(0x1B456E40)
#define AKRESOURCEMONITORDATASUMMARY_GET_TOTALVOICES_OFFSET UNITYSDK_OFFSET(0x1B457400)
#define AKRESOURCEMONITORDATASUMMARY_GET_VIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1B457290)
#define AKRESOURCEMONITORDATASUMMARY_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B456990)
#define AKRESOURCEMONITORDATASUMMARY_SET_NBACTIVEEVENTS_OFFSET UNITYSDK_OFFSET(0x1B4574B0)
#define AKRESOURCEMONITORDATASUMMARY_SET_PHYSICALVOICES_OFFSET UNITYSDK_OFFSET(0x1B457060)
#define AKRESOURCEMONITORDATASUMMARY_SET_PLUGINCPU_OFFSET UNITYSDK_OFFSET(0x1B456EF0)
#define AKRESOURCEMONITORDATASUMMARY_SET_TOTALCPU_OFFSET UNITYSDK_OFFSET(0x1B456D80)
#define AKRESOURCEMONITORDATASUMMARY_SET_TOTALVOICES_OFFSET UNITYSDK_OFFSET(0x1B457340)
#define AKRESOURCEMONITORDATASUMMARY_SET_VIRTUALVOICES_OFFSET UNITYSDK_OFFSET(0x1B4571D0)
#define AKRESOURCEMONITORDATASUMMARY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B457620)
#define AKRESOURCEMONITORDATASUMMARY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B456930)

inline static constexpr unsigned int AkResourceMonitorDataSummary_TypeDefinitionIndex = 41165;

class AkResourceMonitorDataSummary : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkResourceMonitorDataSummary* a1)
	{
		return ((::System::IntPtr(*)(::AkResourceMonitorDataSummary*))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_totalCPU(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_TOTALCPU_OFFSET))(this, a1);
	}

	::System::Single get_totalCPU()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_TOTALCPU_OFFSET))(this);
	}

	::System::Void set_pluginCPU(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_PLUGINCPU_OFFSET))(this, a1);
	}

	::System::Single get_pluginCPU()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_PLUGINCPU_OFFSET))(this);
	}

	::System::Void set_physicalVoices(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_PHYSICALVOICES_OFFSET))(this, a1);
	}

	::System::UInt32 get_physicalVoices()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_PHYSICALVOICES_OFFSET))(this);
	}

	::System::Void set_virtualVoices(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_VIRTUALVOICES_OFFSET))(this, a1);
	}

	::System::UInt32 get_virtualVoices()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_VIRTUALVOICES_OFFSET))(this);
	}

	::System::Void set_totalVoices(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_TOTALVOICES_OFFSET))(this, a1);
	}

	::System::UInt32 get_totalVoices()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_TOTALVOICES_OFFSET))(this);
	}

	::System::Void set_nbActiveEvents(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_SET_NBACTIVEEVENTS_OFFSET))(this, a1);
	}

	::System::UInt32 get_nbActiveEvents()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRESOURCEMONITORDATASUMMARY_GET_NBACTIVEEVENTS_OFFSET))(this);
	}
};
