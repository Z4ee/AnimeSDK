#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_C4C04BE5296BEC41_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15492150)
#define CLASS_1_C4C04BE5296BEC41_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15492520)
#define CLASS_1_C4C04BE5296BEC41_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x154925A0)
#define CLASS_1_C4C04BE5296BEC41_METHOD_1_B5C1A24BAF3E28F3_OFFSET UNITYSDK_OFFSET(0x154921B0)
#define CLASS_1_C4C04BE5296BEC41__CTOR_OFFSET UNITYSDK_OFFSET(0x15492BB0)

inline static constexpr unsigned int Class_1_C4C04BE5296BEC41_TypeDefinitionIndex = 74508;

class Class_1_C4C04BE5296BEC41 : public ::System::Object
{
public:
	::System::Boolean Field_1_3; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4C04BE5296BEC41__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4C04BE5296BEC41_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_C4C04BE5296BEC41_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_C4C04BE5296BEC41_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B5C1A24BAF3E28F3(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4C04BE5296BEC41_METHOD_1_B5C1A24BAF3E28F3_OFFSET))(this, a1, a2);
	}
};
