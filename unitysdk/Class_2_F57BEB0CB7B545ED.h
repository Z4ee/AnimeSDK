#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
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
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F57BEB0CB7B545ED_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188ACB30)
#define CLASS_2_F57BEB0CB7B545ED_FROMFLX_OFFSET UNITYSDK_OFFSET(0x188AD300)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x188ADF40)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x188AD380)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_39DDF093276259E0_OFFSET UNITYSDK_OFFSET(0x188AD150)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x188ADE70)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_B02211135C5665F9_OFFSET UNITYSDK_OFFSET(0x188ACB90)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_D1EF29B9C4396DF3_OFFSET UNITYSDK_OFFSET(0x188ACA30)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x188ADD10)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x188AD050)
#define CLASS_2_F57BEB0CB7B545ED_METHOD_2_D8A375BA431DF6B3_OFFSET UNITYSDK_OFFSET(0x188ACF60)
#define CLASS_2_F57BEB0CB7B545ED__CTOR_OFFSET UNITYSDK_OFFSET(0x188ADD00)

inline static constexpr unsigned int Class_2_F57BEB0CB7B545ED_TypeDefinitionIndex = 59231;

class Class_2_F57BEB0CB7B545ED : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_2; // 0x38
	::Class_1_4ED21A115C97704D* Field_2_5; // 0x40
	::MoleMole::Config::DynamicInt* Field_2_3; // 0x48
	::System::String* Field_2_0; // 0x50
	::MoleMole::Config::DynamicString* Field_2_4; // 0x58
	::MoleMole::Config::ValueCompareType Field_2_1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D1EF29B9C4396DF3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_D1EF29B9C4396DF3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D8A375BA431DF6B3(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_D8A375BA431DF6B3_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_39DDF093276259E0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_39DDF093276259E0_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_2_F57BEB0CB7B545ED* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_F57BEB0CB7B545ED*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_B02211135C5665F9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_B02211135C5665F9_OFFSET))(this, a1, a2);
	}

	static ::Class_2_F57BEB0CB7B545ED* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_F57BEB0CB7B545ED*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_F57BEB0CB7B545ED_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
