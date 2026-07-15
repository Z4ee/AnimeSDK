#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_904;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_785EB16BCF3A9E10_METHOD_1_70CE65E824339FB9_OFFSET UNITYSDK_OFFSET(0xBFB4120)
#define CLASS_1_785EB16BCF3A9E10_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xBFB40B0)
#define CLASS_1_785EB16BCF3A9E10__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB41E0)

inline static constexpr unsigned int Class_1_785EB16BCF3A9E10_TypeDefinitionIndex = 70010;

class Class_1_785EB16BCF3A9E10 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_70CE65E824339FB9(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_904* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_904*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10_METHOD_1_70CE65E824339FB9_OFFSET))(this, a1, a2, a3, a4);
	}
};
