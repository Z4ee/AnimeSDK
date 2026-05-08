#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_E795C5D5DDF30620;

#define STRUCT_2_F12BA24DE155B7BB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x746420)
#define STRUCT_2_F12BA24DE155B7BB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x746390)
#define STRUCT_2_F12BA24DE155B7BB_METHOD_2_24FE016FD8ACDD68_OFFSET UNITYSDK_OFFSET(0x7464B0)
#define STRUCT_2_F12BA24DE155B7BB_METHOD_2_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x746480)

inline static constexpr unsigned int Struct_2_F12BA24DE155B7BB_TypeDefinitionIndex = 68580;

struct alignas(8) Struct_2_F12BA24DE155B7BB
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::Class_1_E795C5D5DDF30620* Field_2_2; // 0x28

	/*
	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + STRUCT_2_F12BA24DE155B7BB_FROMFLX_OFFSET))(this, a1);
	}
	*/

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F12BA24DE155B7BB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + STRUCT_2_F12BA24DE155B7BB_METHOD_2_D4DA1493472613E6_OFFSET))(this, a1);
	}
	*/

	::System::Boolean Method_2_24FE016FD8ACDD68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F12BA24DE155B7BB_METHOD_2_24FE016FD8ACDD68_OFFSET))(this, a1, a2);
	}
};
