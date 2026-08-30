#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_495E445F847601E8_GET_DICEID_OFFSET UNITYSDK_OFFSET(0x18E55010)
#define CLASS_1_495E445F847601E8_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x18E55030)
#define CLASS_1_495E445F847601E8_METHOD_1_037C22711EE6E503_OFFSET UNITYSDK_OFFSET(0x18E54F50)
#define CLASS_1_495E445F847601E8_SET_DICEID_OFFSET UNITYSDK_OFFSET(0x18E55020)
#define CLASS_1_495E445F847601E8_SET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0x18E55040)
#define CLASS_1_495E445F847601E8__CTOR_OFFSET UNITYSDK_OFFSET(0x18E54F40)

inline static constexpr unsigned int Class_1_495E445F847601E8_TypeDefinitionIndex = 75599;

class Class_1_495E445F847601E8 : public ::System::Object
{
public:
	::System::Int64 _UnlockTime_k__BackingField; // 0x10
	::System::UInt32 _DiceID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_495E445F847601E8__CTOR_OFFSET))(this);
	}

	static ::Class_1_495E445F847601E8* Method_1_037C22711EE6E503(::System::UInt32 a1, ::System::Int64 a2)
	{
		return ((::Class_1_495E445F847601E8*(*)(::System::UInt32, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_495E445F847601E8_METHOD_1_037C22711EE6E503_OFFSET))(a1, a2);
	}

	::System::UInt32 get_DiceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_495E445F847601E8_GET_DICEID_OFFSET))(this);
	}

	::System::Void set_DiceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_495E445F847601E8_SET_DICEID_OFFSET))(this, a1);
	}

	::System::Int64 get_UnlockTime()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_495E445F847601E8_GET_UNLOCKTIME_OFFSET))(this);
	}

	::System::Void set_UnlockTime(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_495E445F847601E8_SET_UNLOCKTIME_OFFSET))(this, a1);
	}
};
