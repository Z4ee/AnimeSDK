#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A5BBDAD85E6CC6A3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CEF4C9D902AD6FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A1B20)

inline static constexpr unsigned int Class_1_4CEF4C9D902AD6FD_TypeDefinitionIndex = 36476;

class Class_1_4CEF4C9D902AD6FD : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* LCOCDLIECKJ; // 0x10
	::System::String* HEFLHPGKLCI; // 0x18
	::System::String* EBMNJMIKNPP; // 0x20
	::System::String* PEGNLFICABO; // 0x28
	::System::Boolean BHCLAFHOEAO; // 0x30
	::System::Int32 CADHBHHCKPO; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEF4C9D902AD6FD__CTOR_OFFSET))(this);
	}
};
