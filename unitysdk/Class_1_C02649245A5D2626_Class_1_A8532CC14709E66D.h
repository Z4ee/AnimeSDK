#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C02649245A5D2626_Enum_3_3F747909115DC2A7.h"
#include "unitysdk/Struct_2_24A53FACD918DAF7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_460;
class Class_3_D92ADC48CDFCC09B;
class MonoUITableScrollV2;
class MonoUITableScrollV2_InitScrollViewData;
namespace System { template <typename T> class Func_1; }
namespace System::Collections { class IEnumerable; }

#define CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D_METHOD_1_AD9AE57E8BE12BAB_OFFSET UNITYSDK_OFFSET(0x155362D0)
#define CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D_METHOD_1_CF4A1869CDF10DCD_OFFSET UNITYSDK_OFFSET(0x15536830)
#define CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D_METHOD_1_FB36EB856C65D51B_OFFSET UNITYSDK_OFFSET(0x15536170)
#define CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D__CTOR_OFFSET UNITYSDK_OFFSET(0x15536160)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_A8532CC14709E66D_TypeDefinitionIndex = 52529;

class Class_1_C02649245A5D2626_Class_1_A8532CC14709E66D : public ::System::Object
{
public:
	::Struct_2_24A53FACD918DAF7 Field_1_5; // 0x10
	::System::Func_1<::MonoUITableScrollV2_InitScrollViewData*>* Field_1_1; // 0x20
	::Class_3_D92ADC48CDFCC09B* Field_1_6; // 0x28
	::Class_0_16E4307DCC419505_460* Field_1_4; // 0x30
	::MonoUITableScrollV2* Field_1_2; // 0x38
	::Class_1_C02649245A5D2626_Enum_3_3F747909115DC2A7 Field_1_3; // 0x40
	::System::Boolean Field_1_7; // 0x44
	::System::Boolean Field_1_0; // 0x45

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FB36EB856C65D51B(::MonoUITableScrollV2* a1, ::System::Collections::IEnumerable* a2, ::System::Collections::IEnumerable* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D_METHOD_1_FB36EB856C65D51B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD9AE57E8BE12BAB(::MonoUITableScrollV2* a1, ::System::Collections::IEnumerable* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D_METHOD_1_AD9AE57E8BE12BAB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF4A1869CDF10DCD(::System::Collections::IEnumerable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_A8532CC14709E66D_METHOD_1_CF4A1869CDF10DCD_OFFSET))(this, a1);
	}
};
