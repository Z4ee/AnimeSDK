#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackProperty; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_BFCED33C71AC9F63_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16175550)
#define CLASS_3_BFCED33C71AC9F63_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16175BE0)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x16175C60)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x16176B00)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x16176CB0)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x16175AD0)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_B1FCFA7C1C5829AA_OFFSET UNITYSDK_OFFSET(0x161759D0)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x16176E10)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16175BD0)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_D13DCD680ACD4877_OFFSET UNITYSDK_OFFSET(0x161755B0)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x16175450)
#define CLASS_3_BFCED33C71AC9F63_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x16175540)
#define CLASS_3_BFCED33C71AC9F63__CTOR_OFFSET UNITYSDK_OFFSET(0x16176AF0)

inline static constexpr unsigned int Class_3_BFCED33C71AC9F63_TypeDefinitionIndex = 90587;

class Class_3_BFCED33C71AC9F63 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::System::String* Field_3_11; // 0x38
	::System::String* Field_3_4; // 0x40
	::System::String* Field_3_6; // 0x48
	::System::String* Field_3_0; // 0x50
	::MoleMole::Config::ConfigEntityAttackProperty* Field_3_5; // 0x58
	::System::Boolean Field_3_9; // 0x60
	::System::Single Field_3_10; // 0x64
	::MoleMole::Config::AbilityTargetting Field_3_1; // 0x68
	::MoleMole::Config::AbilityTargetting Field_3_7; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B1FCFA7C1C5829AA(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_B1FCFA7C1C5829AA_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_BFCED33C71AC9F63* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_BFCED33C71AC9F63*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}

	static ::Class_3_BFCED33C71AC9F63* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_BFCED33C71AC9F63*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_D13DCD680ACD4877(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_BFCED33C71AC9F63_METHOD_3_D13DCD680ACD4877_OFFSET))(this, a1, a2);
	}
};
