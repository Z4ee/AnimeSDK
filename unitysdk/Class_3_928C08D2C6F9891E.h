#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_928C08D2C6F9891E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13E44750)
#define CLASS_3_928C08D2C6F9891E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13E44DC0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13E44E40)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x13E457E0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x13E45680)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x13E44CB0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x13E455A0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13E44DB0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x13E44650)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x13E44BC0)
#define CLASS_3_928C08D2C6F9891E_METHOD_3_E061DA2D9F264BD1_OFFSET UNITYSDK_OFFSET(0x13E447B0)
#define CLASS_3_928C08D2C6F9891E__CTOR_OFFSET UNITYSDK_OFFSET(0x13E45590)

inline static constexpr unsigned int Class_3_928C08D2C6F9891E_TypeDefinitionIndex = 47815;

class Class_3_928C08D2C6F9891E : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicInt* Field_3_6; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_3_0; // 0x40
	::MoleMole::Config::DynamicInt* Field_3_5; // 0x48
	::MoleMole::Config::DynamicString* Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_928C08D2C6F9891E* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_928C08D2C6F9891E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_928C08D2C6F9891E* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_928C08D2C6F9891E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_E061DA2D9F264BD1(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_E061DA2D9F264BD1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_928C08D2C6F9891E_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
