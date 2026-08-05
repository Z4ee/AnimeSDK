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
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_28271F07DD4A0D2E_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1646B230)
#define CLASS_3_28271F07DD4A0D2E_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1646BE80)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1646E350)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_2A6F036DDCA43A2B_OFFSET UNITYSDK_OFFSET(0x1646E500)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x1646B220)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_5D7844D00B913024_OFFSET UNITYSDK_OFFSET(0x1646BF00)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1646E510)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_A8AEA41DCDCC105A_OFFSET UNITYSDK_OFFSET(0x1646BB60)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1646BD70)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_1_OFFSET UNITYSDK_OFFSET(0x1646B180)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x1646B0E0)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1646BE70)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x1646E2B0)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_F2BB4E18EB7DCE51_OFFSET UNITYSDK_OFFSET(0x1646B290)
#define CLASS_3_28271F07DD4A0D2E_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1646E100)

inline static constexpr unsigned int Class_3_28271F07DD4A0D2E_3_TypeDefinitionIndex = 77536;

class Class_3_28271F07DD4A0D2E_3 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_22; // 0x20
	::MoleMole::Config::DynamicInt* Field_3_0; // 0x28
	::Class_1_4ED21A115C97704D* Field_3_2; // 0x30
	::Class_1_4ED21A115C97704D* Field_3_14; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_17; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x58
	::Class_1_4ED21A115C97704D* Field_3_16; // 0x60
	::Class_1_4ED21A115C97704D* Field_3_9; // 0x68
	::MoleMole::Config::DynamicInt* Field_3_23; // 0x70
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x78
	::System::String* Field_3_3; // 0x80
	::Class_1_4ED21A115C97704D* Field_3_12; // 0x88
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x90
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_21; // 0x98
	::MoleMole::Config::DynamicInt* Field_3_13; // 0xA0
	::Class_1_4ED21A115C97704D* Field_3_18; // 0xA8
	::System::Collections::Generic::List_1<::MoleMole::Config::BuffGroupName>* Field_3_20; // 0xB0
	::Class_1_4ED21A115C97704D* Field_3_8; // 0xB8
	::Class_1_4ED21A115C97704D* Field_3_19; // 0xC0
	::Class_1_4ED21A115C97704D* Field_3_15; // 0xC8
	::System::Int32 Field_3_6; // 0xD0
	::System::Boolean Field_3_27; // 0xD4
	::System::Single Field_3_7; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B_1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_A8AEA41DCDCC105A(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_A8AEA41DCDCC105A_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_28271F07DD4A0D2E_3* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_28271F07DD4A0D2E_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_F2BB4E18EB7DCE51(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_F2BB4E18EB7DCE51_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_2A6F036DDCA43A2B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_2A6F036DDCA43A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_5D7844D00B913024(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_5D7844D00B913024_OFFSET))(this, a1);
	}

	static ::Class_3_28271F07DD4A0D2E_3* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_28271F07DD4A0D2E_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
