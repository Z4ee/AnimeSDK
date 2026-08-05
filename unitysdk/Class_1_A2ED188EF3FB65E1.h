#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C4AD88BFF83D12C6;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A2ED188EF3FB65E1__CTOR_OFFSET UNITYSDK_OFFSET(0x147FF5D0)

inline static constexpr unsigned int Class_1_A2ED188EF3FB65E1_TypeDefinitionIndex = 48894;

class Class_1_A2ED188EF3FB65E1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_C4AD88BFF83D12C6*>* Field_1_1; // 0x10
	::System::Boolean Field_1_7; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Int32 Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2ED188EF3FB65E1__CTOR_OFFSET))(this);
	}
};
