#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_828B2711AF58BA0B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/TargetValueModifyFunc.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_53EE08EB1F9EF44F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1621D340)
#define CLASS_3_53EE08EB1F9EF44F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1621D770)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1621DBE0)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_2E626C11CDAF4187_OFFSET UNITYSDK_OFFSET(0x1621D3A0)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1621D590)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1621D7F0)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1621DD90)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_A843BBD195A551FE_OFFSET UNITYSDK_OFFSET(0x1621D240)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1621D600)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x1621DB00)
#define CLASS_3_53EE08EB1F9EF44F_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1621D700)
#define CLASS_3_53EE08EB1F9EF44F__CTOR_OFFSET UNITYSDK_OFFSET(0x1621DAF0)

inline static constexpr unsigned int Class_3_53EE08EB1F9EF44F_TypeDefinitionIndex = 48266;

class Class_3_53EE08EB1F9EF44F : public ::Class_2_828B2711AF58BA0B
{
public:
	::MoleMole::Config::TargetValueModifyFunc Field_3_0; // 0x38
	::System::Single Field_3_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A843BBD195A551FE(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_A843BBD195A551FE_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_828B2711AF58BA0B* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_828B2711AF58BA0B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_828B2711AF58BA0B* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_828B2711AF58BA0B*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_2E626C11CDAF4187(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_2E626C11CDAF4187_OFFSET))(this, a1, a2);
	}

	static ::Class_3_53EE08EB1F9EF44F* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_53EE08EB1F9EF44F*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_53EE08EB1F9EF44F* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_53EE08EB1F9EF44F*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_53EE08EB1F9EF44F_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
