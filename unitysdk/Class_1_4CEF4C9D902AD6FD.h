#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A5BBDAD85E6CC6A3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4CEF4C9D902AD6FD__CTOR_OFFSET UNITYSDK_OFFSET(0x18D35880)

inline static constexpr unsigned int Class_1_4CEF4C9D902AD6FD_TypeDefinitionIndex = 35615;

class Class_1_4CEF4C9D902AD6FD : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_A5BBDAD85E6CC6A3>* Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEF4C9D902AD6FD__CTOR_OFFSET))(this);
	}
};
