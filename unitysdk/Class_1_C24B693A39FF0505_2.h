#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6973444D50492F07.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C24B693A39FF0505_2_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x1418E180)
#define CLASS_1_C24B693A39FF0505_2_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1418E1C0)
#define CLASS_1_C24B693A39FF0505_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1418E230)

inline static constexpr unsigned int Class_1_C24B693A39FF0505_2_TypeDefinitionIndex = 61986;

class Class_1_C24B693A39FF0505_2 : public ::System::Object
{
public:
	::Enum_3_6973444D50492F07 Field_1_3; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_2; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_2__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_2_BEFORERECYCLE_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505_2_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}
};
