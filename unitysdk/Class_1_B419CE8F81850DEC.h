#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D14E331734C3C6B.h"
#include "unitysdk/Enum_3_AA439AE9E76594AE.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B419CE8F81850DEC__CTOR_OFFSET UNITYSDK_OFFSET(0x165812F0)

inline static constexpr unsigned int Class_1_B419CE8F81850DEC_TypeDefinitionIndex = 67759;

class Class_1_B419CE8F81850DEC : public ::System::Object
{
public:
	::System::UInt32 Field_1_2; // 0x10
	::Enum_3_5D14E331734C3C6B Field_1_4; // 0x14
	::System::Boolean Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x19
	::Enum_3_AA439AE9E76594AE Field_1_5; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B419CE8F81850DEC__CTOR_OFFSET))(this);
	}
};
