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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EE8F92FD58BDBCE7_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A2B7670)
#define CLASS_2_EE8F92FD58BDBCE7_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A2B7A50)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1A2B7AD0)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1A2B76D0)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1A2B7DA0)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1A2B78B0)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1A2B7CD0)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A2B7A40)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1A2B7F50)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1A2B7940)
#define CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_FEE13B792687B75D_OFFSET UNITYSDK_OFFSET(0x1A2B7580)
#define CLASS_2_EE8F92FD58BDBCE7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2B7CC0)

inline static constexpr unsigned int Class_2_EE8F92FD58BDBCE7_1_TypeDefinitionIndex = 53276;

class Class_2_EE8F92FD58BDBCE7_1 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicString* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FEE13B792687B75D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_FEE13B792687B75D_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_EE8F92FD58BDBCE7_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_EE8F92FD58BDBCE7_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	static ::Class_2_EE8F92FD58BDBCE7_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_EE8F92FD58BDBCE7_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_EE8F92FD58BDBCE7_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
