#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_6105350C6862E066_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x128A1060)
#define CLASS_3_6105350C6862E066_FROMFLX_OFFSET UNITYSDK_OFFSET(0x128A1680)
#define CLASS_3_6105350C6862E066_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x128A1BB0)
#define CLASS_3_6105350C6862E066_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x128A1470)
#define CLASS_3_6105350C6862E066_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x128A1700)
#define CLASS_3_6105350C6862E066_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x128A1D60)
#define CLASS_3_6105350C6862E066_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x128A1510)
#define CLASS_3_6105350C6862E066_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x128A1EC0)
#define CLASS_3_6105350C6862E066_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x128A1610)
#define CLASS_3_6105350C6862E066_METHOD_3_D43D553A8EE4CBFF_OFFSET UNITYSDK_OFFSET(0x128A0F70)
#define CLASS_3_6105350C6862E066_METHOD_3_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x128A10C0)
#define CLASS_3_6105350C6862E066__CTOR_OFFSET UNITYSDK_OFFSET(0x128A1BA0)

inline static constexpr unsigned int Class_3_6105350C6862E066_TypeDefinitionIndex = 64124;

class Class_3_6105350C6862E066 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::MoleMole::Config::DynamicString* Field_3_2; // 0x38
	::System::Int32 Field_3_0; // 0x40
	::System::Boolean Field_3_1; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D43D553A8EE4CBFF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_D43D553A8EE4CBFF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_6105350C6862E066* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_6105350C6862E066*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_6105350C6862E066* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_6105350C6862E066*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_6105350C6862E066_METHOD_3_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}
};
