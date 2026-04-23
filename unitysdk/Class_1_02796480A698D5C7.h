#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_803155C069ACF29F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_02796480A698D5C7__CTOR_OFFSET UNITYSDK_OFFSET(0x180556D0)

inline static constexpr unsigned int Class_1_02796480A698D5C7_TypeDefinitionIndex = 38704;

class Class_1_02796480A698D5C7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_803155C069ACF29F*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Int32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_02796480A698D5C7__CTOR_OFFSET))(this);
	}
};
