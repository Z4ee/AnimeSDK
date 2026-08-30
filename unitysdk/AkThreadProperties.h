#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTHREADPROPERTIES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1EF48020)
#define AKTHREADPROPERTIES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF47E30)
#define AKTHREADPROPERTIES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EF47F50)
#define AKTHREADPROPERTIES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF47D80)
#define AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x1EF48430)
#define AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x1EF482C0)
#define AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1EF485A0)
#define AKTHREADPROPERTIES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1EF47DD0)
#define AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x1EF48370)
#define AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x1EF48200)
#define AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1EF484E0)
#define AKTHREADPROPERTIES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF48650)
#define AKTHREADPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF47D70)

inline static constexpr unsigned int AkThreadProperties_TypeDefinitionIndex = 43613;

class AkThreadProperties : public ::System::Object
{
public:
	::System::IntPtr swigCPtr; // 0x10
	::System::Boolean swigCMemOwn; // 0x18

	::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES__CTOR_1_OFFSET))(this);
	}

	static ::System::IntPtr getCPtr(::AkThreadProperties* a1)
	{
		return ((::System::IntPtr(*)(::AkThreadProperties*))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GETCPTR_OFFSET))(a1);
	}

	::System::Void setCPtr(::System::IntPtr a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SETCPTR_OFFSET))(this, a1);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_DISPOSE_OFFSET))(this);
	}

	::System::Void Dispose_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_DISPOSE_1_OFFSET))(this, a1);
	}

	::System::Void set_nPriority(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET))(this, a1);
	}

	::System::Int32 get_nPriority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET))(this);
	}

	::System::Void set_dwAffinityMask(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET))(this, a1);
	}

	::System::UInt32 get_dwAffinityMask()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET))(this);
	}

	::System::Void set_uStackSize(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET))(this, a1);
	}

	::System::UInt32 get_uStackSize()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET))(this);
	}
};
