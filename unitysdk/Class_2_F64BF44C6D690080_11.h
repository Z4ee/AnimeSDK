#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F64BF44C6D690080_11_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13918800)
#define CLASS_2_F64BF44C6D690080_11_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13918D90)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x139193E0)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x13918860)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x13918E10)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x13919590)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_6B4478571F0A3453_OFFSET UNITYSDK_OFFSET(0x13918710)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x13918C30)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13918D80)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13919280)
#define CLASS_2_F64BF44C6D690080_11_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13918C80)
#define CLASS_2_F64BF44C6D690080_11__CTOR_OFFSET UNITYSDK_OFFSET(0x13919270)

inline static constexpr unsigned int Class_2_F64BF44C6D690080_11_TypeDefinitionIndex = 60882;

class Class_2_F64BF44C6D690080_11 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::Boolean Field_2_0; // 0x38
	::System::Boolean Field_2_7; // 0x39
	::System::Boolean Field_2_1; // 0x3A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_6B4478571F0A3453(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_6B4478571F0A3453_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_F64BF44C6D690080_11* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F64BF44C6D690080_11*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_297EA0FD117460C4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_297EA0FD117460C4_OFFSET))(this, a1, a2);
	}

	static ::Class_2_F64BF44C6D690080_11* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F64BF44C6D690080_11*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F64BF44C6D690080_11_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
