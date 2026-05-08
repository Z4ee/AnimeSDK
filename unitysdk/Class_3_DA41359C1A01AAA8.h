#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/Enum_3_E0707159A4819BEE.h"
#include "unitysdk/ExpressionV2/ExprValue.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_DBD52437176D727B;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace ExpressionV2 { class ExpressionCompiler; }
namespace ExpressionV2 { class ExpressionEvalContext; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_DA41359C1A01AAA8_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1239A2B0)
#define CLASS_3_DA41359C1A01AAA8_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1239A890)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1239A910)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1239B520)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_5EC289B2C3B1836B_OFFSET UNITYSDK_OFFSET(0x1239A310)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1239AFF0)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x1239A720)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x1239B440)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1239A660)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1239A820)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_D692029B7700F7B0_OFFSET UNITYSDK_OFFSET(0x1239A1B0)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_D7969045A521A80C_OFFSET UNITYSDK_OFFSET(0x1239B150)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_EEB37A2918901A58_OFFSET UNITYSDK_OFFSET(0x1239B6D0)
#define CLASS_3_DA41359C1A01AAA8_METHOD_3_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1239A2A0)
#define CLASS_3_DA41359C1A01AAA8__CTOR_OFFSET UNITYSDK_OFFSET(0x1239AF30)

inline static constexpr unsigned int Class_3_DA41359C1A01AAA8_TypeDefinitionIndex = 73035;

class Class_3_DA41359C1A01AAA8 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::ExpressionV2::ExpressionCompiler* Field_3_2; // 0x38
	::System::String* Field_3_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ExpressionV2::ExprValue>* Field_3_4; // 0x48
	::Class_3_DBD52437176D727B* Field_3_0; // 0x50
	::System::String* Field_3_1; // 0x58
	::ExpressionV2::ExpressionEvalContext* Field_3_3; // 0x60
	::System::String* Field_3_7; // 0x68
	::Enum_3_E0707159A4819BEE Field_3_6; // 0x70
	::System::Boolean Field_3_8; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_D692029B7700F7B0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_D692029B7700F7B0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_5EC289B2C3B1836B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_5EC289B2C3B1836B_OFFSET))(this, a1, a2);
	}

	static ::Class_3_DA41359C1A01AAA8* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_DA41359C1A01AAA8*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::Class_3_DBD52437176D727B* Method_3_D7969045A521A80C(::Class_2_167BB37617B940E3* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::Class_3_DBD52437176D727B*(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_D7969045A521A80C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_3_DA41359C1A01AAA8* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_DA41359C1A01AAA8*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Single Method_3_EEB37A2918901A58(::Class_2_167BB37617B940E3* a1, ::Class_3_F97B015544BE936B* a2)
	{
		return ((::System::Single(*)(::PVOID, ::Class_2_167BB37617B940E3*, ::Class_3_F97B015544BE936B*))((::PBYTE)hIl2Cpp + CLASS_3_DA41359C1A01AAA8_METHOD_3_EEB37A2918901A58_OFFSET))(this, a1, a2);
	}
};
