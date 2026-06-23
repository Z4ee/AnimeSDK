#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/Struct_2_A057CF850C769F85.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_EC25B6E84130E2CA;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_911DD8DEDD1970F1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10DC9140)
#define CLASS_3_911DD8DEDD1970F1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10DC97A0)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x10DC9820)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x10DC9F70)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_4075E33E5DF56BDB_OFFSET UNITYSDK_OFFSET(0x10DCA370)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_6A02E01112D7A376_OFFSET UNITYSDK_OFFSET(0x10DC8CA0)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_7D401177B68FFFCC_OFFSET UNITYSDK_OFFSET(0x10DCA280)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_8279976FE67B5972_OFFSET UNITYSDK_OFFSET(0x10DC9F60)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x10DCA120)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x10DC9630)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x10DCA290)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x10DC9570)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x10DC9730)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_CD3847F2B9500754_OFFSET UNITYSDK_OFFSET(0x10DC8E90)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x10DC8B90)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10DC8C90)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10DC8C80)
#define CLASS_3_911DD8DEDD1970F1_METHOD_3_FBDE5F9689FDEFFF_OFFSET UNITYSDK_OFFSET(0x10DC91A0)
#define CLASS_3_911DD8DEDD1970F1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x10DC9060)
#define CLASS_3_911DD8DEDD1970F1__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC9F50)

inline static constexpr unsigned int Class_3_911DD8DEDD1970F1_TypeDefinitionIndex = 50758;

class Class_3_911DD8DEDD1970F1 : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::DynamicInt* Field_3_2; // 0x38
	::System::String* Field_3_4; // 0x40
	::System::Int32 Field_3_0; // 0x48
	::MoleMole::Config::AbilityTargetting Field_3_3; // 0x4C
	::MoleMole::Config::BuffGroupName Field_3_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_3_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Void Method_3_6A02E01112D7A376(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_A057CF850C769F85& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_A057CF850C769F85&))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_6A02E01112D7A376_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_3_CD3847F2B9500754(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_3_EC25B6E84130E2CA* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_CD3847F2B9500754_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
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

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_FROMFLX_OFFSET))(this, a1);
	}

	::System::String* Method_3_8279976FE67B5972()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_8279976FE67B5972_OFFSET))(this);
	}

	static ::Class_3_911DD8DEDD1970F1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_911DD8DEDD1970F1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_FBDE5F9689FDEFFF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_FBDE5F9689FDEFFF_OFFSET))(this, a1, a2);
	}

	static ::Class_3_911DD8DEDD1970F1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_911DD8DEDD1970F1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_7D401177B68FFFCC(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_3_EC25B6E84130E2CA* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_3_EC25B6E84130E2CA*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_7D401177B68FFFCC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_3_4075E33E5DF56BDB(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7, ::Struct_2_A057CF850C769F85& a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*, ::Struct_2_A057CF850C769F85&))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_4075E33E5DF56BDB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_3_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_911DD8DEDD1970F1_METHOD_3_00531776927FE5B6_OFFSET))(this, a1);
	}
};
