#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3FA3408D26F011B5_Struct_2_04C26CA3FB0A8AD7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_403;
class Class_0_16E4307DCC419505_448;
class Class_2_4D17F746B52D1E89;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3FA3408D26F011B5_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x9833DE0)
#define CLASS_1_3FA3408D26F011B5_METHOD_1_8DA83CB5F2ABA671_OFFSET UNITYSDK_OFFSET(0x9833CE0)
#define CLASS_1_3FA3408D26F011B5_METHOD_1_BCF8753A810B98E8_OFFSET UNITYSDK_OFFSET(0x9833E80)
#define CLASS_1_3FA3408D26F011B5__CTOR_OFFSET UNITYSDK_OFFSET(0x9833FB0)

inline static constexpr unsigned int Class_1_3FA3408D26F011B5_TypeDefinitionIndex = 49875;

class Class_1_3FA3408D26F011B5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_3FA3408D26F011B5_Struct_2_04C26CA3FB0A8AD7>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FA3408D26F011B5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DA83CB5F2ABA671(::Class_0_16E4307DCC419505_448* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_448*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3FA3408D26F011B5_METHOD_1_8DA83CB5F2ABA671_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_448* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_448*))((::PBYTE)hIl2Cpp + CLASS_1_3FA3408D26F011B5_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_403* Method_1_BCF8753A810B98E8(::Class_2_4D17F746B52D1E89* a1)
	{
		return ((::Class_0_16E4307DCC419505_403*(*)(::PVOID, ::Class_2_4D17F746B52D1E89*))((::PBYTE)hIl2Cpp + CLASS_1_3FA3408D26F011B5_METHOD_1_BCF8753A810B98E8_OFFSET))(this, a1);
	}
};
