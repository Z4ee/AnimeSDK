#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C902C5428A21466B_6.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_43C12E8BF4D3B0DF_4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1235CF00)
#define CLASS_2_43C12E8BF4D3B0DF_4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1235CC90)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1235CD10)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1235CF60)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1235D150)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1235CAF0)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1235CC80)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1235D300)
#define CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1235CB80)
#define CLASS_2_43C12E8BF4D3B0DF_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1235D140)

inline static constexpr unsigned int Class_2_43C12E8BF4D3B0DF_4_TypeDefinitionIndex = 86567;

class Class_2_43C12E8BF4D3B0DF_4 : public ::Class_1_C902C5428A21466B_6
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_C902C5428A21466B_6* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_C902C5428A21466B_6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_43C12E8BF4D3B0DF_4* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	static ::Class_2_43C12E8BF4D3B0DF_4* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_4_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
