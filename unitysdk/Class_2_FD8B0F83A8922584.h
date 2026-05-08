#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_FD8B0F83A8922584_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEFE33C0)
#define CLASS_2_FD8B0F83A8922584_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEFE38C0)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xEFE4040)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0xEFE3940)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_24FE016FD8ACDD68_OFFSET UNITYSDK_OFFSET(0xEFE3420)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0xEFE36B0)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0xEFE3E10)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xEFE3850)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0xEFE32C0)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xEFE3EE0)
#define CLASS_2_FD8B0F83A8922584_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xEFE3750)
#define CLASS_2_FD8B0F83A8922584__CTOR_OFFSET UNITYSDK_OFFSET(0xEFE3E00)

inline static constexpr unsigned int Class_2_FD8B0F83A8922584_TypeDefinitionIndex = 61080;

class Class_2_FD8B0F83A8922584 : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicInt* Field_2_1; // 0x38
	::MoleMole::Config::DynamicString* Field_2_0; // 0x40
	::MoleMole::Config::ValueCompareType Field_2_2; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_FD8B0F83A8922584* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_FD8B0F83A8922584*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_FD8B0F83A8922584* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_FD8B0F83A8922584*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24FE016FD8ACDD68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD8B0F83A8922584_METHOD_2_24FE016FD8ACDD68_OFFSET))(this, a1, a2);
	}
};
