#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A0005A7419DEF7CE.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_955;
class Class_1_B38D05F57D395ACE;
namespace System { class String; }

#define CLASS_1_785EB16BCF3A9E10_METHOD_1_70CE65E824339FB9_OFFSET UNITYSDK_OFFSET(0xCFD05B0)
#define CLASS_1_785EB16BCF3A9E10_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xCFD0540)
#define CLASS_1_785EB16BCF3A9E10__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD0670)

inline static constexpr unsigned int Class_1_785EB16BCF3A9E10_TypeDefinitionIndex = 73268;

class Class_1_785EB16BCF3A9E10 : public ::System::Object
{
public:
	// static const ::System::String* FFPHPHLDAKD; // 0x0
	// static const ::System::String* HPGFFBPHDKG; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::System::String* Method_1_70CE65E824339FB9(::System::String* a1, ::Struct_2_A0005A7419DEF7CE a2, ::Class_0_16E4307DCC419505_955* a3, ::Class_1_B38D05F57D395ACE* a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::Struct_2_A0005A7419DEF7CE, ::Class_0_16E4307DCC419505_955*, ::Class_1_B38D05F57D395ACE*))((::PBYTE)hIl2Cpp + CLASS_1_785EB16BCF3A9E10_METHOD_1_70CE65E824339FB9_OFFSET))(this, a1, a2, a3, a4);
	}
};
