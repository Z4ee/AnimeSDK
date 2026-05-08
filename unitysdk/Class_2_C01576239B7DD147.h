#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8FCF3FE3F8E0AF4C.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_4D61A7A49E7F7878;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C01576239B7DD147_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xDB4CB70)
#define CLASS_2_C01576239B7DD147_FROMFLX_OFFSET UNITYSDK_OFFSET(0xDB4C7C0)
#define CLASS_2_C01576239B7DD147_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xDB4CE50)
#define CLASS_2_C01576239B7DD147_METHOD_2_228ECD0F925899F0_OFFSET UNITYSDK_OFFSET(0xDB4C470)
#define CLASS_2_C01576239B7DD147_METHOD_2_33778EC196139AD8_OFFSET UNITYSDK_OFFSET(0xDB4CDA0)
#define CLASS_2_C01576239B7DD147_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xDB4C600)
#define CLASS_2_C01576239B7DD147_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xDB4C750)
#define CLASS_2_C01576239B7DD147_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xDB4D000)
#define CLASS_2_C01576239B7DD147_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xDB4C650)
#define CLASS_2_C01576239B7DD147_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xDB4C840)
#define CLASS_2_C01576239B7DD147_METHOD_2_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0xDB4CBD0)
#define CLASS_2_C01576239B7DD147__CTOR_OFFSET UNITYSDK_OFFSET(0xDB4C400)

inline static constexpr unsigned int Class_2_C01576239B7DD147_TypeDefinitionIndex = 45561;

class Class_2_C01576239B7DD147 : public ::Class_1_8FCF3FE3F8E0AF4C
{
public:
	::MoleMole::Config::DynamicFloat* Field_2_0; // 0x10
	::MoleMole::Config::ValueCompareType Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_228ECD0F925899F0(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_228ECD0F925899F0_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_8FCF3FE3F8E0AF4C* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8FCF3FE3F8E0AF4C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_33778EC196139AD8(::Class_2_4D61A7A49E7F7878* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_1_B7E341C5F1A6F199* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_4D61A7A49E7F7878*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_33778EC196139AD8_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_2_C01576239B7DD147* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C01576239B7DD147*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	static ::Class_2_C01576239B7DD147* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C01576239B7DD147*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C01576239B7DD147_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
