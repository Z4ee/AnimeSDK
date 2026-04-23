#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTHREADPROPERTIES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A663C10)
#define AKTHREADPROPERTIES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A663B20)
#define AKTHREADPROPERTIES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A663BA0)
#define AKTHREADPROPERTIES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1A663A10)
#define AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x1A663FE0)
#define AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A663E70)
#define AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1A664150)
#define AKTHREADPROPERTIES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1A663A60)
#define AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x1A663F20)
#define AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x1A663DB0)
#define AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1A664090)
#define AKTHREADPROPERTIES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A664200)
#define AKTHREADPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1A663A00)

inline static constexpr unsigned int AkThreadProperties_TypeDefinitionIndex = 40360;

class AkThreadProperties : public ::System::Object
{
public:
	::System::Boolean swigCMemOwn; // 0x10
	::System::IntPtr swigCPtr; // 0x18

	::System::Void _ctor(::System::IntPtr cPtr, ::System::Boolean cMemoryOwn)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES__CTOR_OFFSET))(this, cPtr, cMemoryOwn);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkThreadProperties* obj)
	{
		return ((::System::IntPtr(*)(::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GETCPTR_OFFSET))(obj);
	}

	::System::Void setCPtr(::System::IntPtr cPtr)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SETCPTR_OFFSET))(this, cPtr);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean disposing)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_DISPOSE_1_OFFSET))(this, disposing);
	}

	::System::Void set_nPriority(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET))(this, value);
	}

	::System::Int32 get_nPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET))(this);
	}

	::System::Void set_dwAffinityMask(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET))(this, value);
	}

	::System::UInt32 get_dwAffinityMask()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET))(this);
	}

	::System::Void set_uStackSize(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET))(this, value);
	}

	::System::UInt32 get_uStackSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET))(this);
	}
};
