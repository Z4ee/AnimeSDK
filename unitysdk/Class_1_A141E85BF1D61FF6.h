#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A141E85BF1D61FF6_GET_CURREVENUE_OFFSET UNITYSDK_OFFSET(0x12CE91C0)
#define CLASS_1_A141E85BF1D61FF6_GET_GAINREVENUE_OFFSET UNITYSDK_OFFSET(0x12CE9200)
#define CLASS_1_A141E85BF1D61FF6_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x12CE9220)
#define CLASS_1_A141E85BF1D61FF6_GET_LASTREVENUE_OFFSET UNITYSDK_OFFSET(0x12CE91A0)
#define CLASS_1_A141E85BF1D61FF6_GET_REVENUETARGET_OFFSET UNITYSDK_OFFSET(0x12CE91E0)
#define CLASS_1_A141E85BF1D61FF6_METHOD_1_8A60F9E42FFB05FE_OFFSET UNITYSDK_OFFSET(0x12CE9240)
#define CLASS_1_A141E85BF1D61FF6_SET_CURREVENUE_OFFSET UNITYSDK_OFFSET(0x12CE91D0)
#define CLASS_1_A141E85BF1D61FF6_SET_GAINREVENUE_OFFSET UNITYSDK_OFFSET(0x12CE9210)
#define CLASS_1_A141E85BF1D61FF6_SET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x12CE9230)
#define CLASS_1_A141E85BF1D61FF6_SET_LASTREVENUE_OFFSET UNITYSDK_OFFSET(0x12CE91B0)
#define CLASS_1_A141E85BF1D61FF6_SET_REVENUETARGET_OFFSET UNITYSDK_OFFSET(0x12CE91F0)
#define CLASS_1_A141E85BF1D61FF6__CTOR_OFFSET UNITYSDK_OFFSET(0x12CE92F0)

inline static constexpr unsigned int Class_1_A141E85BF1D61FF6_TypeDefinitionIndex = 80190;

class Class_1_A141E85BF1D61FF6 : public ::System::Object
{
public:
	::System::UInt32 _GainRevenue_k__BackingField; // 0x10
	::System::UInt32 _CurRevenue_k__BackingField; // 0x14
	::System::UInt32 _LastRevenue_k__BackingField; // 0x18
	::System::Boolean _IsLevelMax_k__BackingField; // 0x1C
	::System::UInt32 _RevenueTarget_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 get_LastRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_GET_LASTREVENUE_OFFSET))(this);
	}

	::System::Void set_LastRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_SET_LASTREVENUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_GET_CURREVENUE_OFFSET))(this);
	}

	::System::Void set_CurRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_SET_CURREVENUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_RevenueTarget()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_GET_REVENUETARGET_OFFSET))(this);
	}

	::System::Void set_RevenueTarget(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_SET_REVENUETARGET_OFFSET))(this, a1);
	}

	::System::UInt32 get_GainRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_GET_GAINREVENUE_OFFSET))(this);
	}

	::System::Void set_GainRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_SET_GAINREVENUE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLevelMax()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_GET_ISLEVELMAX_OFFSET))(this);
	}

	::System::Void set_IsLevelMax(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_SET_ISLEVELMAX_OFFSET))(this, a1);
	}

	static ::Class_1_A141E85BF1D61FF6* Method_1_8A60F9E42FFB05FE(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::Class_1_A141E85BF1D61FF6*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A141E85BF1D61FF6_METHOD_1_8A60F9E42FFB05FE_OFFSET))(a1, a2, a3, a4, a5);
	}
};
