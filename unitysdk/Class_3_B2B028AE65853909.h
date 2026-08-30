#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_61AF3412AEF31413.h"

class Class_1_AC6C63F15E9794D3;
namespace System { class String; }

#define CLASS_3_B2B028AE65853909_GET_STATUSCODE_OFFSET UNITYSDK_OFFSET(0xF40E260)
#define CLASS_3_B2B028AE65853909__CTOR_OFFSET UNITYSDK_OFFSET(0xF40E120)

inline static constexpr unsigned int Class_3_B2B028AE65853909_TypeDefinitionIndex = 69312;

class Class_3_B2B028AE65853909 : public ::Class_2_61AF3412AEF31413
{
public:
	::System::Int64 _StatusCode_k__BackingField; // 0x90

	::System::Void _ctor(::Class_1_AC6C63F15E9794D3* a1, ::System::Int64 a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_B2B028AE65853909__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int64 get_StatusCode()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2B028AE65853909_GET_STATUSCODE_OFFSET))(this);
	}
};
