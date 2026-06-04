#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSOURCESETTINGS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B4A5E30)
#define AKSOURCESETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x1B4A60D0)
#define AKSOURCESETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B4A5400)
#define AKSOURCESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4A51B0)
#define AKSOURCESETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4A5260)
#define AKSOURCESETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4A4D80)
#define AKSOURCESETTINGS_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1B4A5EE0)
#define AKSOURCESETTINGS_GET_PMEDIAMEMORY_OFFSET UNITYSDK_OFFSET(0x1B4A5C10)
#define AKSOURCESETTINGS_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1B4A5960)
#define AKSOURCESETTINGS_GET_UMEDIASIZE_OFFSET UNITYSDK_OFFSET(0x1B4A5D80)
#define AKSOURCESETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1B4A4F60)
#define AKSOURCESETTINGS_SET_PMEDIAMEMORY_OFFSET UNITYSDK_OFFSET(0x1B4A5B50)
#define AKSOURCESETTINGS_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1B4A5740)
#define AKSOURCESETTINGS_SET_UMEDIASIZE_OFFSET UNITYSDK_OFFSET(0x1B4A5CC0)
#define AKSOURCESETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B4A6340)
#define AKSOURCESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A4D70)

inline static constexpr unsigned int AkSourceSettings_TypeDefinitionIndex = 41170;

class AkSourceSettings : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkSourceSettings* a1)
	{
		return ((::System::IntPtr(*)(::AkSourceSettings*))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_sourceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SET_SOURCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_sourceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GET_SOURCEID_OFFSET))(this);
	}

	::System::Void set_pMediaMemory(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SET_PMEDIAMEMORY_OFFSET))(this, a1);
	}

	::System::IntPtr get_pMediaMemory()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GET_PMEDIAMEMORY_OFFSET))(this);
	}

	::System::Void set_uMediaSize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SET_UMEDIASIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uMediaSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GET_UMEDIASIZE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_CLEAR_OFFSET))(this);
	}

	static ::System::Int32 GetSizeOf()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GETSIZEOF_OFFSET))();
	}

	::System::Void Clone(::AkSourceSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::AkSourceSettings*))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_CLONE_OFFSET))(this, a1);
	}
};
