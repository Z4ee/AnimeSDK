#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"
#include "unitysdk/Class_2_CB3261469B65DC31_Struct_2_0839504A496058D2.h"

class Class_1_7325E2A200EF063B;
class Class_2_C956F0B1EE8CC3B3;
class Class_3_627E2A12AA72A749;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CB3261469B65DC31_METHOD_2_9EE145BE7FF75394_OFFSET UNITYSDK_OFFSET(0x1C8B7B80)
#define CLASS_2_CB3261469B65DC31__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8B78E0)

inline static constexpr unsigned int Class_2_CB3261469B65DC31_TypeDefinitionIndex = 43134;

class Class_2_CB3261469B65DC31 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::Class_2_C956F0B1EE8CC3B3* LOALJCPNGLE; // 0x18
	::System::Collections::Generic::List_1<::Class_2_CB3261469B65DC31_Struct_2_0839504A496058D2>* LFBOHIFIKBB; // 0x20
	::System::String* FKFIPBCFLMA; // 0x28
	::Class_3_627E2A12AA72A749* IGHAHBNLIJA; // 0x30
	::System::Int32 NHBAMPEHAAP; // 0x38
	::System::Int32 BFIMIDEOJPI; // 0x3C
	::System::Int32 PNKNLDHFMBL; // 0x40

	::System::Void _ctor(::Class_3_627E2A12AA72A749* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_627E2A12AA72A749*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_CB3261469B65DC31__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9EE145BE7FF75394()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB3261469B65DC31_METHOD_2_9EE145BE7FF75394_OFFSET))(this);
	}
};
