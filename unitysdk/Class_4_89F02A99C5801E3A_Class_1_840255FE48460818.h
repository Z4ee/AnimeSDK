#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"

class Class_4_89F02A99C5801E3A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_89F02A99C5801E3A_CLASS_1_840255FE48460818__CTOR_OFFSET UNITYSDK_OFFSET(0x140B63A0)

inline static constexpr unsigned int Class_4_89F02A99C5801E3A_Class_1_840255FE48460818_TypeDefinitionIndex = 74916;

class Class_4_89F02A99C5801E3A_Class_1_840255FE48460818 : public ::System::Object
{
public:
	::Struct_2_FE9BD044832BC9C3 Field_1_7; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_6; // 0x40
	::Class_4_89F02A99C5801E3A* Field_1_2; // 0x70
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_0; // 0x78
	::System::UInt32 Field_1_1; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_89F02A99C5801E3A_CLASS_1_840255FE48460818__CTOR_OFFSET))(this);
	}
};
