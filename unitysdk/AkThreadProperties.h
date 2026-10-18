#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKTHREADPROPERTIES_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F5E1E50)
#define AKTHREADPROPERTIES_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F5E1C60)
#define AKTHREADPROPERTIES_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F5E1D80)
#define AKTHREADPROPERTIES_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F5E1BB0)
#define AKTHREADPROPERTIES_GET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x1F5E2260)
#define AKTHREADPROPERTIES_GET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F5E20F0)
#define AKTHREADPROPERTIES_GET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1F5E23D0)
#define AKTHREADPROPERTIES_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F5E1C00)
#define AKTHREADPROPERTIES_SET_DWAFFINITYMASK_OFFSET UNITYSDK_OFFSET(0x1F5E21A0)
#define AKTHREADPROPERTIES_SET_NPRIORITY_OFFSET UNITYSDK_OFFSET(0x1F5E2030)
#define AKTHREADPROPERTIES_SET_USTACKSIZE_OFFSET UNITYSDK_OFFSET(0x1F5E2310)
#define AKTHREADPROPERTIES__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5E2480)
#define AKTHREADPROPERTIES__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E1BA0)

inline static constexpr unsigned int AkThreadProperties_TypeDefinitionIndex = 44805;

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
