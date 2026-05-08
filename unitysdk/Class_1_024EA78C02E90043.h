#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_024EA78C02E90043_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x11F37A40)
#define CLASS_1_024EA78C02E90043__CTOR_OFFSET UNITYSDK_OFFSET(0x11F37A30)

inline static constexpr unsigned int Class_1_024EA78C02E90043_TypeDefinitionIndex = 49974;

class Class_1_024EA78C02E90043 : public ::System::Object
{
public:
	::System::Double Field_1_4; // 0x10
	::System::Double Field_1_7; // 0x18
	::System::Double Field_1_6; // 0x20
	::System::Double Field_1_5; // 0x28
	::System::Int32 Field_1_2; // 0x30
	::System::UInt32 Field_1_0; // 0x34
	::MoleMole::Config::EntityType Field_1_1; // 0x38
	::System::Double Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_024EA78C02E90043__CTOR_OFFSET))(this);
	}

	::Class_1_024EA78C02E90043* Method_1_16E792B668863BDD(::Class_1_024EA78C02E90043* a1)
	{
		return ((::Class_1_024EA78C02E90043*(*)(::PVOID, ::Class_1_024EA78C02E90043*))((::PBYTE)hIl2Cpp + CLASS_1_024EA78C02E90043_METHOD_1_16E792B668863BDD_OFFSET))(this, a1);
	}
};
