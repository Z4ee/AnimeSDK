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
namespace MoleMole { class TurnBattleUnitBase; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_72655D974156888F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCE2B130)
#define CLASS_3_72655D974156888F_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCE2B6B0)
#define CLASS_3_72655D974156888F_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xCE2BBD0)
#define CLASS_3_72655D974156888F_METHOD_3_1537F6489F4148A1_OFFSET UNITYSDK_OFFSET(0xCE2AA90)
#define CLASS_3_72655D974156888F_METHOD_3_1FAC9B543EF43496_OFFSET UNITYSDK_OFFSET(0xCE2B190)
#define CLASS_3_72655D974156888F_METHOD_3_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xCE2B4D0)
#define CLASS_3_72655D974156888F_METHOD_3_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0xCE2B730)
#define CLASS_3_72655D974156888F_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xCE2BA70)
#define CLASS_3_72655D974156888F_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xCE2B540)
#define CLASS_3_72655D974156888F_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0xCE2BD80)
#define CLASS_3_72655D974156888F_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xCE2B640)
#define CLASS_3_72655D974156888F_METHOD_3_DE0D00AD3F4DF468_OFFSET UNITYSDK_OFFSET(0xCE2B010)
#define CLASS_3_72655D974156888F__CTOR_OFFSET UNITYSDK_OFFSET(0xCE2BA60)

inline static constexpr unsigned int Class_3_72655D974156888F_TypeDefinitionIndex = 41630;

class Class_3_72655D974156888F : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::System::Int32 Field_3_0; // 0x38
	::System::Boolean Field_3_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1537F6489F4148A1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_1537F6489F4148A1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_72655D974156888F* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_72655D974156888F*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_72655D974156888F* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_72655D974156888F*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_DE0D00AD3F4DF468(::MoleMole::TurnBattleUnitBase* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::TurnBattleUnitBase*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_DE0D00AD3F4DF468_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_1FAC9B543EF43496(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_1FAC9B543EF43496_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_72655D974156888F_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
