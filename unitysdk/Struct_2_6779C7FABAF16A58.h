#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_6779C7FABAF16A58_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7BAD80)
#define STRUCT_2_6779C7FABAF16A58_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7BACF0)
#define STRUCT_2_6779C7FABAF16A58_METHOD_2_993F934D93B00F1C_OFFSET UNITYSDK_OFFSET(0x7BAE10)
#define STRUCT_2_6779C7FABAF16A58_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7BADE0)

inline static constexpr unsigned int Struct_2_6779C7FABAF16A58_TypeDefinitionIndex = 41240;

struct alignas(8) Struct_2_6779C7FABAF16A58
{
	::System::Int32 Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x18

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_6779C7FABAF16A58_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6779C7FABAF16A58_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_6779C7FABAF16A58_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_993F934D93B00F1C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6779C7FABAF16A58_METHOD_2_993F934D93B00F1C_OFFSET))(this, a1, a2);
	}
};
