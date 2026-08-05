#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5D65F42F0EEB3310.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_B24471DF356B3AE1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15851300)
#define CLASS_1_B24471DF356B3AE1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15851500)
#define CLASS_1_B24471DF356B3AE1_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x15851580)
#define CLASS_1_B24471DF356B3AE1_METHOD_1_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x15851360)
#define CLASS_1_B24471DF356B3AE1__CTOR_OFFSET UNITYSDK_OFFSET(0x15851840)

inline static constexpr unsigned int Class_1_B24471DF356B3AE1_TypeDefinitionIndex = 47603;

class Class_1_B24471DF356B3AE1 : public ::System::Object
{
public:
	::System::Object* Field_1_0; // 0x10
	::Enum_3_5D65F42F0EEB3310 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24471DF356B3AE1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B24471DF356B3AE1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B24471DF356B3AE1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B24471DF356B3AE1_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B24471DF356B3AE1_METHOD_1_9144040ECD391705_OFFSET))(this, a1, a2);
	}
};
