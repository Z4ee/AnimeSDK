#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_A6F3394D7D6EB042_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x158E4A30)
#define CLASS_1_A6F3394D7D6EB042_METHOD_1_2AF0687D0C7623A2_OFFSET UNITYSDK_OFFSET(0x158E4930)
#define CLASS_1_A6F3394D7D6EB042_METHOD_1_D07C876311C143B3_OFFSET UNITYSDK_OFFSET(0x158E4AC0)
#define CLASS_1_A6F3394D7D6EB042__CTOR_OFFSET UNITYSDK_OFFSET(0x158E4920)

inline static constexpr unsigned int Class_1_A6F3394D7D6EB042_TypeDefinitionIndex = 51870;

class Class_1_A6F3394D7D6EB042 : public ::System::Object
{
public:
	::System::Double Field_1_5; // 0x10
	::System::Double Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Double Field_1_7; // 0x28
	::System::UInt32 Field_1_3; // 0x30
	::MoleMole::Config::EntityType Field_1_2; // 0x34
	::System::Double Field_1_0; // 0x38
	::System::Double Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A6F3394D7D6EB042__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_2AF0687D0C7623A2(::System::Double& a1, ::System::Double a2, ::System::String* a3, ::Class_1_A6F3394D7D6EB042* a4)
	{
		return ((::System::Void(*)(::System::Double&, ::System::Double, ::System::String*, ::Class_1_A6F3394D7D6EB042*))((::PBYTE)hIl2Cpp + CLASS_1_A6F3394D7D6EB042_METHOD_1_2AF0687D0C7623A2_OFFSET))(a1, a2, a3, a4);
	}

	::Class_1_A6F3394D7D6EB042* Method_1_16E792B668863BDD(::Class_1_A6F3394D7D6EB042* a1)
	{
		return ((::Class_1_A6F3394D7D6EB042*(*)(::PVOID, ::Class_1_A6F3394D7D6EB042*))((::PBYTE)hIl2Cpp + CLASS_1_A6F3394D7D6EB042_METHOD_1_16E792B668863BDD_OFFSET))(this, a1);
	}

	::Class_1_A6F3394D7D6EB042* Method_1_D07C876311C143B3(::Class_1_A6F3394D7D6EB042* a1)
	{
		return ((::Class_1_A6F3394D7D6EB042*(*)(::PVOID, ::Class_1_A6F3394D7D6EB042*))((::PBYTE)hIl2Cpp + CLASS_1_A6F3394D7D6EB042_METHOD_1_D07C876311C143B3_OFFSET))(this, a1);
	}
};
