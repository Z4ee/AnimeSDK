#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C55AEAF8486FB7B9;

#define CLASS_1_B26E06FC40F846CD_GET_CURREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C8E0)
#define CLASS_1_B26E06FC40F846CD_GET_GAINREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C920)
#define CLASS_1_B26E06FC40F846CD_GET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x1655C940)
#define CLASS_1_B26E06FC40F846CD_GET_LASTREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C8C0)
#define CLASS_1_B26E06FC40F846CD_GET_REVENUECURRENCY_OFFSET UNITYSDK_OFFSET(0x1655C8A0)
#define CLASS_1_B26E06FC40F846CD_GET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C900)
#define CLASS_1_B26E06FC40F846CD_SET_CURREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C8F0)
#define CLASS_1_B26E06FC40F846CD_SET_GAINREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C930)
#define CLASS_1_B26E06FC40F846CD_SET_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x1655C950)
#define CLASS_1_B26E06FC40F846CD_SET_LASTREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C8D0)
#define CLASS_1_B26E06FC40F846CD_SET_REVENUECURRENCY_OFFSET UNITYSDK_OFFSET(0x1655C8B0)
#define CLASS_1_B26E06FC40F846CD_SET_TARGETREVENUE_OFFSET UNITYSDK_OFFSET(0x1655C910)
#define CLASS_1_B26E06FC40F846CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1655C960)

inline static constexpr unsigned int Class_1_B26E06FC40F846CD_TypeDefinitionIndex = 79748;

class Class_1_B26E06FC40F846CD : public ::System::Object
{
public:
	::Class_1_C55AEAF8486FB7B9* _RevenueCurrency_k__BackingField; // 0x10
	::System::Boolean _IsLevelMax_k__BackingField; // 0x18
	::System::UInt32 _TargetRevenue_k__BackingField; // 0x1C
	::System::UInt32 _CurRevenue_k__BackingField; // 0x20
	::System::UInt32 _LastRevenue_k__BackingField; // 0x24
	::System::UInt32 _GainRevenue_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD__CTOR_OFFSET))(this);
	}

	::Class_1_C55AEAF8486FB7B9* get_RevenueCurrency()
	{
		return ((::Class_1_C55AEAF8486FB7B9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_GET_REVENUECURRENCY_OFFSET))(this);
	}

	::System::Void set_RevenueCurrency(::Class_1_C55AEAF8486FB7B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C55AEAF8486FB7B9*))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_SET_REVENUECURRENCY_OFFSET))(this, a1);
	}

	::System::UInt32 get_LastRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_GET_LASTREVENUE_OFFSET))(this);
	}

	::System::Void set_LastRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_SET_LASTREVENUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_CurRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_GET_CURREVENUE_OFFSET))(this);
	}

	::System::Void set_CurRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_SET_CURREVENUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_TargetRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_GET_TARGETREVENUE_OFFSET))(this);
	}

	::System::Void set_TargetRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_SET_TARGETREVENUE_OFFSET))(this, a1);
	}

	::System::UInt32 get_GainRevenue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_GET_GAINREVENUE_OFFSET))(this);
	}

	::System::Void set_GainRevenue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_SET_GAINREVENUE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsLevelMax()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_GET_ISLEVELMAX_OFFSET))(this);
	}

	::System::Void set_IsLevelMax(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B26E06FC40F846CD_SET_ISLEVELMAX_OFFSET))(this, a1);
	}
};
