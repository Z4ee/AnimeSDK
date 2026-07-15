#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_2_AEE59ED8DADEC1A1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2254CBF47061A452_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x14A61A90)
#define CLASS_1_2254CBF47061A452__CTOR_OFFSET UNITYSDK_OFFSET(0x14A61AF0)

inline static constexpr unsigned int Class_1_2254CBF47061A452_TypeDefinitionIndex = 34650;

class Class_1_2254CBF47061A452 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Class_1_0E117AC86D8E5BCA*, ::System::UInt32>* Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2254CBF47061A452__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_2254CBF47061A452* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2254CBF47061A452*))((::PBYTE)hIl2Cpp + CLASS_1_2254CBF47061A452_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
