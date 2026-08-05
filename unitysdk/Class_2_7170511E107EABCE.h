#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_210.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_594.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7170511E107EABCE_METHOD_2_6FAF0D92DB4CBA35_OFFSET UNITYSDK_OFFSET(0x1C00AAA0)
#define CLASS_2_7170511E107EABCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C00A6A0)

inline static constexpr unsigned int Class_2_7170511E107EABCE_TypeDefinitionIndex = 14384;

class Class_2_7170511E107EABCE : public ::Class_1_5DA2E7556103D5A3_210
{
public:
	::Il2CppArray<::System::String*>* Field_2_0; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x80
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_2; // 0x88

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_594 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_594, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_7170511E107EABCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_6FAF0D92DB4CBA35()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7170511E107EABCE_METHOD_2_6FAF0D92DB4CBA35_OFFSET))(this);
	}
};
