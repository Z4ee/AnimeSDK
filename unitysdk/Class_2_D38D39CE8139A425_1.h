#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_4.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_D38D39CE8139A425_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13D1AA90)
#define CLASS_2_D38D39CE8139A425_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13D1A430)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13D1AE80)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_0E51239C21E29F50_OFFSET UNITYSDK_OFFSET(0x13D1AAF0)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x13D1A4B0)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x13D1B030)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x13D1A210)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x13D1A310)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13D1A420)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13D1AD20)
#define CLASS_2_D38D39CE8139A425_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13D1A320)
#define CLASS_2_D38D39CE8139A425_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13D1AD10)

inline static constexpr unsigned int Class_2_D38D39CE8139A425_1_TypeDefinitionIndex = 88774;

class Class_2_D38D39CE8139A425_1 : public ::Class_1_D0D2B3C2533F6DF2_4
{
public:
	::System::Single Field_2_7; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_6; // 0x18
	::System::Single Field_2_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_4* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D38D39CE8139A425_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_D38D39CE8139A425_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_D38D39CE8139A425_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_D38D39CE8139A425_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0E51239C21E29F50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_0E51239C21E29F50_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_1_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}
};
