#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define STRUCT_2_201B1BB977AC07F5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x7BF950)
#define STRUCT_2_201B1BB977AC07F5_FROMFLX_OFFSET UNITYSDK_OFFSET(0x7BF8C0)
#define STRUCT_2_201B1BB977AC07F5_METHOD_2_016792848AB8C203_OFFSET UNITYSDK_OFFSET(0x7BF9B0)
#define STRUCT_2_201B1BB977AC07F5_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x7BF9C0)

inline static constexpr unsigned int Struct_2_201B1BB977AC07F5_TypeDefinitionIndex = 77063;

struct alignas(4) Struct_2_201B1BB977AC07F5
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_201B1BB977AC07F5_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_201B1BB977AC07F5_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_016792848AB8C203(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_201B1BB977AC07F5_METHOD_2_016792848AB8C203_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_201B1BB977AC07F5_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/
};
