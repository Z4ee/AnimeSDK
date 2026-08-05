#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_C64181B372A82363_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x610150)
#define STRUCT_2_C64181B372A82363_FROMFLX_OFFSET UNITYSDK_OFFSET(0x6100C0)
#define STRUCT_2_C64181B372A82363_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x6101B0)
#define STRUCT_2_C64181B372A82363_METHOD_2_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x6101E0)

inline static constexpr unsigned int Struct_2_C64181B372A82363_TypeDefinitionIndex = 69314;

struct alignas(8) Struct_2_C64181B372A82363
{
	::UnityEngine::Vector3 Field_2_1; // 0x10
	::UnityEngine::Vector3 Field_2_0; // 0x1C
	::System::String* Field_2_7; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_2_6; // 0x30

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_C64181B372A82363_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C64181B372A82363_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_C64181B372A82363_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_C64181B372A82363_METHOD_2_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}
};
