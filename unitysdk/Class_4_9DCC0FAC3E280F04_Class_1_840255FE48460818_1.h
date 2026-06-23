#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_4_9DCC0FAC3E280F04;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_9DCC0FAC3E280F04_CLASS_1_840255FE48460818_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11DF2EF0)

inline static constexpr unsigned int Class_4_9DCC0FAC3E280F04_Class_1_840255FE48460818_1_TypeDefinitionIndex = 69198;

class Class_4_9DCC0FAC3E280F04_Class_1_840255FE48460818_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_5; // 0x18
	::Struct_2_FE9BD044832BC9C3 Field_1_3; // 0x48
	::Struct_2_FE9BD044832BC9C3 Field_1_4; // 0x78
	::Class_4_9DCC0FAC3E280F04* Field_1_0; // 0xA8
	::System::UInt32 Field_1_1; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_9DCC0FAC3E280F04_CLASS_1_840255FE48460818_1__CTOR_OFFSET))(this);
	}
};
