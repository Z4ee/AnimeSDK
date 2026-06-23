#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"

class Class_3_B4D52F0B1C0DF0FC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_681AE92B8660FA07__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD081B0)

inline static constexpr unsigned int Class_3_681AE92B8660FA07_TypeDefinitionIndex = 88461;

class Class_3_681AE92B8660FA07 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Collections::Generic::List_1<::Class_3_B4D52F0B1C0DF0FC*>* Field_3_2; // 0x10
	::System::Int32 Field_3_1; // 0x18
	::System::UInt32 Field_3_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_681AE92B8660FA07__CTOR_OFFSET))(this);
	}
};
