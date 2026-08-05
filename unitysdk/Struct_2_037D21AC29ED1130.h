#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1920A05BA1489633.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/Struct_2_A47ACAABA9AAFE92.h"
#include "unitysdk/System/ValueType.h"

class Class_1_0EB9C77975304C39;
class Class_1_1EA8435E138F2E03;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define STRUCT_2_037D21AC29ED1130_METHOD_2_126AB3935214AA22_1_OFFSET UNITYSDK_OFFSET(0x31CCF0)
#define STRUCT_2_037D21AC29ED1130_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define STRUCT_2_037D21AC29ED1130_METHOD_2_2BF986872A6C8293_OFFSET UNITYSDK_OFFSET(0x7AF5A0)
#define STRUCT_2_037D21AC29ED1130_METHOD_2_7D201B4343E63821_1_OFFSET UNITYSDK_OFFSET(0x3C9DB0)
#define STRUCT_2_037D21AC29ED1130_METHOD_2_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x462A80)

inline static constexpr unsigned int Struct_2_037D21AC29ED1130_TypeDefinitionIndex = 42945;

struct alignas(8) Struct_2_037D21AC29ED1130
{
	::System::Int32 Field_2_3; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::String* Field_2_1; // 0x20
	::Foundation::AssetPath Field_2_0; // 0x28
	::Foundation::AssetPath Field_2_7; // 0x38
	::System::Boolean Field_2_6; // 0x48
	::System::Func_1<::System::Boolean>* Field_2_5; // 0x50
	::System::Boolean Field_2_4; // 0x58
	::System::Boolean Field_2_11; // 0x59
	::System::Boolean Field_2_10; // 0x5A
	::System::Action_1<::System::Int32>* Field_2_9; // 0x60
	::Foundation::AssetPath Field_2_8; // 0x68
	::Struct_2_A47ACAABA9AAFE92 Field_2_15; // 0x78
	::System::Boolean Field_2_14; // 0x90
	::MoleMole::LanguageType Field_2_13; // 0x94
	::Enum_3_1920A05BA1489633 Field_2_12; // 0x98
	::Class_1_0EB9C77975304C39* Field_2_19; // 0xA0
	::Class_1_1EA8435E138F2E03* Field_2_18; // 0xA8

	::System::Void Method_2_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_037D21AC29ED1130_METHOD_2_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_037D21AC29ED1130_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Boolean Method_2_2BF986872A6C8293()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_037D21AC29ED1130_METHOD_2_2BF986872A6C8293_OFFSET))(this);
	}

	::System::Void Method_2_7D201B4343E63821_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_037D21AC29ED1130_METHOD_2_7D201B4343E63821_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_037D21AC29ED1130_METHOD_2_126AB3935214AA22_1_OFFSET))(this);
	}
};
