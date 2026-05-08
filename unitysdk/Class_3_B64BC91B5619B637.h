#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B64BC91B5619B637_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1356F8B0)
#define CLASS_3_B64BC91B5619B637_FROMFLX_OFFSET UNITYSDK_OFFSET(0x135701C0)
#define CLASS_3_B64BC91B5619B637_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x13571980)
#define CLASS_3_B64BC91B5619B637_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x1356F8A0)
#define CLASS_3_B64BC91B5619B637_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0x1356FF20)
#define CLASS_3_B64BC91B5619B637_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x13570240)
#define CLASS_3_B64BC91B5619B637_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x13571820)
#define CLASS_3_B64BC91B5619B637_METHOD_3_A02434B8D4FB4B28_OFFSET UNITYSDK_OFFSET(0x1356F910)
#define CLASS_3_B64BC91B5619B637_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x13570050)
#define CLASS_3_B64BC91B5619B637_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x1356F800)
#define CLASS_3_B64BC91B5619B637_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13570150)
#define CLASS_3_B64BC91B5619B637_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x13571B30)
#define CLASS_3_B64BC91B5619B637__CTOR_OFFSET UNITYSDK_OFFSET(0x135716C0)

inline static constexpr unsigned int Class_3_B64BC91B5619B637_TypeDefinitionIndex = 42069;

class Class_3_B64BC91B5619B637 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_12; // 0x20
	::System::String* Field_3_0; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x30
	::System::String* Field_3_6; // 0x38
	::System::String* Field_3_9; // 0x40
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_13; // 0x48
	::Class_1_4ED21A115C97704D* Field_3_4; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0x60
	::Class_1_4ED21A115C97704D* Field_3_7; // 0x68
	::Class_1_4ED21A115C97704D* Field_3_1; // 0x70
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x78
	::System::Int32 Field_3_2; // 0x80
	::System::Single Field_3_3; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_B64BC91B5619B637* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_B64BC91B5619B637*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_B64BC91B5619B637* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_B64BC91B5619B637*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_A02434B8D4FB4B28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_A02434B8D4FB4B28_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_B64BC91B5619B637_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}
};
