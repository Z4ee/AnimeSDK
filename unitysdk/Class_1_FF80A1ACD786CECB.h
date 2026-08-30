#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_GET_FLASHCOUNT_OFFSET UNITYSDK_OFFSET(0xB6099D0)
#define CLASS_1_FF80A1ACD786CECB_SET_FLASHCOUNT_OFFSET UNITYSDK_OFFSET(0xB6099E0)
#define CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET UNITYSDK_OFFSET(0xB6099F0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_TypeDefinitionIndex = 50356;

class Class_1_FF80A1ACD786CECB : public ::System::Object
{
public:
	::System::Int32 _FlashCount_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB__CTOR_OFFSET))(this);
	}

	::System::Int32 get_FlashCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_GET_FLASHCOUNT_OFFSET))(this);
	}

	::System::Void set_FlashCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_SET_FLASHCOUNT_OFFSET))(this, a1);
	}
};
