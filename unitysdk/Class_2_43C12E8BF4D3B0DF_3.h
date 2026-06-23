#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2FB1636CD336F971.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_43C12E8BF4D3B0DF_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12A69FC0)
#define CLASS_2_43C12E8BF4D3B0DF_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12A69D30)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x12A6A020)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x12A6A370)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x12A69B30)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x12A69DB0)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12A69CC0)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x12A6A210)
#define CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x12A69BC0)
#define CLASS_2_43C12E8BF4D3B0DF_3__CTOR_OFFSET UNITYSDK_OFFSET(0x12A6A200)

inline static constexpr unsigned int Class_2_43C12E8BF4D3B0DF_3_TypeDefinitionIndex = 68586;

class Class_2_43C12E8BF4D3B0DF_3 : public ::Class_1_2FB1636CD336F971
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_2FB1636CD336F971* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2FB1636CD336F971*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_2_43C12E8BF4D3B0DF_3* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	static ::Class_2_43C12E8BF4D3B0DF_3* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_43C12E8BF4D3B0DF_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_3_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
