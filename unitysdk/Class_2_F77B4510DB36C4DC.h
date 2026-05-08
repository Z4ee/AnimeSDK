#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F77B4510DB36C4DC_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11C0B990)
#define CLASS_2_F77B4510DB36C4DC_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11C0BE30)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x11C0C450)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_46B58ADF1ED682FC_OFFSET UNITYSDK_OFFSET(0x11C0B9F0)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x11C0BC20)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_5E8C66483E323AC7_OFFSET UNITYSDK_OFFSET(0x11C0B8A0)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x11C0C380)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x11C0BEB0)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x11C0BDC0)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x11C0C600)
#define CLASS_2_F77B4510DB36C4DC_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x11C0BCC0)
#define CLASS_2_F77B4510DB36C4DC__CTOR_OFFSET UNITYSDK_OFFSET(0x11C0C300)

inline static constexpr unsigned int Class_2_F77B4510DB36C4DC_TypeDefinitionIndex = 42162;

class Class_2_F77B4510DB36C4DC : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicInt* Field_2_2; // 0x38
	::MoleMole::Config::DynamicInt* Field_2_1; // 0x40
	::MoleMole::Config::ValueCompareType Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_5E8C66483E323AC7(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_5E8C66483E323AC7_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_46B58ADF1ED682FC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_46B58ADF1ED682FC_OFFSET))(this, a1, a2);
	}

	static ::Class_2_F77B4510DB36C4DC* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F77B4510DB36C4DC*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_2_F77B4510DB36C4DC* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F77B4510DB36C4DC*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F77B4510DB36C4DC_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
