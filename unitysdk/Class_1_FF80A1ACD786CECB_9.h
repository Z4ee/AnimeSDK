#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_9_GET_CURWAVE_OFFSET UNITYSDK_OFFSET(0xC3394D0)
#define CLASS_1_FF80A1ACD786CECB_9_GET_MAXWAVE_OFFSET UNITYSDK_OFFSET(0xC3394F0)
#define CLASS_1_FF80A1ACD786CECB_9_SET_CURWAVE_OFFSET UNITYSDK_OFFSET(0xC3394E0)
#define CLASS_1_FF80A1ACD786CECB_9_SET_MAXWAVE_OFFSET UNITYSDK_OFFSET(0xC339500)
#define CLASS_1_FF80A1ACD786CECB_9__CTOR_OFFSET UNITYSDK_OFFSET(0xC339510)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_9_TypeDefinitionIndex = 80819;

class Class_1_FF80A1ACD786CECB_9 : public ::System::Object
{
public:
	::System::Int32 _MaxWave_k__BackingField; // 0x10
	::System::Int32 _CurWave_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9__CTOR_OFFSET))(this);
	}

	::System::Int32 get_CurWave()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9_GET_CURWAVE_OFFSET))(this);
	}

	::System::Void set_CurWave(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9_SET_CURWAVE_OFFSET))(this, a1);
	}

	::System::Int32 get_MaxWave()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9_GET_MAXWAVE_OFFSET))(this);
	}

	::System::Void set_MaxWave(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_9_SET_MAXWAVE_OFFSET))(this, a1);
	}
};
