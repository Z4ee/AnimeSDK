#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_6EBD903476086028_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7D7860)
#define STRUCT_2_6EBD903476086028_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7D77D0)
#define STRUCT_2_6EBD903476086028_METHOD_2_507A61720F3CF5FF_OFFSET UNITYSDK_OFFSET(0x7D78F0)
#define STRUCT_2_6EBD903476086028_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7D78C0)

inline static constexpr unsigned int Struct_2_6EBD903476086028_TypeDefinitionIndex = 82145;

struct alignas(8) Struct_2_6EBD903476086028
{
	::System::Int32 Field_2_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x18
	::System::String* Field_2_7; // 0x20
	::System::String* Field_2_6; // 0x28
	::System::Int32 Field_2_5; // 0x30
	::UnityEngine::Vector3 Field_2_4; // 0x34
	::UnityEngine::Vector3 Field_2_11; // 0x40

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_6EBD903476086028_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6EBD903476086028_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_6EBD903476086028_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_507A61720F3CF5FF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6EBD903476086028_METHOD_2_507A61720F3CF5FF_OFFSET))(this, a1, a2);
	}
};
