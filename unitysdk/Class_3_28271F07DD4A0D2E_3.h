#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/Enum_3_2507781CDB220ADE.h"
#include "unitysdk/Enum_3_9CFFF5AAA4C946D7.h"
#include "unitysdk/Enum_3_B3E208AA3A944E42.h"
#include "unitysdk/Enum_3_E9B3C55106B286B7.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_6FBC1E619E8727FF;
class Class_1_C836D00248E6EFFE;
class Class_1_CE2E7DC9D5241F3C;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class ConfigRotation; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_28271F07DD4A0D2E_3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE87E300)
#define CLASS_3_28271F07DD4A0D2E_3_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE87F1B0)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xE8819C0)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_264405747E387A1B_OFFSET UNITYSDK_OFFSET(0xE87F230)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_2A6F036DDCA43A2B_OFFSET UNITYSDK_OFFSET(0xE881B70)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0xE87E2F0)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_78C423A2F85760E8_OFFSET UNITYSDK_OFFSET(0xE87EF10)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xE881860)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xE87F040)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_1_OFFSET UNITYSDK_OFFSET(0xE87E250)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xE87E1B0)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xE87F140)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_D13DCD680ACD4877_OFFSET UNITYSDK_OFFSET(0xE87E360)
#define CLASS_3_28271F07DD4A0D2E_3_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xE881B80)
#define CLASS_3_28271F07DD4A0D2E_3__CTOR_OFFSET UNITYSDK_OFFSET(0xE881820)

inline static constexpr unsigned int Class_3_28271F07DD4A0D2E_3_TypeDefinitionIndex = 66957;

class Class_3_28271F07DD4A0D2E_3 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::ConfigPosRot* Field_3_6; // 0x20
	::Class_1_CE2E7DC9D5241F3C* Field_3_0; // 0x28
	::System::String* Field_3_23; // 0x30
	::MoleMole::Config::ConfigMovement* Field_3_24; // 0x38
	::System::String* Field_3_12; // 0x40
	::System::String* Field_3_2; // 0x48
	::System::String* Field_3_11; // 0x50
	::System::String* Field_3_16; // 0x58
	::Class_1_6FBC1E619E8727FF* Field_3_7; // 0x60
	::MoleMole::Config::ConfigPosRot* Field_3_3; // 0x68
	::MoleMole::Config::ConfigRotation* Field_3_25; // 0x70
	::MoleMole::Config::ConfigPosRot* Field_3_10; // 0x78
	::Enum_3_B3E208AA3A944E42 Field_3_1; // 0x80
	::System::Int32 Field_3_21; // 0x84
	::System::Int32 Field_3_8; // 0x88
	::Enum_3_2507781CDB220ADE Field_3_20; // 0x8C
	::MoleMole::Config::AbilityTargetting Field_3_9; // 0x90
	::Enum_3_9CFFF5AAA4C946D7 Field_3_17; // 0x94
	::System::Single Field_3_15; // 0x98
	::System::Single Field_3_18; // 0x9C
	::Enum_3_E9B3C55106B286B7 Field_3_19; // 0xA0
	::System::Single Field_3_13; // 0xA4
	::MoleMole::Config::AbilityTargetting Field_3_5; // 0xA8
	::System::Boolean Field_3_22; // 0xAC
	::System::Boolean Field_3_4; // 0xAD
	::System::Boolean Field_3_14; // 0xAE

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B_1(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_BB2B154A9AA5F82B_1_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_78C423A2F85760E8(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_78C423A2F85760E8_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_28271F07DD4A0D2E_3* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_28271F07DD4A0D2E_3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_28271F07DD4A0D2E_3* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_28271F07DD4A0D2E_3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_264405747E387A1B(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_264405747E387A1B_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_2A6F036DDCA43A2B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_2A6F036DDCA43A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_D13DCD680ACD4877(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_D13DCD680ACD4877_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_28271F07DD4A0D2E_3_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}
};
