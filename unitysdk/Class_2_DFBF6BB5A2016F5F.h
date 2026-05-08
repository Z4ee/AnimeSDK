#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DFBF6BB5A2016F5F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x116CAC10)
#define CLASS_2_DFBF6BB5A2016F5F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x116CB430)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_0688B0C508114601_OFFSET UNITYSDK_OFFSET(0x116CAC70)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x116CBDA0)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x116CBCD0)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x116CB4B0)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x116CB1F0)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x116CB3C0)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x116CAB10)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x116CBF50)
#define CLASS_2_DFBF6BB5A2016F5F_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x116CB2C0)
#define CLASS_2_DFBF6BB5A2016F5F__CTOR_OFFSET UNITYSDK_OFFSET(0x116CBCC0)

inline static constexpr unsigned int Class_2_DFBF6BB5A2016F5F_TypeDefinitionIndex = 60372;

class Class_2_DFBF6BB5A2016F5F : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x38
	::MoleMole::Config::DynamicInt* Field_2_3; // 0x40
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterStrengthType>* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterFunctionType>* Field_2_1; // 0x50
	::MoleMole::Config::ValueCompareType Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0688B0C508114601(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_0688B0C508114601_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_DFBF6BB5A2016F5F* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_DFBF6BB5A2016F5F*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_8741A88D50268453_OFFSET))(this, a1);
	}

	static ::Class_2_DFBF6BB5A2016F5F* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_DFBF6BB5A2016F5F*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_DFBF6BB5A2016F5F_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
