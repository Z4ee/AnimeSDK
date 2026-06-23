#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/Enum_3_CD0EFC7FB96FAA42.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_AB465CA40D1E4B11_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1620E040)
#define CLASS_2_AB465CA40D1E4B11_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1620E580)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1620EAA0)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1620E600)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x1620E0A0)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1620E380)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1620EC50)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1620E510)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x1620DF40)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1620E940)
#define CLASS_2_AB465CA40D1E4B11_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1620E410)
#define CLASS_2_AB465CA40D1E4B11__CTOR_OFFSET UNITYSDK_OFFSET(0x1620E930)

inline static constexpr unsigned int Class_2_AB465CA40D1E4B11_TypeDefinitionIndex = 44844;

class Class_2_AB465CA40D1E4B11 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x38
	::Enum_3_CD0EFC7FB96FAA42 Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_AB465CA40D1E4B11* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_AB465CA40D1E4B11*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	static ::Class_2_AB465CA40D1E4B11* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_AB465CA40D1E4B11*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_AB465CA40D1E4B11_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
