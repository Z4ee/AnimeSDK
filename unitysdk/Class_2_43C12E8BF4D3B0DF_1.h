#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_43C12E8BF4D3B0DF_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14626D80)
#define CLASS_2_43C12E8BF4D3B0DF_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14627160)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x146271E0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x14626DE0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x146273E0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x14626FC0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14627150)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x14627590)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x14627050)
#define CLASS_2_43C12E8BF4D3B0DF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x146273D0)

inline static constexpr unsigned int Class_2_43C12E8BF4D3B0DF_1_TypeDefinitionIndex = 52361;

class Class_2_43C12E8BF4D3B0DF_1 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::String* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	static ::Class_2_43C12E8BF4D3B0DF_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_43C12E8BF4D3B0DF_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
