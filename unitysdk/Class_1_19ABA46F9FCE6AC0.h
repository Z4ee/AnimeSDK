#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1059;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_19ABA46F9FCE6AC0_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1595FDD0)
#define CLASS_1_19ABA46F9FCE6AC0_METHOD_1_B956134E4982E6DB_OFFSET UNITYSDK_OFFSET(0x1595FE40)
#define CLASS_1_19ABA46F9FCE6AC0__CTOR_OFFSET UNITYSDK_OFFSET(0x15960090)

inline static constexpr unsigned int Class_1_19ABA46F9FCE6AC0_TypeDefinitionIndex = 73356;

class Class_1_19ABA46F9FCE6AC0 : public ::System::Object
{
public:
	// static const ::System::String* HCOFFMKGIIP; // 0x0
	// static const ::System::String* JOPKGKBKBHI; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19ABA46F9FCE6AC0__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19ABA46F9FCE6AC0_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_B956134E4982E6DB(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_1059* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_1059*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_19ABA46F9FCE6AC0_METHOD_1_B956134E4982E6DB_OFFSET))(this, a1, a2, a3, a4);
	}
};
