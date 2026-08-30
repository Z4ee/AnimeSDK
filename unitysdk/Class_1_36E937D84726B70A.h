#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_36E937D84726B70A_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xBADC130)
#define CLASS_1_36E937D84726B70A_GET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xBADC150)
#define CLASS_1_36E937D84726B70A_GET_RATIO_OFFSET UNITYSDK_OFFSET(0xBADC170)
#define CLASS_1_36E937D84726B70A_METHOD_1_14074EEA61A65013_OFFSET UNITYSDK_OFFSET(0xBADC090)
#define CLASS_1_36E937D84726B70A_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xBADC140)
#define CLASS_1_36E937D84726B70A_SET_OPTIONID_OFFSET UNITYSDK_OFFSET(0xBADC160)
#define CLASS_1_36E937D84726B70A_SET_RATIO_OFFSET UNITYSDK_OFFSET(0xBADC180)
#define CLASS_1_36E937D84726B70A__CTOR_OFFSET UNITYSDK_OFFSET(0xBADC120)

inline static constexpr unsigned int Class_1_36E937D84726B70A_TypeDefinitionIndex = 66331;

class Class_1_36E937D84726B70A : public ::System::Object
{
public:
	::System::UInt32 _EventID_k__BackingField; // 0x10
	::System::UInt32 _OptionID_k__BackingField; // 0x14
	::System::UInt32 _Ratio_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A__CTOR_OFFSET))(this);
	}

	static ::Class_1_36E937D84726B70A* Method_1_14074EEA61A65013(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_36E937D84726B70A*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_METHOD_1_14074EEA61A65013_OFFSET))(a1, a2, a3);
	}

	::System::UInt32 get_EventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_SET_EVENTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_OptionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_GET_OPTIONID_OFFSET))(this);
	}

	::System::Void set_OptionID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_SET_OPTIONID_OFFSET))(this, a1);
	}

	::System::UInt32 get_Ratio()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_36E937D84726B70A_SET_RATIO_OFFSET))(this, a1);
	}
};
