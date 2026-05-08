#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_FAFA459B9E6E8CB0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x76E0B0)
#define STRUCT_2_FAFA459B9E6E8CB0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x76E020)
#define STRUCT_2_FAFA459B9E6E8CB0_METHOD_2_C05CC8429D406234_OFFSET UNITYSDK_OFFSET(0x76E140)
#define STRUCT_2_FAFA459B9E6E8CB0_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x76E110)

inline static constexpr unsigned int Struct_2_FAFA459B9E6E8CB0_TypeDefinitionIndex = 38963;

struct alignas(8) Struct_2_FAFA459B9E6E8CB0
{
	::System::Int32 Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::UnityEngine::Vector3 Field_2_5; // 0x34
	::UnityEngine::Vector3 Field_2_6; // 0x40

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_FAFA459B9E6E8CB0_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_FAFA459B9E6E8CB0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_FAFA459B9E6E8CB0_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_C05CC8429D406234(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_FAFA459B9E6E8CB0_METHOD_2_C05CC8429D406234_OFFSET))(this, a1, a2);
	}
};
