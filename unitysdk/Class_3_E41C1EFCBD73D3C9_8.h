#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/Enum_3_DBE85A55BA66609E_1.h"
#include "unitysdk/Enum_3_F6D918332AAEDB78.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_E41C1EFCBD73D3C9_8_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x130B7BB0)
#define CLASS_3_E41C1EFCBD73D3C9_8_FROMFLX_OFFSET UNITYSDK_OFFSET(0x130B8750)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x130BA870)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x130B7BA0)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x130B8540)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x130BAA20)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x130B87D0)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x130B85E0)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x130B7B00)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x130B86E0)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_D13DCD680ACD4877_OFFSET UNITYSDK_OFFSET(0x130B7C10)
#define CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x130BA7D0)
#define CLASS_3_E41C1EFCBD73D3C9_8__CTOR_OFFSET UNITYSDK_OFFSET(0x130BA7C0)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_8_TypeDefinitionIndex = 82259;

class Class_3_E41C1EFCBD73D3C9_8 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::ConfigPosRot* Field_3_3; // 0x20
	::System::String* Field_3_18; // 0x28
	::System::String* Field_3_0; // 0x30
	::MoleMole::Config::ConfigPosRot* Field_3_1; // 0x38
	::MoleMole::Config::ConfigPosRot* Field_3_2; // 0x40
	::System::Single Field_3_16; // 0x48
	::System::Single Field_3_8; // 0x4C
	::System::Single Field_3_11; // 0x50
	::System::Single Field_3_17; // 0x54
	::System::Single Field_3_9; // 0x58
	::System::Single Field_3_15; // 0x5C
	::System::Single Field_3_7; // 0x60
	::Enum_3_F6D918332AAEDB78 Field_3_4; // 0x64
	::System::Single Field_3_5; // 0x68
	::System::Single Field_3_6; // 0x6C
	::System::Single Field_3_10; // 0x70
	::System::Single Field_3_13; // 0x74
	::System::Single Field_3_12; // 0x78
	::System::Boolean Field_3_19; // 0x7C
	::Enum_3_DBE85A55BA66609E_1 Field_3_14; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_993A24B415B41A1C_OFFSET))(this, a1);
	}

	static ::Class_3_E41C1EFCBD73D3C9_8* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_8*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_D13DCD680ACD4877(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_D13DCD680ACD4877_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_8* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_8*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_8_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
