#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/Enum_3_0CBE728C82DBAA16.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_426492CCD31C6AF7;
class Class_1_C836D00248E6EFFE;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2A56CCCB20A346FA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B784205B00804B24_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x164377C0)
#define CLASS_3_B784205B00804B24_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16438DB0)
#define CLASS_3_B784205B00804B24_METHOD_3_01918D90D7381D5B_OFFSET UNITYSDK_OFFSET(0x16437700)
#define CLASS_3_B784205B00804B24_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1643CAF0)
#define CLASS_3_B784205B00804B24_METHOD_3_2A6F036DDCA43A2B_OFFSET UNITYSDK_OFFSET(0x1643CCA0)
#define CLASS_3_B784205B00804B24_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x164377B0)
#define CLASS_3_B784205B00804B24_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1643CD50)
#define CLASS_3_B784205B00804B24_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x16438CA0)
#define CLASS_3_B784205B00804B24_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x16437660)
#define CLASS_3_B784205B00804B24_METHOD_3_BEE7E00881422F07_OFFSET UNITYSDK_OFFSET(0x16438E30)
#define CLASS_3_B784205B00804B24_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16438DA0)
#define CLASS_3_B784205B00804B24_METHOD_3_D7E1E71AB8D59416_OFFSET UNITYSDK_OFFSET(0x16438AA0)
#define CLASS_3_B784205B00804B24_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x1643CCB0)
#define CLASS_3_B784205B00804B24_METHOD_3_F9C3B6AD93C64107_OFFSET UNITYSDK_OFFSET(0x16437820)
#define CLASS_3_B784205B00804B24__CTOR_OFFSET UNITYSDK_OFFSET(0x1643CA60)

inline static constexpr unsigned int Class_3_B784205B00804B24_TypeDefinitionIndex = 42315;

class Class_3_B784205B00804B24 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_24; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_3_12; // 0x28
	::MoleMole::Config::ConfigPosRot* Field_3_5; // 0x30
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_30; // 0x38
	::System::String* Field_3_19; // 0x40
	::System::String* Field_3_14; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_426492CCD31C6AF7*>* Field_3_21; // 0x50
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_25; // 0x58
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_43; // 0x60
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0x68
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_31; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_27; // 0x78
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_18; // 0x80
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_20; // 0x88
	::MoleMole::Config::DynamicInt* Field_3_2; // 0x90
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_26; // 0x98
	::MoleMole::Config::DynamicFloat* Field_3_16; // 0xA0
	::MoleMole::Config::DynamicFloat* Field_3_17; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_38; // 0xB0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_13; // 0xB8
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_36; // 0xC0
	::System::Boolean Field_3_35; // 0xC8
	::System::Boolean Field_3_9; // 0xC9
	::System::Boolean Field_3_23; // 0xCA
	::System::Boolean Field_3_29; // 0xCB
	::MoleMole::Config::CampType Field_3_7; // 0xCC
	::System::Boolean Field_3_37; // 0xD0
	::System::Boolean Field_3_41; // 0xD1
	::System::Boolean Field_3_11; // 0xD2
	::System::Boolean Field_3_10; // 0xD3
	::System::Int32 Field_3_34; // 0xD4
	::Enum_3_0CBE728C82DBAA16 Field_3_33; // 0xD8
	::MoleMole::Config::AbilityTargetting Field_3_15; // 0xDC
	::System::Boolean Field_3_8; // 0xE0
	::System::Boolean Field_3_42; // 0xE1
	::System::Boolean Field_3_22; // 0xE2
	::System::Boolean Field_3_4; // 0xE3
	::System::Boolean Field_3_39; // 0xE4
	::System::Boolean Field_3_32; // 0xE5
	::MoleMole::Config::AbilityTargetting Field_3_1; // 0xE8
	::System::Single Field_3_28; // 0xEC
	::MoleMole::Config::EntityType Field_3_0; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_01918D90D7381D5B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_01918D90D7381D5B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D7E1E71AB8D59416(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_D7E1E71AB8D59416_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_B784205B00804B24* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_B784205B00804B24*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_BEE7E00881422F07(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_BEE7E00881422F07_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F9C3B6AD93C64107(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_F9C3B6AD93C64107_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_2A6F036DDCA43A2B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_2A6F036DDCA43A2B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_B784205B00804B24* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_B784205B00804B24*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
