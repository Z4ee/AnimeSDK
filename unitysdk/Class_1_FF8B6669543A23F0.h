#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF8B6669543A23F0_GET_ASYNCLATENCYWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x108DBFF0)
#define CLASS_1_FF8B6669543A23F0_GET_DEFAULTTOPN_OFFSET UNITYSDK_OFFSET(0x108DC010)
#define CLASS_1_FF8B6669543A23F0_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x108DBFD0)
#define CLASS_1_FF8B6669543A23F0_SET_ASYNCLATENCYWINDOWSIZE_OFFSET UNITYSDK_OFFSET(0x108DC000)
#define CLASS_1_FF8B6669543A23F0_SET_DEFAULTTOPN_OFFSET UNITYSDK_OFFSET(0x108DC020)
#define CLASS_1_FF8B6669543A23F0_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x108DBFE0)
#define CLASS_1_FF8B6669543A23F0__CTOR_OFFSET UNITYSDK_OFFSET(0x108DC030)

inline static constexpr unsigned int Class_1_FF8B6669543A23F0_TypeDefinitionIndex = 63298;

class Class_1_FF8B6669543A23F0 : public ::System::Object
{
public:
	::System::Int32 _DefaultTopN_k__BackingField; // 0x10
	::System::Boolean _Enabled_k__BackingField; // 0x14
	::System::Int32 _AsyncLatencyWindowSize_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0__CTOR_OFFSET))(this);
	}

	::System::Boolean get_Enabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0_GET_ENABLED_OFFSET))(this);
	}

	::System::Void set_Enabled(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0_SET_ENABLED_OFFSET))(this, value);
	}

	::System::Int32 get_AsyncLatencyWindowSize()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0_GET_ASYNCLATENCYWINDOWSIZE_OFFSET))(this);
	}

	::System::Void set_AsyncLatencyWindowSize(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0_SET_ASYNCLATENCYWINDOWSIZE_OFFSET))(this, value);
	}

	::System::Int32 get_DefaultTopN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0_GET_DEFAULTTOPN_OFFSET))(this);
	}

	::System::Void set_DefaultTopN(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF8B6669543A23F0_SET_DEFAULTTOPN_OFFSET))(this, value);
	}
};
