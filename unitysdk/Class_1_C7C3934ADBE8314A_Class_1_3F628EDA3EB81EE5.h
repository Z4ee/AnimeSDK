#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_GET_ENDZ_OFFSET UNITYSDK_OFFSET(0x1544D5A0)
#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_GET_STARTZ_OFFSET UNITYSDK_OFFSET(0x1544D590)
#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1544D190)
#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_1EFDC1FF423404E3_OFFSET UNITYSDK_OFFSET(0x1544D1F0)
#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_6E349A56A0A2701C_OFFSET UNITYSDK_OFFSET(0x1544D280)
#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_B732CD18428476DA_OFFSET UNITYSDK_OFFSET(0x1544C3E0)
#define CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5__CTOR_OFFSET UNITYSDK_OFFSET(0x1544C370)

inline static constexpr unsigned int Class_1_C7C3934ADBE8314A_Class_1_3F628EDA3EB81EE5_TypeDefinitionIndex = 36615;

class Class_1_C7C3934ADBE8314A_Class_1_3F628EDA3EB81EE5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* KOFMMMDCNAL; // 0x10
	::System::UInt32 _EndZ_k__BackingField; // 0x18
	::System::UInt32 _StartZ_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B732CD18428476DA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_B732CD18428476DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E349A56A0A2701C(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_6E349A56A0A2701C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> Method_1_1EFDC1FF423404E3(::System::Random* a1)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_METHOD_1_1EFDC1FF423404E3_OFFSET))(this, a1);
	}

	::System::UInt32 get_StartZ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_GET_STARTZ_OFFSET))(this);
	}

	::System::UInt32 get_EndZ()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7C3934ADBE8314A_CLASS_1_3F628EDA3EB81EE5_GET_ENDZ_OFFSET))(this);
	}
};
