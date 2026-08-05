#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_245;
class Class_1_5FE54A470A8B09B4;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3FF857A0877EA521_STRUCT_2_2D3CDD19DC92B612_METHOD_2_7D21D8548943D577_OFFSET UNITYSDK_OFFSET(0x7F7C90)

inline static constexpr unsigned int Class_3_3FF857A0877EA521_Struct_2_2D3CDD19DC92B612_TypeDefinitionIndex = 85503;

struct alignas(8) Class_3_3FF857A0877EA521_Struct_2_2D3CDD19DC92B612
{
	::Class_0_16E4307DCC419505_245* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>>* Field_2_7; // 0x18
	::System::Collections::Generic::List_1<::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::Class_1_5FE54A470A8B09B4*>>* Field_2_6; // 0x20

	::System::Void Method_2_7D21D8548943D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3FF857A0877EA521_STRUCT_2_2D3CDD19DC92B612_METHOD_2_7D21D8548943D577_OFFSET))(this);
	}
};
