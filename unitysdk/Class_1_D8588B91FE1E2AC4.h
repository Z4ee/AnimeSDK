#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6814E47C9444716D.h"
#include "unitysdk/Enum_3_AD73F3F0692AA278_1.h"
#include "unitysdk/System/Object.h"

class Class_3_CFE95B82BD52EB3B;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D8588B91FE1E2AC4__CTOR_OFFSET UNITYSDK_OFFSET(0x141CE4E0)

inline static constexpr unsigned int Class_1_D8588B91FE1E2AC4_TypeDefinitionIndex = 64283;

class Class_1_D8588B91FE1E2AC4 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_D8588B91FE1E2AC4*>* Field_1_4; // 0x10
	::Class_3_CFE95B82BD52EB3B* Field_1_3; // 0x18
	::System::Int32 Field_1_5; // 0x20
	::Enum_3_AD73F3F0692AA278_1 Field_1_1; // 0x24
	::Enum_3_6814E47C9444716D Field_1_0; // 0x28
	::System::Int32 Field_1_6; // 0x2C
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D8588B91FE1E2AC4__CTOR_OFFSET))(this);
	}
};
