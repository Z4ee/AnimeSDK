#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_8B56C3305261F4CF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1056C2A0)
#define CLASS_1_8B56C3305261F4CF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1056C230)
#define CLASS_1_8B56C3305261F4CF_METHOD_1_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0x1056C2B0)
#define CLASS_1_8B56C3305261F4CF_METHOD_1_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x1056C290)
#define CLASS_1_8B56C3305261F4CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1056C2C0)

inline static constexpr unsigned int Class_1_8B56C3305261F4CF_TypeDefinitionIndex = 61585;

class Class_1_8B56C3305261F4CF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B56C3305261F4CF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_8B56C3305261F4CF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B56C3305261F4CF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B56C3305261F4CF_METHOD_1_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_8B56C3305261F4CF_METHOD_1_D4DA1493472613E6_OFFSET))(this, a1);
	}
};
