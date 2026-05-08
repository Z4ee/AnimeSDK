#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D0D2B3C2533F6DF2_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF51F820)
#define CLASS_1_D0D2B3C2533F6DF2_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF51F7B0)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0xF51F850)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0xF51F9A0)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0xF51F830)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0xF51F630)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xF51F740)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0xF51F810)
#define CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xF51F640)
#define CLASS_1_D0D2B3C2533F6DF2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF51F840)

inline static constexpr unsigned int Class_1_D0D2B3C2533F6DF2_3_TypeDefinitionIndex = 50663;

class Class_1_D0D2B3C2533F6DF2_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_3* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_1_D0D2B3C2533F6DF2_3* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_D0D2B3C2533F6DF2_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_D4DA1493472613E6_OFFSET))(this, a1);
	}

	static ::Class_1_D0D2B3C2533F6DF2_3* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_D0D2B3C2533F6DF2_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0D2B3C2533F6DF2_3_METHOD_1_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
	}
};
