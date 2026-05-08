#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_39D3E61C562EE5C6.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C6FDF97AA16393D4_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15080970)
#define CLASS_2_C6FDF97AA16393D4_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15080CB0)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x15081060)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x15080D30)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_627557CE4CD0ABB4_1_OFFSET UNITYSDK_OFFSET(0x15081210)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x150808F0)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x15080B30)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x15080C40)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x150809D0)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x15080F00)
#define CLASS_2_C6FDF97AA16393D4_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x15080B40)
#define CLASS_2_C6FDF97AA16393D4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15080EF0)

inline static constexpr unsigned int Class_2_C6FDF97AA16393D4_1_TypeDefinitionIndex = 46508;

class Class_2_C6FDF97AA16393D4_1 : public ::Class_1_39D3E61C562EE5C6
{
public:
	::System::Single Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_39D3E61C562EE5C6* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_39D3E61C562EE5C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D32A5475BAED534D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_D32A5475BAED534D_OFFSET))(this, a1, a2);
	}

	static ::Class_2_C6FDF97AA16393D4_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C6FDF97AA16393D4_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_C6FDF97AA16393D4_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C6FDF97AA16393D4_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Single Method_2_627557CE4CD0ABB4_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_627557CE4CD0ABB4_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C6FDF97AA16393D4_1_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
