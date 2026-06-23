#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EF896E1D0FDF202A.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/DamageHitType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_EEB7F213187A6FBE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148278F0)
#define CLASS_2_EEB7F213187A6FBE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14827CC0)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x14828130)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x14827950)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_44A8EC7A961E6CCC_OFFSET UNITYSDK_OFFSET(0x14827800)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_6A8EE27FF3BABDB3_OFFSET UNITYSDK_OFFSET(0x14827F00)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x14827D40)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x14827B00)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x14827C50)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x14827FD0)
#define CLASS_2_EEB7F213187A6FBE_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x14827B50)
#define CLASS_2_EEB7F213187A6FBE__CTOR_OFFSET UNITYSDK_OFFSET(0x14827EF0)

inline static constexpr unsigned int Class_2_EEB7F213187A6FBE_TypeDefinitionIndex = 56708;

class Class_2_EEB7F213187A6FBE : public ::Class_1_EF896E1D0FDF202A
{
public:
	::MoleMole::Config::DamageHitType Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_44A8EC7A961E6CCC(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_44A8EC7A961E6CCC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_EF896E1D0FDF202A* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_EF896E1D0FDF202A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_6A8EE27FF3BABDB3(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_6A8EE27FF3BABDB3_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
	}

	static ::Class_2_EEB7F213187A6FBE* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_EEB7F213187A6FBE*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_EEB7F213187A6FBE* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_EEB7F213187A6FBE*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_EEB7F213187A6FBE_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}
};
