#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_303C714C858FB7DB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x123A0B50)
#define CLASS_2_303C714C858FB7DB_FROMFLX_OFFSET UNITYSDK_OFFSET(0x123A0FF0)
#define CLASS_2_303C714C858FB7DB_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x123A1750)
#define CLASS_2_303C714C858FB7DB_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x123A1070)
#define CLASS_2_303C714C858FB7DB_METHOD_2_24FE016FD8ACDD68_OFFSET UNITYSDK_OFFSET(0x123A0BB0)
#define CLASS_2_303C714C858FB7DB_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x123A0E40)
#define CLASS_2_303C714C858FB7DB_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x123A1680)
#define CLASS_2_303C714C858FB7DB_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x123A0FE0)
#define CLASS_2_303C714C858FB7DB_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x123A0A50)
#define CLASS_2_303C714C858FB7DB_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x123A1520)
#define CLASS_2_303C714C858FB7DB_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x123A0EE0)
#define CLASS_2_303C714C858FB7DB__CTOR_OFFSET UNITYSDK_OFFSET(0x123A1510)

inline static constexpr unsigned int Class_2_303C714C858FB7DB_TypeDefinitionIndex = 78562;

class Class_2_303C714C858FB7DB : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x38
	::MoleMole::Config::DynamicInt* Field_2_7; // 0x40
	::MoleMole::Config::ValueCompareType Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_303C714C858FB7DB* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_303C714C858FB7DB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_24FE016FD8ACDD68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_24FE016FD8ACDD68_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_303C714C858FB7DB* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_303C714C858FB7DB*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_303C714C858FB7DB_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
