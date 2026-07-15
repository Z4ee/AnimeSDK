#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_3AB81327278AE21C__CTOR_OFFSET UNITYSDK_OFFSET(0x18181F80)

inline static constexpr unsigned int Class_1_3AB81327278AE21C_TypeDefinitionIndex = 35538;

class Class_1_3AB81327278AE21C : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::Struct_2_EAC1BB0F093534A5 Field_1_1; // 0x14
	::System::Int32 Field_1_2; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3AB81327278AE21C__CTOR_OFFSET))(this);
	}
};
