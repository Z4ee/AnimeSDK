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
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_E3E9A80CAF4F03B3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18169ED0)
#define CLASS_2_E3E9A80CAF4F03B3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1816A2B0)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1816A330)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x18169F30)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1816A680)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_537D151A7299220B_OFFSET UNITYSDK_OFFSET(0x1816A520)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1816A110)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1816A830)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1816A2A0)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1816A900)
#define CLASS_2_E3E9A80CAF4F03B3_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1816A1A0)
#define CLASS_2_E3E9A80CAF4F03B3__CTOR_OFFSET UNITYSDK_OFFSET(0x1816A670)

inline static constexpr unsigned int Class_2_E3E9A80CAF4F03B3_TypeDefinitionIndex = 75171;

class Class_2_E3E9A80CAF4F03B3 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_537D151A7299220B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_537D151A7299220B_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	static ::Class_2_E3E9A80CAF4F03B3* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_E3E9A80CAF4F03B3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	static ::Class_2_E3E9A80CAF4F03B3* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_E3E9A80CAF4F03B3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_E3E9A80CAF4F03B3_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
