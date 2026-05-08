#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/Enum_3_BA67D7D7F4B5659B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_29639F9BD87BBAA7_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1239B920)
#define CLASS_2_29639F9BD87BBAA7_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1239C0A0)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1239D3E0)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x1239C120)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_38B782D577BF317C_OFFSET UNITYSDK_OFFSET(0x1239BE20)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1239D310)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_7C09671A6E6095F0_OFFSET UNITYSDK_OFFSET(0x1239B830)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1239C030)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1239D1B0)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1239BF30)
#define CLASS_2_29639F9BD87BBAA7_METHOD_2_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x1239B980)
#define CLASS_2_29639F9BD87BBAA7__CTOR_OFFSET UNITYSDK_OFFSET(0x1239D1A0)

inline static constexpr unsigned int Class_2_29639F9BD87BBAA7_TypeDefinitionIndex = 70774;

class Class_2_29639F9BD87BBAA7 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_1; // 0x38
	::MoleMole::Config::DynamicFloat* Field_2_8; // 0x40
	::MoleMole::Config::DynamicFloat* Field_2_7; // 0x48
	::MoleMole::Config::DynamicFloat* Field_2_5; // 0x50
	::MoleMole::Config::DynamicFloat* Field_2_6; // 0x58
	::MoleMole::Config::DynamicFloat* Field_2_3; // 0x60
	::MoleMole::Config::DynamicFloat* Field_2_2; // 0x68
	::System::Boolean Field_2_9; // 0x70
	::Enum_3_BA67D7D7F4B5659B Field_2_0; // 0x74
	::UnityEngine::Vector3 Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_7C09671A6E6095F0(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_7C09671A6E6095F0_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_38B782D577BF317C(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_38B782D577BF317C_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_29639F9BD87BBAA7* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_29639F9BD87BBAA7*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}

	static ::Class_2_29639F9BD87BBAA7* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_29639F9BD87BBAA7*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_29639F9BD87BBAA7_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
