#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_AD5FFEC75B2A1C04;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DDF3D4DF4FD97BB7_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xECCC090)
#define CLASS_2_DDF3D4DF4FD97BB7_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0xECCBE50)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xECCC410)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0xECCC0F0)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0xECCBED0)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xECCBCF0)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xECCBE40)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xECCC2B0)
#define CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xECCBD40)
#define CLASS_2_DDF3D4DF4FD97BB7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xECCC2A0)

inline static constexpr unsigned int Class_2_DDF3D4DF4FD97BB7_1_TypeDefinitionIndex = 78165;

class Class_2_DDF3D4DF4FD97BB7_1 : public ::Class_1_D0D2B3C2533F6DF2
{
public:
	::System::Collections::Generic::List_1<::Class_1_AD5FFEC75B2A1C04*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_DDF3D4DF4FD97BB7_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_DDF3D4DF4FD97BB7_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_5253759692D6DAC1_OFFSET))(this, a1);
	}

	static ::Class_2_DDF3D4DF4FD97BB7_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_DDF3D4DF4FD97BB7_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DDF3D4DF4FD97BB7_1_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}
};
