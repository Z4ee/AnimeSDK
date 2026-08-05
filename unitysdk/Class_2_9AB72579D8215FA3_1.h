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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9AB72579D8215FA3_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1478D550)
#define CLASS_2_9AB72579D8215FA3_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1478D9F0)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x1478DA70)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_0AFE2382BF92DEC7_OFFSET UNITYSDK_OFFSET(0x1478D5B0)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1478DC70)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x1478D850)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x1478DF80)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1478D9E0)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x1478D450)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1478DE20)
#define CLASS_2_9AB72579D8215FA3_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1478D8E0)
#define CLASS_2_9AB72579D8215FA3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1478DC60)

inline static constexpr unsigned int Class_2_9AB72579D8215FA3_1_TypeDefinitionIndex = 70581;

class Class_2_9AB72579D8215FA3_1 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0AFE2382BF92DEC7(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_0AFE2382BF92DEC7_OFFSET))(this, a1, a2);
	}

	static ::Class_2_9AB72579D8215FA3_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_9AB72579D8215FA3_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_9AB72579D8215FA3_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_9AB72579D8215FA3_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_9AB72579D8215FA3_1_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
