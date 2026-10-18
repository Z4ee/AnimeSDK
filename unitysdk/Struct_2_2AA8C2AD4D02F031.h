#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2AA8C2AD4D02F031_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x14EB0)
#define STRUCT_2_2AA8C2AD4D02F031_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x1D00)
#define STRUCT_2_2AA8C2AD4D02F031_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x14EC0)
#define STRUCT_2_2AA8C2AD4D02F031_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x14EA0)

inline static constexpr unsigned int Struct_2_2AA8C2AD4D02F031_TypeDefinitionIndex = 71661;

struct alignas(4) Struct_2_2AA8C2AD4D02F031
{
	::System::Single _Ratio_k__BackingField; // 0x10
	::System::Boolean _IsShow_k__BackingField; // 0x14

	::System::Single get_Ratio()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_SET_RATIO_OFFSET))(this, a1);
	}

	::System::Boolean get_IsShow()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_GET_ISSHOW_OFFSET))(this);
	}

	::System::Void set_IsShow(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2AA8C2AD4D02F031_SET_ISSHOW_OFFSET))(this, a1);
	}
};
