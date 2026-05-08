#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AD5FFEC75B2A1C04_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x114E6940)
#define CLASS_1_AD5FFEC75B2A1C04_FROMFLX_OFFSET UNITYSDK_OFFSET(0x114E6550)
#define CLASS_1_AD5FFEC75B2A1C04_METHOD_1_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x114E69A0)
#define CLASS_1_AD5FFEC75B2A1C04_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x114E65D0)
#define CLASS_1_AD5FFEC75B2A1C04__CTOR_OFFSET UNITYSDK_OFFSET(0x114E6D00)

inline static constexpr unsigned int Class_1_AD5FFEC75B2A1C04_TypeDefinitionIndex = 69129;

class Class_1_AD5FFEC75B2A1C04 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD5FFEC75B2A1C04__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_AD5FFEC75B2A1C04_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AD5FFEC75B2A1C04_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AD5FFEC75B2A1C04_METHOD_1_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_AD5FFEC75B2A1C04_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
