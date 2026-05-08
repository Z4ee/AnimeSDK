#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7C9A70DC3FC57CDC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EnterBattleState.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_F2458B9DEB58BA2A_9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x10347850)
#define CLASS_3_F2458B9DEB58BA2A_9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x10348730)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x1034A6E0)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x103487B0)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x1034A580)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_9E676667B518C656_OFFSET UNITYSDK_OFFSET(0x10348480)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x103485C0)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_B2AF4C431D25B230_OFFSET UNITYSDK_OFFSET(0x103478B0)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_B91B1B63B65BCA05_OFFSET UNITYSDK_OFFSET(0x1034A890)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x103486C0)
#define CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_C78F701DB97187BF_OFFSET UNITYSDK_OFFSET(0x10346FE0)
#define CLASS_3_F2458B9DEB58BA2A_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1034A560)

inline static constexpr unsigned int Class_3_F2458B9DEB58BA2A_9_TypeDefinitionIndex = 45958;

class Class_3_F2458B9DEB58BA2A_9 : public ::Class_2_7C9A70DC3FC57CDC
{
public:
	::System::String* Field_3_15; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_12; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_11; // 0x50
	::MoleMole::Config::DynamicInt* Field_3_8; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_13; // 0x60
	::MoleMole::Config::DynamicFloat* Field_3_14; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_9; // 0x70
	::System::Boolean Field_3_7; // 0x78
	::System::Boolean Field_3_1; // 0x79
	::System::Boolean Field_3_20; // 0x7A
	::System::Boolean Field_3_6; // 0x7B
	::MoleMole::Config::EnterBattleState Field_3_16; // 0x7C
	::System::Boolean Field_3_18; // 0x80
	::System::Boolean Field_3_4; // 0x81
	::System::Boolean Field_3_17; // 0x82
	::System::Boolean Field_3_0; // 0x83
	::System::Boolean Field_3_19; // 0x84
	::System::Boolean Field_3_3; // 0x85
	::System::Boolean Field_3_2; // 0x86
	::System::Boolean Field_3_5; // 0x87

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_C78F701DB97187BF(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_C78F701DB97187BF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9E676667B518C656(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_9E676667B518C656_OFFSET))(this, a1);
	}

	::Class_2_7C9A70DC3FC57CDC* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_7C9A70DC3FC57CDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_F2458B9DEB58BA2A_9* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_F2458B9DEB58BA2A_9*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_F2458B9DEB58BA2A_9* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_F2458B9DEB58BA2A_9*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Void Method_3_B91B1B63B65BCA05(::Class_3_F41D242A20F8FE06* a1, ::Class_2_7C9A70DC3FC57CDC* a2, ::Class_2_167BB37617B940E3* a3, ::Class_2_EA995402651EF7A9* a4, ::MoleMole::Battle::Entity* a5, ::MoleMole::Battle::Entity* a6, ::Class_1_B7E341C5F1A6F199* a7)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_7C9A70DC3FC57CDC*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_B91B1B63B65BCA05_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_B2AF4C431D25B230(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F2458B9DEB58BA2A_9_METHOD_3_B2AF4C431D25B230_OFFSET))(this, a1, a2);
	}
};
