#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8431ED11DDFEB049.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_BD55FB98E7CE49F3_METHOD_2_0D02AF7002A6B470_OFFSET UNITYSDK_OFFSET(0x84F2D0)
#define STRUCT_2_BD55FB98E7CE49F3_METHOD_2_A814B9D584A0EFCC_OFFSET UNITYSDK_OFFSET(0x84F420)

inline static constexpr unsigned int Struct_2_BD55FB98E7CE49F3_TypeDefinitionIndex = 64200;

struct alignas(8) Struct_2_BD55FB98E7CE49F3
{
	::MoleMole::Config::PropertyModifyFunction Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Double Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x21
	::System::Boolean Field_2_5; // 0x22
	::System::Boolean Field_2_6; // 0x23
	::Enum_3_8431ED11DDFEB049 Field_2_7; // 0x24
	::System::UInt32 Field_2_8; // 0x28
	::System::Double Field_2_9; // 0x30
	::System::Boolean Field_2_10; // 0x38

	::System::Void Method_2_0D02AF7002A6B470(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::Enum_3_8431ED11DDFEB049 a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::Enum_3_8431ED11DDFEB049, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_BD55FB98E7CE49F3_METHOD_2_0D02AF7002A6B470_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_A814B9D584A0EFCC(::MoleMole::Config::PropertyModifyFunction a1, ::System::Single a2, ::System::Double a3, ::Enum_3_8431ED11DDFEB049 a4, ::System::Boolean a5, ::System::UInt32 a6, ::System::Boolean a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PropertyModifyFunction, ::System::Single, ::System::Double, ::Enum_3_8431ED11DDFEB049, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_BD55FB98E7CE49F3_METHOD_2_A814B9D584A0EFCC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
