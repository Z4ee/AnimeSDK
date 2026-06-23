#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ANIM_CTRLER_PARAMS_TYPE.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_BDC32DC1D8B0CF81_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1520B4A0)
#define CLASS_2_BDC32DC1D8B0CF81_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1520BBA0)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1520BC20)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1520C630)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_529A9CA1CFAF7016_OFFSET UNITYSDK_OFFSET(0x1520B500)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1520C560)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1520B960)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1520BB30)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x1520B3A0)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1520C7E0)
#define CLASS_2_BDC32DC1D8B0CF81_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1520BA30)
#define CLASS_2_BDC32DC1D8B0CF81__CTOR_OFFSET UNITYSDK_OFFSET(0x1520C550)

inline static constexpr unsigned int Class_2_BDC32DC1D8B0CF81_TypeDefinitionIndex = 51980;

class Class_2_BDC32DC1D8B0CF81 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_6; // 0x38
	::Class_1_4ED21A115C97704D* Field_2_4; // 0x40
	::MoleMole::Config::DynamicInt* Field_2_5; // 0x48
	::System::String* Field_2_2; // 0x50
	::MoleMole::Config::ANIM_CTRLER_PARAMS_TYPE Field_2_0; // 0x58
	::MoleMole::Config::ValueCompareType Field_2_3; // 0x5C
	::System::Int32 Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_529A9CA1CFAF7016(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_529A9CA1CFAF7016_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	static ::Class_2_BDC32DC1D8B0CF81* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_BDC32DC1D8B0CF81*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_BDC32DC1D8B0CF81* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_BDC32DC1D8B0CF81*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_BDC32DC1D8B0CF81_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
