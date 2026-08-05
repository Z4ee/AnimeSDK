#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8E815494163DED70;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D3477F73381AFA78_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12D8CB70)
#define CLASS_2_D3477F73381AFA78_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12D8BD30)
#define CLASS_2_D3477F73381AFA78_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x12D8D4D0)
#define CLASS_2_D3477F73381AFA78_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x12D8BDB0)
#define CLASS_2_D3477F73381AFA78_METHOD_2_1DFF921950D5D3D5_OFFSET UNITYSDK_OFFSET(0x12D8CBD0)
#define CLASS_2_D3477F73381AFA78_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12D8BD20)
#define CLASS_2_D3477F73381AFA78_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x12D8D370)
#define CLASS_2_D3477F73381AFA78_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x12D8BBA0)
#define CLASS_2_D3477F73381AFA78_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x12D8BC20)
#define CLASS_2_D3477F73381AFA78__CTOR_OFFSET UNITYSDK_OFFSET(0x12D8D360)

inline static constexpr unsigned int Class_2_D3477F73381AFA78_TypeDefinitionIndex = 89130;

class Class_2_D3477F73381AFA78 : public ::Class_1_2AD981AB6ACE5E06_1
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_10; // 0x18
	::System::String* Field_2_6; // 0x20
	::System::Collections::Generic::List_1<::Class_1_8E815494163DED70*>* Field_2_5; // 0x28
	::System::Int32 Field_2_4; // 0x30
	::System::Int32 Field_2_1; // 0x34
	::System::Int32 Field_2_7; // 0x38
	::System::Int32 Field_2_11; // 0x3C
	::System::Int32 Field_2_2; // 0x40
	::System::Int32 Field_2_0; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_1* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D3477F73381AFA78* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_D3477F73381AFA78*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_1DFF921950D5D3D5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_1DFF921950D5D3D5_OFFSET))(this, a1, a2);
	}

	static ::Class_2_D3477F73381AFA78* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_D3477F73381AFA78*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_D3477F73381AFA78_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
