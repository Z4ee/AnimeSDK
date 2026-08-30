#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2AA8C2AD4D02F031_1_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x3A4AA50)
#define STRUCT_2_2AA8C2AD4D02F031_1_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x3A302F0)
#define STRUCT_2_2AA8C2AD4D02F031_1_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x213E0)
#define STRUCT_2_2AA8C2AD4D02F031_1_SET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0x3A4AA60)
#define STRUCT_2_2AA8C2AD4D02F031_1_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x3A4AA40)
#define STRUCT_2_2AA8C2AD4D02F031_1_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x21240)

inline static constexpr unsigned int Struct_2_2AA8C2AD4D02F031_1_TypeDefinitionIndex = 71611;

struct alignas(4) Struct_2_2AA8C2AD4D02F031_1
{
	::System::Single _Ratio_k__BackingField; // 0x10
	::System::Boolean _IsShow_k__BackingField; // 0x14
	::System::Boolean _IsActivate_k__BackingField; // 0x15

	::System::Single get_Ratio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_1_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_1_SET_RATIO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_1_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void set_IsShow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_1_SET_ISSHOW_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActivate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_1_GET_ISACTIVATE_OFFSET))(this);
	}

	::System::Void set_IsActivate(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_1_SET_ISACTIVATE_OFFSET))(this, a1);
	}
};
