#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectConfig.h"
#include "unitysdk/MoleMole/Config/EtherEyesObjectSize.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xDAF68D0)
#define CLASS_3_E41C1EFCBD73D3C9_9_FROMFLX_OFFSET UNITYSDK_OFFSET(0xDAF7650)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xDAF96A0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xDAF98F0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0xDAF76D0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_9E676667B518C656_OFFSET UNITYSDK_OFFSET(0xDAF73E0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xDAF74E0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xDAF6830)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xDAF75E0)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_CFB8F2E56E6F02E9_OFFSET UNITYSDK_OFFSET(0xDAF6930)
#define CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xDAF9850)
#define CLASS_3_E41C1EFCBD73D3C9_9__CTOR_OFFSET UNITYSDK_OFFSET(0xDAF9620)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_9_TypeDefinitionIndex = 73081;

class Class_3_E41C1EFCBD73D3C9_9 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x20
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_17; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_3; // 0x30
	::System::String* Field_3_7; // 0x38
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_19; // 0x40
	::MoleMole::Config::ConfigPosRot* Field_3_2; // 0x48
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_16; // 0x50
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_18; // 0x58
	::System::String* Field_3_1; // 0x60
	::System::Single Field_3_9; // 0x68
	::System::Int32 Field_3_0; // 0x6C
	::MoleMole::Config::EtherEyesObjectSize Field_3_6; // 0x70
	::System::Boolean Field_3_13; // 0x74
	::System::Boolean Field_3_10; // 0x75
	::System::Boolean Field_3_12; // 0x76
	::System::Boolean Field_3_14; // 0x77
	::System::Boolean Field_3_11; // 0x78
	::System::Boolean Field_3_8; // 0x79
	::System::Boolean Field_3_15; // 0x7A
	::MoleMole::Config::EtherEyesObjectConfig Field_3_5; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9E676667B518C656(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_9E676667B518C656_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_993A24B415B41A1C_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CFB8F2E56E6F02E9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_CFB8F2E56E6F02E9_OFFSET))(this, a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_9* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_9*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_E41C1EFCBD73D3C9_9* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_9*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_9_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
