#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0348183E3473943B.h"
#include "unitysdk/System/Object.h"

class Class_1_0272D5A0C4F089B0;
class Class_1_70B630442ADDBF4A;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_72E419617CCAA151__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFB9A0)

inline static constexpr unsigned int Class_1_72E419617CCAA151_TypeDefinitionIndex = 34474;

class Class_1_72E419617CCAA151 : public ::System::Object
{
public:
	::Class_1_0272D5A0C4F089B0* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x18
	::Class_2_AEE59ED8DADEC1A1* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::Struct_2_0348183E3473943B, ::Class_1_70B630442ADDBF4A*>* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72E419617CCAA151__CTOR_OFFSET))(this);
	}
};
