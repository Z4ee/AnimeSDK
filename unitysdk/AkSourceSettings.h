#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKSOURCESETTINGS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E6B3550)
#define AKSOURCESETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B3650)
#define AKSOURCESETTINGS_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E6B30A0)
#define AKSOURCESETTINGS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E6B2F80)
#define AKSOURCESETTINGS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E6B3030)
#define AKSOURCESETTINGS_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1E6B2EC0)
#define AKSOURCESETTINGS_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1E6B35D0)
#define AKSOURCESETTINGS_GET_PMEDIAMEMORY_OFFSET UNITYSDK_OFFSET(0x1E6B33D0)
#define AKSOURCESETTINGS_GET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1E6B32D0)
#define AKSOURCESETTINGS_GET_UMEDIASIZE_OFFSET UNITYSDK_OFFSET(0x1E6B34D0)
#define AKSOURCESETTINGS_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1E6B2ED0)
#define AKSOURCESETTINGS_SET_PMEDIAMEMORY_OFFSET UNITYSDK_OFFSET(0x1E6B3350)
#define AKSOURCESETTINGS_SET_SOURCEID_OFFSET UNITYSDK_OFFSET(0x1E6B3250)
#define AKSOURCESETTINGS_SET_UMEDIASIZE_OFFSET UNITYSDK_OFFSET(0x1E6B3450)
#define AKSOURCESETTINGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B36F0)
#define AKSOURCESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2EB0)

inline static constexpr unsigned int AkSourceSettings_TypeDefinitionIndex = 33015;

class AkSourceSettings : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkSourceSettings* obj)
	{
		return ((::System::IntPtr(*)(::AkSourceSettings*))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_sourceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SET_SOURCEID_OFFSET))(this, value);
	}

	::System::UInt32 get_sourceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GET_SOURCEID_OFFSET))(this);
	}

	::System::Void set_pMediaMemory(::System::IntPtr value)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SET_PMEDIAMEMORY_OFFSET))(this, value);
	}

	::System::IntPtr get_pMediaMemory()
	{
		return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_GET_PMEDIAMEMORY_OFFSET))(this);
	}

	::System::Void set_uMediaSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_SET_UMEDIASIZE_OFFSET))(this, value);
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

	::System::Void Clone(::AkSourceSettings* other)
	{
		return ((::System::Void(*)(::PVOID, ::AkSourceSettings*))((::PBYTE)hIl2Cpp + AKSOURCESETTINGS_CLONE_OFFSET))(this, other);
	}
};
