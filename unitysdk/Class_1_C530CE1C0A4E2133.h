#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_579;
class Class_1_FBFA092366368ABD;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_C530CE1C0A4E2133_GET_HASHEVENT_OFFSET UNITYSDK_OFFSET(0xCBD7E50)
#define CLASS_1_C530CE1C0A4E2133_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCBD7E60)
#define CLASS_1_C530CE1C0A4E2133_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xCBD7E70)
#define CLASS_1_C530CE1C0A4E2133_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xCBD81C0)
#define CLASS_1_C530CE1C0A4E2133_METHOD_1_8D4201B2E0014339_1_OFFSET UNITYSDK_OFFSET(0xCBD7FB0)
#define CLASS_1_C530CE1C0A4E2133_METHOD_1_8D4201B2E0014339_OFFSET UNITYSDK_OFFSET(0xCBD7E90)
#define CLASS_1_C530CE1C0A4E2133_METHOD_1_E14457E32A550619_OFFSET UNITYSDK_OFFSET(0xCBD80D0)
#define CLASS_1_C530CE1C0A4E2133__CTOR_OFFSET UNITYSDK_OFFSET(0xCBD7E80)

inline static constexpr unsigned int Class_1_C530CE1C0A4E2133_TypeDefinitionIndex = 55724;

class Class_1_C530CE1C0A4E2133 : public ::System::Object
{
public:
	::Class_1_FBFA092366368ABD* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::Class_1_FBFA092366368ABD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_FBFA092366368ABD*))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_HashEvent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_GET_HASHEVENT_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_GET_NAME_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_579* get_Progress()
	{
		return ((::Class_0_16E4307DCC419505_579*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_GET_PROGRESS_OFFSET))(this);
	}

	static ::Class_1_C530CE1C0A4E2133* Method_1_8D4201B2E0014339(::Class_1_C530CE1C0A4E2133* a1, ::System::Action* a2)
	{
		return ((::Class_1_C530CE1C0A4E2133*(*)(::Class_1_C530CE1C0A4E2133*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_METHOD_1_8D4201B2E0014339_OFFSET))(a1, a2);
	}

	static ::Class_1_C530CE1C0A4E2133* Method_1_8D4201B2E0014339_1(::Class_1_C530CE1C0A4E2133* a1, ::System::Action* a2)
	{
		return ((::Class_1_C530CE1C0A4E2133*(*)(::Class_1_C530CE1C0A4E2133*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_METHOD_1_8D4201B2E0014339_1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_E14457E32A550619(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_METHOD_1_E14457E32A550619_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C530CE1C0A4E2133_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}
};
