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
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_23517E92201F6D04_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x143CBAB0)
#define CLASS_3_23517E92201F6D04_FROMFLX_OFFSET UNITYSDK_OFFSET(0x143CBF00)
#define CLASS_3_23517E92201F6D04_METHOD_3_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x143CBB10)
#define CLASS_3_23517E92201F6D04_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x143CC1A0)
#define CLASS_3_23517E92201F6D04_METHOD_3_41D28869350200A8_OFFSET UNITYSDK_OFFSET(0x143CB8F0)
#define CLASS_3_23517E92201F6D04_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x143CBCF0)
#define CLASS_3_23517E92201F6D04_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x143CBF80)
#define CLASS_3_23517E92201F6D04_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x143CC350)
#define CLASS_3_23517E92201F6D04_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x143CBD90)
#define CLASS_3_23517E92201F6D04_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x143CC4B0)
#define CLASS_3_23517E92201F6D04_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x143CBE90)
#define CLASS_3_23517E92201F6D04__CTOR_OFFSET UNITYSDK_OFFSET(0x143CC190)

inline static constexpr unsigned int Class_3_23517E92201F6D04_TypeDefinitionIndex = 82627;

class Class_3_23517E92201F6D04 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::System::String* Field_3_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41D28869350200A8(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_41D28869350200A8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::Class_3_23517E92201F6D04* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_23517E92201F6D04*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_23517E92201F6D04* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_23517E92201F6D04*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_23517E92201F6D04_METHOD_3_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}
};
