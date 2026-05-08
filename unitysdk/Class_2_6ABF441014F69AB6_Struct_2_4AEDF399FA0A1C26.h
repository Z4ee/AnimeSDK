#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0.h"
#include "unitysdk/Struct_2_A17F88B27FA91D04.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_471;
namespace MoleMole { class MonoTriggerEventDispatcher; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6ABF441014F69AB6_STRUCT_2_4AEDF399FA0A1C26_METHOD_2_EBAF10BBA97B82DD_OFFSET UNITYSDK_OFFSET(0x6B6490)

inline static constexpr unsigned int Class_2_6ABF441014F69AB6_Struct_2_4AEDF399FA0A1C26_TypeDefinitionIndex = 64753;

struct alignas(8) Class_2_6ABF441014F69AB6_Struct_2_4AEDF399FA0A1C26
{
	::Class_0_16E4307DCC419505_471* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_D8480A60B429B44D_Struct_2_96A72A3FF8741EA0<::Struct_2_A17F88B27FA91D04<::System::UInt32, ::System::String*>, ::MoleMole::MonoTriggerEventDispatcher*>>* Field_2_1; // 0x18

	::System::Void Method_2_EBAF10BBA97B82DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ABF441014F69AB6_STRUCT_2_4AEDF399FA0A1C26_METHOD_2_EBAF10BBA97B82DD_OFFSET))(this);
	}
};
