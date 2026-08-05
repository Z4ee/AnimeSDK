#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A56CCCB20A346FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/Struct_2_A057CF850C769F85.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_EC25B6E84130E2CA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_911DD8DEDD1970F1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x121186B0)
#define CLASS_3_911DD8DEDD1970F1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12118CB0)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x12118D30)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x12119560)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_4075E33E5DF56BDB_OFFSET UNITYSDK_OFFSET(0x12119470)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_6A02E01112D7A376_OFFSET UNITYSDK_OFFSET(0x12118220)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_7D401177B68FFFCC_OFFSET UNITYSDK_OFFSET(0x12119710)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_8279976FE67B5972_OFFSET UNITYSDK_OFFSET(0x12119460)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x12119720)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x12118BA0)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x12119480)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x12118AE0)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12118CA0)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_CD3847F2B9500754_OFFSET UNITYSDK_OFFSET(0x12118400)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x12118110)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x12118210)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x12118200)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_FBDE5F9689FDEFFF_OFFSET UNITYSDK_OFFSET(0x12118710)
#define CLASS_3_911DD8DEDD1970F1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x121185D0)
#define CLASS_3_911DD8DEDD1970F1__CTOR_OFFSET UNITYSDK_OFFSET(0x12119450)

inline static constexpr unsigned int Class_3_911DD8DEDD1970F1_TypeDefinitionIndex = 88034;

class Class_3_911DD8DEDD1970F1 : public ::Class_2_2A56CCCB20A346FA
{
public:
	::MoleMole::Config::DynamicInt* Field_3_6; // 0x38
	::System::String* Field_3_4; // 0x40
	::MoleMole::Config::AbilityTargetting Field_3_5; // 0x48
	::System::Int32 Field_3_0; // 0x4C
	::MoleMole::Config::BuffGroupName Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_6A02E01112D7A376(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_A057CF850C769F85& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_A057CF850C769F85&))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_6A02E01112D7A376_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_CD3847F2B9500754(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_3_EC25B6E84130E2CA* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_CD3847F2B9500754_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_TOSTRING_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_2A56CCCB20A346FA* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_2A56CCCB20A346FA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_FROMFLX_OFFSET))(this, a1);
	}

	::System::String* Method_3_8279976FE67B5972()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_8279976FE67B5972_OFFSET))(this);
	}

	::System::Void Method_3_4075E33E5DF56BDB(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_A057CF850C769F85& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_A057CF850C769F85&))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_4075E33E5DF56BDB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_911DD8DEDD1970F1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_911DD8DEDD1970F1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_7D401177B68FFFCC(::Class_3_F41D242A20F8FE06* a1, ::Class_2_2A56CCCB20A346FA* a2, ::Class_2_14986121AA61AD99* a3, ::Class_2_1C93660C39236995* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_3_EC25B6E84130E2CA* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_2A56CCCB20A346FA*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_7D401177B68FFFCC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_3_911DD8DEDD1970F1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_911DD8DEDD1970F1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_FBDE5F9689FDEFFF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_FBDE5F9689FDEFFF_OFFSET))(this, a1, a2);
	}
};
