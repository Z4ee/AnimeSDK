#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_175E7DC52483A3CE.h"
#include "unitysdk/Enum_3_60B60884B6778625.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_96BEA4DAC09BB03E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1871FA20)
#define CLASS_2_96BEA4DAC09BB03E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1871FE00)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18720280)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x1871FE80)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x187201A0)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x1871FA80)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_74E050EC882E817F_OFFSET UNITYSDK_OFFSET(0x1871F7E0)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1871FCA0)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1871FDF0)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18720430)
#define CLASS_2_96BEA4DAC09BB03E_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1871FCF0)
#define CLASS_2_96BEA4DAC09BB03E__CTOR_OFFSET UNITYSDK_OFFSET(0x1871F7D0)

inline static constexpr unsigned int Class_2_96BEA4DAC09BB03E_TypeDefinitionIndex = 48190;

class Class_2_96BEA4DAC09BB03E : public ::Class_1_175E7DC52483A3CE
{
public:
	::System::String* Field_2_1; // 0x18
	::Enum_3_60B60884B6778625 Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_74E050EC882E817F(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_74E050EC882E817F_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_175E7DC52483A3CE* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::String* Method_2_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_96BEA4DAC09BB03E* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_96BEA4DAC09BB03E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_96BEA4DAC09BB03E* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_96BEA4DAC09BB03E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_METHOD_2_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}
};
