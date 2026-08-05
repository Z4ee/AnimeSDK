#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T1, typename T2> class Class_1_516A565475879095;

#define CLASS_3_5F8DAA47ACDB7251_CLASS_1_703FE6C784279818__CTOR_OFFSET UNITYSDK_OFFSET(0x139030A0)

inline static constexpr unsigned int Class_3_5F8DAA47ACDB7251_Class_1_703FE6C784279818_TypeDefinitionIndex = 70160;

class Class_3_5F8DAA47ACDB7251_Class_1_703FE6C784279818 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::Class_1_516A565475879095<::System::UInt32, ::System::Int32>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x20
	::System::Int32 Field_1_7; // 0x28
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F8DAA47ACDB7251_CLASS_1_703FE6C784279818__CTOR_OFFSET))(this);
	}
};
