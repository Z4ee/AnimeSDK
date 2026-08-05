#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_CE2E7DC9D5241F3C;
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

#define CLASS_3_E41C1EFCBD73D3C9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B103D0)
#define CLASS_3_E41C1EFCBD73D3C9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16B11530)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x16B13EB0)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_4817A7DC7B1BD409_OFFSET UNITYSDK_OFFSET(0x16B115B0)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x16B14060)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x16B11420)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x16B10330)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_C3645C5F0624187C_OFFSET UNITYSDK_OFFSET(0x16B10430)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16B11520)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_D7E1E71AB8D59416_OFFSET UNITYSDK_OFFSET(0x16B11220)
#define CLASS_3_E41C1EFCBD73D3C9_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x16B141C0)
#define CLASS_3_E41C1EFCBD73D3C9__CTOR_OFFSET UNITYSDK_OFFSET(0x16B13E10)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_TypeDefinitionIndex = 79359;

class Class_3_E41C1EFCBD73D3C9 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_23; // 0x20
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_27; // 0x28
	::MoleMole::Config::DynamicInt* Field_3_18; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_14; // 0x38
	::Class_1_CE2E7DC9D5241F3C* Field_3_9; // 0x40
	::Class_1_CE2E7DC9D5241F3C* Field_3_11; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_25; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_19; // 0x58
	::Class_1_CE2E7DC9D5241F3C* Field_3_13; // 0x60
	::System::String* Field_3_22; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_26; // 0x70
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x78
	::Class_1_CE2E7DC9D5241F3C* Field_3_5; // 0x80
	::MoleMole::Config::DynamicInt* Field_3_24; // 0x88
	::MoleMole::Config::DynamicFloat* Field_3_12; // 0x90
	::System::String* Field_3_21; // 0x98
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0xA0
	::Class_1_CE2E7DC9D5241F3C* Field_3_15; // 0xA8
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0xB0
	::System::String* Field_3_17; // 0xB8
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_20; // 0xC0
	::System::Boolean Field_3_7; // 0xC8
	::System::Boolean Field_3_1; // 0xC9
	::System::Boolean Field_3_16; // 0xCA
	::MoleMole::Config::AbilityTargetting Field_3_6; // 0xCC
	::MoleMole::Config::AbilityTargetting Field_3_0; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D7E1E71AB8D59416(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_D7E1E71AB8D59416_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_C3645C5F0624187C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_C3645C5F0624187C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4817A7DC7B1BD409(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_METHOD_3_4817A7DC7B1BD409_OFFSET))(this, a1);
	}
};
