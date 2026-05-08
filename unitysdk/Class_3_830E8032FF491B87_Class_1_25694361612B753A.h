#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_D89177B577188692.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define CLASS_3_830E8032FF491B87_CLASS_1_25694361612B753A_METHOD_1_AA08720895458700_OFFSET UNITYSDK_OFFSET(0xDEBF220)
#define CLASS_3_830E8032FF491B87_CLASS_1_25694361612B753A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDEBF270)
#define CLASS_3_830E8032FF491B87_CLASS_1_25694361612B753A__CTOR_OFFSET UNITYSDK_OFFSET(0xDEBF210)

inline static constexpr unsigned int Class_3_830E8032FF491B87_Class_1_25694361612B753A_TypeDefinitionIndex = 67097;

class Class_3_830E8032FF491B87_Class_1_25694361612B753A : public ::System::Object
{
public:
	::Struct_2_D89177B577188692 Field_1_1; // 0x10
	::System::Boolean Field_1_2; // 0x30
	::System::Int32 Field_1_3; // 0x34
	::System::Int32 Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_CLASS_1_25694361612B753A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AA08720895458700(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_CLASS_1_25694361612B753A_METHOD_1_AA08720895458700_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_CLASS_1_25694361612B753A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
