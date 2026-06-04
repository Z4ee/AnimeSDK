#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_3_GET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xA673DB0)
#define CLASS_1_FF80A1ACD786CECB_3_SET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xA673DC0)
#define CLASS_1_FF80A1ACD786CECB_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA673DD0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_3_TypeDefinitionIndex = 70433;

class Class_1_FF80A1ACD786CECB_3 : public ::System::Object
{
public:
	::System::Int32 _OptionIndex_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3__CTOR_OFFSET))(this);
	}

	::System::Int32 get_OptionIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_GET_OPTIONINDEX_OFFSET))(this);
	}

	::System::Void set_OptionIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_3_SET_OPTIONINDEX_OFFSET))(this, a1);
	}
};
