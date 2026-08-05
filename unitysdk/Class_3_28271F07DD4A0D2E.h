#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_061801F5C4991F1A;
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

#define CLASS_3_28271F07DD4A0D2E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10B11580)
#define CLASS_3_28271F07DD4A0D2E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10B122B0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_10384271655D533B_OFFSET UNITYSDK_OFFSET(0x10B115E0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x10B14320)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_2A6F036DDCA43A2B_OFFSET UNITYSDK_OFFSET(0x10B14310)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x10B111A0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x10B12330)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_8304FB9CA9BAE504_OFFSET UNITYSDK_OFFSET(0x10B111B0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_95858E2F19023021_OFFSET UNITYSDK_OFFSET(0x10B11FC0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x10B144E0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10B121A0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_1_OFFSET UNITYSDK_OFFSET(0x10B11100)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x10B11060)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x10B122A0)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x10B14270)
#define CLASS_3_28271F07DD4A0D2E_METHOD_3_F59BC96F290BB1C3_OFFSET UNITYSDK_OFFSET(0x10B144D0)
#define CLASS_3_28271F07DD4A0D2E__CTOR_OFFSET UNITYSDK_OFFSET(0x10B141D0)

inline static constexpr unsigned int Class_3_28271F07DD4A0D2E_TypeDefinitionIndex = 73365;

class Class_3_28271F07DD4A0D2E : public ::Class_2_0F138252A5783001
{
public:
	::System::String* Field_3_23; // 0x20
	::MoleMole::Config::DynamicFloat* Field_3_16; // 0x28
	::System::String* Field_3_5; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_13; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_18; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_17; // 0x48
	::MoleMole::Config::DynamicInt* Field_3_4; // 0x50
	::Class_1_4ED21A115C97704D* Field_3_10; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_8; // 0x60
	::MoleMole::Config::DynamicInt* Field_3_11; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_19; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_6; // 0x78
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_0; // 0x80
	::MoleMole::Config::DynamicFloat* Field_3_12; // 0x88
	::MoleMole::Config::DynamicFloat* Field_3_14; // 0x90
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0x98
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_3_1; // 0xA0
	::System::Collections::Generic::List_1<::Class_1_061801F5C4991F1A*>* Field_3_2; // 0xA8
	::MoleMole::Config::DynamicFloat* Field_3_15; // 0xB0
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_3_7; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B_1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_BB2B154A9AA5F82B_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Method_3_8304FB9CA9BAE504()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_8304FB9CA9BAE504_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_95858E2F19023021(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_95858E2F19023021_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_2A6F036DDCA43A2B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_2A6F036DDCA43A2B_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_28271F07DD4A0D2E* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_28271F07DD4A0D2E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>* Method_3_F59BC96F290BB1C3()
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_F59BC96F290BB1C3_OFFSET))(this);
	}

	::System::Boolean Method_3_10384271655D533B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_10384271655D533B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_28271F07DD4A0D2E* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_28271F07DD4A0D2E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
