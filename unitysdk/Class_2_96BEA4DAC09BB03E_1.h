#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_175E7DC52483A3CE.h"
#include "unitysdk/Enum_3_651C26BCF5ABCBAA.h"
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

#define CLASS_2_96BEA4DAC09BB03E_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1655CAF0)
#define CLASS_2_96BEA4DAC09BB03E_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1655CED0)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1655D3C0)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_1AE68D2660A32860_OFFSET UNITYSDK_OFFSET(0x1655D570)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_2544D774F2F3A291_OFFSET UNITYSDK_OFFSET(0x1655CB50)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_7821D1D4DDDF7E01_OFFSET UNITYSDK_OFFSET(0x1655CF50)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1655CD70)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1655CEC0)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1655D260)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1655CDC0)
#define CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_DF8C632816CAD2C9_OFFSET UNITYSDK_OFFSET(0x1655C6F0)
#define CLASS_2_96BEA4DAC09BB03E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1655C6E0)

inline static constexpr unsigned int Class_2_96BEA4DAC09BB03E_1_TypeDefinitionIndex = 85047;

class Class_2_96BEA4DAC09BB03E_1 : public ::Class_1_175E7DC52483A3CE
{
public:
	::System::String* Field_2_0; // 0x18
	::Enum_3_651C26BCF5ABCBAA Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DF8C632816CAD2C9(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_DF8C632816CAD2C9_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_175E7DC52483A3CE* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_175E7DC52483A3CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7821D1D4DDDF7E01(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_7821D1D4DDDF7E01_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_2544D774F2F3A291(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_2544D774F2F3A291_OFFSET))(this, a1, a2);
	}

	static ::Class_2_96BEA4DAC09BB03E_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_96BEA4DAC09BB03E_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_96BEA4DAC09BB03E_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_96BEA4DAC09BB03E_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::String* Method_2_1AE68D2660A32860(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::MoleMole::Battle::Entity* a4, ::MoleMole::Battle::Entity* a5, ::Class_1_B7E341C5F1A6F199* a6)
	{
		return ((::System::String*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_96BEA4DAC09BB03E_1_METHOD_2_1AE68D2660A32860_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}
};
