#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_121.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_495.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7170511E107EABCE_METHOD_2_6FAF0D92DB4CBA35_OFFSET UNITYSDK_OFFSET(0x17FD14A0)
#define CLASS_2_7170511E107EABCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FD1080)

inline static constexpr unsigned int Class_2_7170511E107EABCE_TypeDefinitionIndex = 13234;

class Class_2_7170511E107EABCE : public ::Class_1_5DA2E7556103D5A3_121
{
public:
	::Il2CppArray<::System::String*>* Field_2_2; // 0x78
	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>* Field_2_0; // 0x80
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x88

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_495 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_495, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_7170511E107EABCE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_6FAF0D92DB4CBA35()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7170511E107EABCE_METHOD_2_6FAF0D92DB4CBA35_OFFSET))(this);
	}
};
