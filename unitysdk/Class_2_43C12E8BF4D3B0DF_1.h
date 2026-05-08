#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F157DD73C7C08100.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_43C12E8BF4D3B0DF_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x124662E0)
#define CLASS_2_43C12E8BF4D3B0DF_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12466050)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x12466340)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x12466530)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x12465E50)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x124660D0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12465FE0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x124666E0)
#define CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x12465EE0)
#define CLASS_2_43C12E8BF4D3B0DF_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12466520)

inline static constexpr unsigned int Class_2_43C12E8BF4D3B0DF_1_TypeDefinitionIndex = 55652;

class Class_2_43C12E8BF4D3B0DF_1 : public ::Class_1_F157DD73C7C08100
{
public:
	::System::String* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_F157DD73C7C08100* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_F157DD73C7C08100*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_FROMBINARY_OFFSET))(this, a1, a2);
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

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_43C12E8BF4D3B0DF_1_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}
};
