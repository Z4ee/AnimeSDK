#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_FF80A1ACD786CECB_4_GET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xB99DBC0)
#define CLASS_1_FF80A1ACD786CECB_4_SET_OPTIONINDEX_OFFSET UNITYSDK_OFFSET(0xB99DBD0)
#define CLASS_1_FF80A1ACD786CECB_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB99DBE0)

inline static constexpr unsigned int Class_1_FF80A1ACD786CECB_4_TypeDefinitionIndex = 75263;

class Class_1_FF80A1ACD786CECB_4 : public ::System::Object
{
public:
	::System::Int32 _OptionIndex_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_4__CTOR_OFFSET))(this);
	}

	::System::Int32 get_OptionIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_4_GET_OPTIONINDEX_OFFSET))(this);
	}

	::System::Void set_OptionIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FF80A1ACD786CECB_4_SET_OPTIONINDEX_OFFSET))(this, a1);
	}
};
