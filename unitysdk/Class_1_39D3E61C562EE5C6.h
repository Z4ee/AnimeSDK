#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_39D3E61C562EE5C6_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1019D800)
#define CLASS_1_39D3E61C562EE5C6_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1019D940)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x1019D9C0)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x1019D780)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x1019DB10)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0x1019D810)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x1019D820)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1019D930)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x1019D9A0)
#define CLASS_1_39D3E61C562EE5C6_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1019D830)
#define CLASS_1_39D3E61C562EE5C6__CTOR_OFFSET UNITYSDK_OFFSET(0x1019D9B0)

inline static constexpr unsigned int Class_1_39D3E61C562EE5C6_TypeDefinitionIndex = 45293;

class Class_1_39D3E61C562EE5C6 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_39D3E61C562EE5C6* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_39D3E61C562EE5C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_1_39D3E61C562EE5C6* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_39D3E61C562EE5C6*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_D4DA1493472613E6_OFFSET))(this, a1);
	}

	static ::Class_1_39D3E61C562EE5C6* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_39D3E61C562EE5C6*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	::System::Boolean Method_1_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_39D3E61C562EE5C6_METHOD_1_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
	}
};
