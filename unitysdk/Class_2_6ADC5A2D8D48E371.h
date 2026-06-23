#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_6ADC5A2D8D48E371_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13493240)
#define CLASS_2_6ADC5A2D8D48E371_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13492FC0)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13493670)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x134932A0)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x13493040)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x13492E00)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13492F50)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13493510)
#define CLASS_2_6ADC5A2D8D48E371_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13492E50)
#define CLASS_2_6ADC5A2D8D48E371__CTOR_OFFSET UNITYSDK_OFFSET(0x13493500)

inline static constexpr unsigned int Class_2_6ADC5A2D8D48E371_TypeDefinitionIndex = 72983;

class Class_2_6ADC5A2D8D48E371 : public ::Class_1_D0D2B3C2533F6DF2_3
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_3* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_6ADC5A2D8D48E371* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_6ADC5A2D8D48E371*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	static ::Class_2_6ADC5A2D8D48E371* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_6ADC5A2D8D48E371*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6ADC5A2D8D48E371_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
