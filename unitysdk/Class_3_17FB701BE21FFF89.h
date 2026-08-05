#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Enum_3_B349BF38012CC8BD.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_17FB701BE21FFF89_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17CE65F0)
#define CLASS_3_17FB701BE21FFF89_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17CE6D00)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x17CE77F0)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x17CE6D80)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x17CE75F0)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x17CE6BF0)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x17CE6550)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17CE6CF0)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_D13DCD680ACD4877_OFFSET UNITYSDK_OFFSET(0x17CE6650)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x17CE6B70)
#define CLASS_3_17FB701BE21FFF89_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x17CE7750)
#define CLASS_3_17FB701BE21FFF89__CTOR_OFFSET UNITYSDK_OFFSET(0x17CE75E0)

inline static constexpr unsigned int Class_3_17FB701BE21FFF89_TypeDefinitionIndex = 77774;

class Class_3_17FB701BE21FFF89 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicString* Field_3_1; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_7; // 0x30
	::System::Boolean Field_3_6; // 0x38
	::Enum_3_B349BF38012CC8BD Field_3_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	static ::Class_3_17FB701BE21FFF89* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_17FB701BE21FFF89*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_D13DCD680ACD4877(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_D13DCD680ACD4877_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_17FB701BE21FFF89* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_17FB701BE21FFF89*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_17FB701BE21FFF89_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
