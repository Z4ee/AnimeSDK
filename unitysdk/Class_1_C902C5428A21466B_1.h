#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_75B8E35856A8AD03;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C902C5428A21466B_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165FA3D0)
#define CLASS_1_C902C5428A21466B_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165FA140)
#define CLASS_1_C902C5428A21466B_1_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x165FA430)
#define CLASS_1_C902C5428A21466B_1_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x165FA1C0)
#define CLASS_1_C902C5428A21466B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x165FA600)

inline static constexpr unsigned int Class_1_C902C5428A21466B_1_TypeDefinitionIndex = 43056;

class Class_1_C902C5428A21466B_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_75B8E35856A8AD03*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_1_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_C902C5428A21466B_1_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}
};
