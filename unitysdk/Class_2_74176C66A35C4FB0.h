#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/Enum_3_9CBBB791D0978B97_2.h"
#include "unitysdk/Enum_3_B42D3B4769D5C848.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/MonsterStrengthType.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_74176C66A35C4FB0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1992E180)
#define CLASS_2_74176C66A35C4FB0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1992E8A0)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1992F360)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1992E920)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_4ECA99273B8D9FC8_OFFSET UNITYSDK_OFFSET(0x1992E1E0)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1992E6F0)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1992F290)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1992E890)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x1992E080)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1992F510)
#define CLASS_2_74176C66A35C4FB0_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1992E790)
#define CLASS_2_74176C66A35C4FB0__CTOR_OFFSET UNITYSDK_OFFSET(0x1992F280)

inline static constexpr unsigned int Class_2_74176C66A35C4FB0_TypeDefinitionIndex = 47770;

class Class_2_74176C66A35C4FB0 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicInt* Field_2_11; // 0x38
	::System::Collections::Generic::List_1<::MoleMole::Config::MonsterStrengthType>* Field_2_4; // 0x40
	::Enum_3_9CBBB791D0978B97_2 Field_2_5; // 0x48
	::MoleMole::Config::ValueCompareType Field_2_10; // 0x4C
	::MoleMole::Config::BuffGroupName Field_2_6; // 0x50
	::Enum_3_B42D3B4769D5C848 Field_2_0; // 0x54
	::System::Int32 Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_4ECA99273B8D9FC8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_4ECA99273B8D9FC8_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	static ::Class_2_74176C66A35C4FB0* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_74176C66A35C4FB0*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_74176C66A35C4FB0* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_74176C66A35C4FB0*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_74176C66A35C4FB0_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
