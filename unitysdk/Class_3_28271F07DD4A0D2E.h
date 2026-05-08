#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_28271F07DD4A0D2E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF285120)
#define CLASS_3_28271F07DD4A0D2E_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF285E00)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xF288400)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_264405747E387A1B_OFFSET UNITYSDK_OFFSET(0xF285E80)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_2A6F036DDCA43A2B_OFFSET UNITYSDK_OFFSET(0xF2885B0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0xF285110)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xF2882A0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_A02434B8D4FB4B28_OFFSET UNITYSDK_OFFSET(0xF285180)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_A8AEA41DCDCC105A_OFFSET UNITYSDK_OFFSET(0xF285A80)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xF285C90)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_1_OFFSET UNITYSDK_OFFSET(0xF285070)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xF284FD0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xF285D90)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xF288200)
#define CLASS_3_28271F07DD4A0D2E__CTOR_OFFSET UNITYSDK_OFFSET(0xF288050)

inline static constexpr unsigned int Class_3_28271F07DD4A0D2E_TypeDefinitionIndex = 44415;

class Class_3_28271F07DD4A0D2E : public ::Class_2_0F138252A5783001
{
public:
	::Class_1_4ED21A115C97704D* Field_3_12; // 0x20
	::MoleMole::Config::DynamicFloat* Field_3_7; // 0x28
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_22; // 0x30
	::Class_1_4ED21A115C97704D* Field_3_13; // 0x38
	::Class_1_4ED21A115C97704D* Field_3_11; // 0x40
	::System::String* Field_3_0; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_18; // 0x50
	::MoleMole::Config::DynamicInt* Field_3_20; // 0x58
	::Class_1_4ED21A115C97704D* Field_3_10; // 0x60
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* Field_3_23; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0x70
	::Class_1_4ED21A115C97704D* Field_3_15; // 0x78
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_21; // 0x80
	::Class_1_4ED21A115C97704D* Field_3_17; // 0x88
	::Class_1_4ED21A115C97704D* Field_3_16; // 0x90
	::MoleMole::Config::DynamicInt* Field_3_3; // 0x98
	::MoleMole::Config::DynamicInt* Field_3_2; // 0xA0
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0xA8
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0xB0
	::Class_1_4ED21A115C97704D* Field_3_1; // 0xB8
	::MoleMole::Config::DynamicInt* Field_3_14; // 0xC0
	::Class_1_4ED21A115C97704D* Field_3_19; // 0xC8
	::System::Boolean Field_3_24; // 0xD0
	::System::Int32 Field_3_5; // 0xD4
	::System::Single Field_3_4; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B_1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A8AEA41DCDCC105A(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_A8AEA41DCDCC105A_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_264405747E387A1B(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_264405747E387A1B_OFFSET))(this, a1);
	}

	static ::Class_3_28271F07DD4A0D2E* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_28271F07DD4A0D2E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_28271F07DD4A0D2E* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_28271F07DD4A0D2E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_2A6F036DDCA43A2B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_2A6F036DDCA43A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_A02434B8D4FB4B28(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_A02434B8D4FB4B28_OFFSET))(this, a1, a2);
	}
};
