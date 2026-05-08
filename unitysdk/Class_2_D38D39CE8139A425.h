#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_5.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_D38D39CE8139A425_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11655BC0)
#define CLASS_2_D38D39CE8139A425_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11655530)
#define CLASS_2_D38D39CE8139A425_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x11655E50)
#define CLASS_2_D38D39CE8139A425_METHOD_2_0E51239C21E29F50_OFFSET UNITYSDK_OFFSET(0x11655C20)
#define CLASS_2_D38D39CE8139A425_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x116555B0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_89FADE33F34E4AE0_OFFSET UNITYSDK_OFFSET(0x11656160)
#define CLASS_2_D38D39CE8139A425_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x116552B0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x116553B0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x116554C0)
#define CLASS_2_D38D39CE8139A425_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x11656000)
#define CLASS_2_D38D39CE8139A425_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x116553C0)
#define CLASS_2_D38D39CE8139A425__CTOR_OFFSET UNITYSDK_OFFSET(0x11655E40)

inline static constexpr unsigned int Class_2_D38D39CE8139A425_TypeDefinitionIndex = 71824;

class Class_2_D38D39CE8139A425 : public ::Class_1_D0D2B3C2533F6DF2_5
{
public:
	::System::Single Field_2_2; // 0x10
	::System::Single Field_2_3; // 0x14
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_5* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D38D39CE8139A425* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_D38D39CE8139A425*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0E51239C21E29F50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_0E51239C21E29F50_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D38D39CE8139A425* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_D38D39CE8139A425*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Single Method_2_89FADE33F34E4AE0(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_89FADE33F34E4AE0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_D38D39CE8139A425_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
