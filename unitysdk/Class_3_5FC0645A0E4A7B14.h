#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_5FC0645A0E4A7B14_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x102D0960)
#define CLASS_3_5FC0645A0E4A7B14_FROMFLX_OFFSET UNITYSDK_OFFSET(0x102D0D90)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x102D1130)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x102D09C0)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x102D0BE0)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x102D0E10)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x102D12E0)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x102D0C80)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x102D1440)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x102D0D80)
#define CLASS_3_5FC0645A0E4A7B14_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x102D0870)
#define CLASS_3_5FC0645A0E4A7B14__CTOR_OFFSET UNITYSDK_OFFSET(0x102D1120)

inline static constexpr unsigned int Class_3_5FC0645A0E4A7B14_TypeDefinitionIndex = 52281;

class Class_3_5FC0645A0E4A7B14 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::String* Field_3_7; // 0x38
	::MoleMole::Config::EnterBattleState Field_3_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_3_5FC0645A0E4A7B14* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_5FC0645A0E4A7B14*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_5FC0645A0E4A7B14* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_5FC0645A0E4A7B14*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_5FC0645A0E4A7B14_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
