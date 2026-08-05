#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/Enum_3_4E4B71C92FE8F10C.h"
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

#define CLASS_2_1273AD70476A5987_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B83540)
#define CLASS_2_1273AD70476A5987_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18B83980)
#define CLASS_2_1273AD70476A5987_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18B83D00)
#define CLASS_2_1273AD70476A5987_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x18B83A00)
#define CLASS_2_1273AD70476A5987_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x18B84010)
#define CLASS_2_1273AD70476A5987_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x18B83820)
#define CLASS_2_1273AD70476A5987_METHOD_2_BF50AF6BCBDE0EBC_OFFSET UNITYSDK_OFFSET(0x18B835A0)
#define CLASS_2_1273AD70476A5987_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18B83970)
#define CLASS_2_1273AD70476A5987_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18B83EB0)
#define CLASS_2_1273AD70476A5987_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x18B83870)
#define CLASS_2_1273AD70476A5987_METHOD_2_DA60A52254F52263_OFFSET UNITYSDK_OFFSET(0x18B83450)
#define CLASS_2_1273AD70476A5987__CTOR_OFFSET UNITYSDK_OFFSET(0x18B83CF0)

inline static constexpr unsigned int Class_2_1273AD70476A5987_TypeDefinitionIndex = 51957;

class Class_2_1273AD70476A5987 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::Enum_3_4E4B71C92FE8F10C Field_2_0; // 0x38
	::System::Boolean Field_2_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_DA60A52254F52263(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_DA60A52254F52263_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_1273AD70476A5987* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_1273AD70476A5987*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_1273AD70476A5987* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_1273AD70476A5987*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_BF50AF6BCBDE0EBC(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_BF50AF6BCBDE0EBC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_1273AD70476A5987_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
