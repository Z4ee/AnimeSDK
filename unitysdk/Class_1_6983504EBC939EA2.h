#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6983504EBC939EA2_METHOD_1_16E792B668863BDD_OFFSET UNITYSDK_OFFSET(0x1376F1D0)
#define CLASS_1_6983504EBC939EA2_METHOD_1_36B3D1A9B4C33064_OFFSET UNITYSDK_OFFSET(0x1376F130)
#define CLASS_1_6983504EBC939EA2_METHOD_1_E02D6E530C8895FB_OFFSET UNITYSDK_OFFSET(0x1376EE20)
#define CLASS_1_6983504EBC939EA2__CTOR_OFFSET UNITYSDK_OFFSET(0x1376EE10)

inline static constexpr unsigned int Class_1_6983504EBC939EA2_TypeDefinitionIndex = 55158;

class Class_1_6983504EBC939EA2 : public ::System::Object
{
public:
	::System::Double Field_1_4; // 0x10
	::System::Double Field_1_7; // 0x18
	::System::Double Field_1_5; // 0x20
	::System::Double Field_1_6; // 0x28
	::System::UInt32 Field_1_0; // 0x30
	::MoleMole::Config::EntityType Field_1_1; // 0x34
	::System::Int32 Field_1_2; // 0x38
	::System::Double Field_1_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6983504EBC939EA2__CTOR_OFFSET))(this);
	}

	::Class_1_6983504EBC939EA2* Method_1_E02D6E530C8895FB(::Class_1_6983504EBC939EA2* a1)
	{
		return ((::Class_1_6983504EBC939EA2*(*)(::PVOID, ::Class_1_6983504EBC939EA2*))((::PBYTE)hIl2Cpp + CLASS_1_6983504EBC939EA2_METHOD_1_E02D6E530C8895FB_OFFSET))(this, a1);
	}

	::Class_1_6983504EBC939EA2* Method_1_16E792B668863BDD(::Class_1_6983504EBC939EA2* a1)
	{
		return ((::Class_1_6983504EBC939EA2*(*)(::PVOID, ::Class_1_6983504EBC939EA2*))((::PBYTE)hIl2Cpp + CLASS_1_6983504EBC939EA2_METHOD_1_16E792B668863BDD_OFFSET))(this, a1);
	}

	static ::System::Void Method_1_36B3D1A9B4C33064(::System::Double& a1, ::System::Double a2, ::System::String* a3, ::Class_1_6983504EBC939EA2* a4)
	{
		return ((::System::Void(*)(::System::Double&, ::System::Double, ::System::String*, ::Class_1_6983504EBC939EA2*))((::PBYTE)hIl2Cpp + CLASS_1_6983504EBC939EA2_METHOD_1_36B3D1A9B4C33064_OFFSET))(a1, a2, a3, a4);
	}
};
