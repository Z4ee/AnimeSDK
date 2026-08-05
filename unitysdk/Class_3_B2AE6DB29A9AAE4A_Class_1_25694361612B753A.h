#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_3_B2AE6DB29A9AAE4A_CLASS_1_25694361612B753A_METHOD_1_AA08720895458700_OFFSET UNITYSDK_OFFSET(0x17817680)
#define CLASS_3_B2AE6DB29A9AAE4A_CLASS_1_25694361612B753A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x178176D0)
#define CLASS_3_B2AE6DB29A9AAE4A_CLASS_1_25694361612B753A__CTOR_OFFSET UNITYSDK_OFFSET(0x17817670)

inline static constexpr unsigned int Class_3_B2AE6DB29A9AAE4A_Class_1_25694361612B753A_TypeDefinitionIndex = 69018;

class Class_3_B2AE6DB29A9AAE4A_Class_1_25694361612B753A : public ::System::Object
{
public:
	::Struct_2_D89177B577188692 Field_1_7; // 0x10
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Boolean Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2AE6DB29A9AAE4A_CLASS_1_25694361612B753A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_B2AE6DB29A9AAE4A_CLASS_1_25694361612B753A_METHOD_1_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2AE6DB29A9AAE4A_CLASS_1_25694361612B753A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
