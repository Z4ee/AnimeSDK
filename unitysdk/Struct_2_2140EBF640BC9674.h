#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/CountDownUIOperation.h"
#include "unitysdk/MoleMole/InLevelTimerWidgetOperation.h"
#include "unitysdk/Struct_2_2140EBF640BC9674_Enum_3_542CC61461ECAA81.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_2140EBF640BC9674_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x12CE9920)

inline static constexpr unsigned int Struct_2_2140EBF640BC9674_TypeDefinitionIndex = 70376;

struct alignas(8) Struct_2_2140EBF640BC9674
{
	::Struct_2_2140EBF640BC9674_Enum_3_542CC61461ECAA81 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x1C
	::System::Boolean Field_2_4; // 0x1D
	::System::String* Field_2_5; // 0x20
	::System::String* Field_2_6; // 0x28
	::System::Boolean Field_2_7; // 0x30
	::MoleMole::FlowCanvas::Nodes::CountDownUIOperation Field_2_8; // 0x34
	::System::Int32 Field_2_9; // 0x38
	::MoleMole::InLevelTimerWidgetOperation Field_2_10; // 0x3C

	static ::Struct_2_2140EBF640BC9674 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_2140EBF640BC9674(*)())((::PBYTE)hIl2Cpp + STRUCT_2_2140EBF640BC9674_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}
};
