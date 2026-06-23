#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8FCF3FE3F8E0AF4C.h"
#include "unitysdk/Enum_3_08D99F9B7A154DEC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B8B3871838214A12_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15FD93F0)
#define CLASS_2_B8B3871838214A12_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15FD90E0)
#define CLASS_2_B8B3871838214A12_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x15FD9800)
#define CLASS_2_B8B3871838214A12_METHOD_2_33778EC196139AD8_OFFSET UNITYSDK_OFFSET(0x15FD95F0)
#define CLASS_2_B8B3871838214A12_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x15FD9160)
#define CLASS_2_B8B3871838214A12_METHOD_2_9144040ECD391705_OFFSET UNITYSDK_OFFSET(0x15FD9450)
#define CLASS_2_B8B3871838214A12_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x15FD8F60)
#define CLASS_2_B8B3871838214A12_METHOD_2_A9508B18B8896616_OFFSET UNITYSDK_OFFSET(0x15FD8EE0)
#define CLASS_2_B8B3871838214A12_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x15FD9070)
#define CLASS_2_B8B3871838214A12_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x15FD96A0)
#define CLASS_2_B8B3871838214A12_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x15FD8F70)
#define CLASS_2_B8B3871838214A12__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD8ED0)

inline static constexpr unsigned int Class_2_B8B3871838214A12_TypeDefinitionIndex = 66972;

class Class_2_B8B3871838214A12 : public ::Class_1_8FCF3FE3F8E0AF4C
{
public:
	::Enum_3_08D99F9B7A154DEC Field_2_1; // 0x10
	::MoleMole::Config::EntityType Field_2_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_A9508B18B8896616(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_A9508B18B8896616_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_8FCF3FE3F8E0AF4C* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8FCF3FE3F8E0AF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_33778EC196139AD8(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_33778EC196139AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_2_B8B3871838214A12* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_B8B3871838214A12*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_B8B3871838214A12* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_B8B3871838214A12*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_9144040ECD391705(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B8B3871838214A12_METHOD_2_9144040ECD391705_OFFSET))(this, a1, a2);
	}
};
