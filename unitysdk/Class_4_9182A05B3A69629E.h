#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_4_9182A05B3A69629E_METHOD_4_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x16F4BFB0)
#define CLASS_4_9182A05B3A69629E_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16F4C6F0)
#define CLASS_4_9182A05B3A69629E_METHOD_4_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x16F4BCE0)
#define CLASS_4_9182A05B3A69629E__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4C4A0)

inline static constexpr unsigned int Class_4_9182A05B3A69629E_TypeDefinitionIndex = 79304;

class Class_4_9182A05B3A69629E : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_4_6; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_7; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_4; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_4_5; // 0x40
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x48
	::Class_3_CF43FA1E89397A1C* Field_4_10; // 0x50
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_11; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9182A05B3A69629E__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9182A05B3A69629E_METHOD_4_84B92802FDAFF6C8_OFFSET))(this);
	}

	::System::Void Method_4_24AD3B57ADC65069(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_9182A05B3A69629E_METHOD_4_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9182A05B3A69629E_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
