#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E707B1697AD8E905_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x162DB1D0)
#define CLASS_2_E707B1697AD8E905_FROMFLX_OFFSET UNITYSDK_OFFSET(0x162DB9B0)
#define CLASS_2_E707B1697AD8E905_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x162DC690)
#define CLASS_2_E707B1697AD8E905_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x162DBA30)
#define CLASS_2_E707B1697AD8E905_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x162DC840)
#define CLASS_2_E707B1697AD8E905_METHOD_2_B1ECAEE982D24001_OFFSET UNITYSDK_OFFSET(0x162DB230)
#define CLASS_2_E707B1697AD8E905_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x162DB770)
#define CLASS_2_E707B1697AD8E905_METHOD_2_BD5C42CD95EDAB9D_OFFSET UNITYSDK_OFFSET(0x162DB0E0)
#define CLASS_2_E707B1697AD8E905_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x162DB940)
#define CLASS_2_E707B1697AD8E905_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x162DC530)
#define CLASS_2_E707B1697AD8E905_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x162DB840)
#define CLASS_2_E707B1697AD8E905__CTOR_OFFSET UNITYSDK_OFFSET(0x162DC520)

inline static constexpr unsigned int Class_2_E707B1697AD8E905_TypeDefinitionIndex = 49924;

class Class_2_E707B1697AD8E905 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::ConfigPosRot* Field_2_5; // 0x38
	::System::String* Field_2_3; // 0x40
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x48
	::MoleMole::Config::ConfigPosRot* Field_2_4; // 0x50
	::MoleMole::Config::ValueCompareType Field_2_1; // 0x58
	::MoleMole::Config::AbilityTargetting Field_2_2; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_BD5C42CD95EDAB9D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_BD5C42CD95EDAB9D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B1ECAEE982D24001(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_B1ECAEE982D24001_OFFSET))(this, a1, a2);
	}

	static ::Class_2_E707B1697AD8E905* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_E707B1697AD8E905*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_E707B1697AD8E905* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_E707B1697AD8E905*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_E707B1697AD8E905_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
