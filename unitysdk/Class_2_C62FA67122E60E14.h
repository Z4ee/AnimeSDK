#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8FCF3FE3F8E0AF4C.h"
#include "unitysdk/Enum_3_B216EC0B8CE2CD9F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C62FA67122E60E14_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B9F680)
#define CLASS_2_C62FA67122E60E14_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18B9F2E0)
#define CLASS_2_C62FA67122E60E14_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18B9FB90)
#define CLASS_2_C62FA67122E60E14_METHOD_2_33778EC196139AD8_OFFSET UNITYSDK_OFFSET(0x18B9F980)
#define CLASS_2_C62FA67122E60E14_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x18B9F360)
#define CLASS_2_C62FA67122E60E14_METHOD_2_6267F7262EFE4678_OFFSET UNITYSDK_OFFSET(0x18B9EF30)
#define CLASS_2_C62FA67122E60E14_METHOD_2_775C2B47B8DBA768_OFFSET UNITYSDK_OFFSET(0x18B9F6E0)
#define CLASS_2_C62FA67122E60E14_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x18B9F180)
#define CLASS_2_C62FA67122E60E14_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18B9F2D0)
#define CLASS_2_C62FA67122E60E14_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18B9FA30)
#define CLASS_2_C62FA67122E60E14_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x18B9F1D0)
#define CLASS_2_C62FA67122E60E14__CTOR_OFFSET UNITYSDK_OFFSET(0x18B9EEB0)

inline static constexpr unsigned int Class_2_C62FA67122E60E14_TypeDefinitionIndex = 83929;

class Class_2_C62FA67122E60E14 : public ::Class_1_8FCF3FE3F8E0AF4C
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_2_0; // 0x10
	::Enum_3_B216EC0B8CE2CD9F Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_6267F7262EFE4678(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_6267F7262EFE4678_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_8FCF3FE3F8E0AF4C* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8FCF3FE3F8E0AF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_775C2B47B8DBA768(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_775C2B47B8DBA768_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_33778EC196139AD8(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_33778EC196139AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_2_C62FA67122E60E14* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C62FA67122E60E14*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_C62FA67122E60E14* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C62FA67122E60E14*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C62FA67122E60E14_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
