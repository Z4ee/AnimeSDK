#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Enum_3_298C71723190A13E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_E795C5D5DDF30620;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_440868B105E7A572_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1014F8E0)
#define CLASS_3_440868B105E7A572_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10150570)
#define CLASS_3_440868B105E7A572_METHOD_3_42E9D5DC20A616B8_OFFSET UNITYSDK_OFFSET(0x10151F80)
#define CLASS_3_440868B105E7A572_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x101505F0)
#define CLASS_3_440868B105E7A572_METHOD_3_8B9441BA7064FB02_OFFSET UNITYSDK_OFFSET(0x10151DE0)
#define CLASS_3_440868B105E7A572_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10150400)
#define CLASS_3_440868B105E7A572_METHOD_3_B26BEB40BF099BA2_OFFSET UNITYSDK_OFFSET(0x101502B0)
#define CLASS_3_440868B105E7A572_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x1014F840)
#define CLASS_3_440868B105E7A572_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10150500)
#define CLASS_3_440868B105E7A572_METHOD_3_CD8A5AA345C0283A_OFFSET UNITYSDK_OFFSET(0x1014F940)
#define CLASS_3_440868B105E7A572_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x10151EE0)
#define CLASS_3_440868B105E7A572__CTOR_OFFSET UNITYSDK_OFFSET(0x10151DC0)

inline static constexpr unsigned int Class_3_440868B105E7A572_TypeDefinitionIndex = 38009;

class Class_3_440868B105E7A572 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_10; // 0x20
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_11; // 0x28
	::System::String* Field_3_5; // 0x30
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_8; // 0x38
	::Class_1_E795C5D5DDF30620* Field_3_3; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_2; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x58
	::System::String* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_12; // 0x68
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_7; // 0x70
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_13; // 0x78
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_9; // 0x80
	::Enum_3_298C71723190A13E Field_3_0; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B26BEB40BF099BA2(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_B26BEB40BF099BA2_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CD8A5AA345C0283A(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_CD8A5AA345C0283A_OFFSET))(this, a1, a2);
	}

	static ::Class_3_440868B105E7A572* Method_3_8B9441BA7064FB02(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_440868B105E7A572*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_8B9441BA7064FB02_OFFSET))(a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_440868B105E7A572* Method_3_42E9D5DC20A616B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_440868B105E7A572*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_440868B105E7A572_METHOD_3_42E9D5DC20A616B8_OFFSET))(a1, a2);
	}
};
