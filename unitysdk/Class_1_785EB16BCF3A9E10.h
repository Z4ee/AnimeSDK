#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_866;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_785EB16BCF3A9E10_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0xBA0EF80)
#define CLASS_1_785EB16BCF3A9E10_METHOD_1_70CE65E824339FB9_OFFSET UNITYSDK_OFFSET(0xBA0EFC0)
#define CLASS_1_785EB16BCF3A9E10__CTOR_OFFSET UNITYSDK_OFFSET(0xBA0F080)

inline static constexpr unsigned int Class_1_785EB16BCF3A9E10_TypeDefinitionIndex = 68516;

class Class_1_785EB16BCF3A9E10 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_1_70CE65E824339FB9(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_866* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_866*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10_METHOD_1_70CE65E824339FB9_OFFSET))(this, a1, a2, a3, a4);
	}
};
