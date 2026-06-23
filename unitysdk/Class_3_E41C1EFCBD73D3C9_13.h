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
class Class_2_828B2711AF58BA0B;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_13_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12CAC4F0)
#define CLASS_3_E41C1EFCBD73D3C9_13_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12CAD280)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x12CAF390)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x12CAF540)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x12CAD300)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_9E676667B518C656_OFFSET UNITYSDK_OFFSET(0x12CAD010)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x12CAD110)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x12CAC450)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x12CAD210)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_CFB8F2E56E6F02E9_OFFSET UNITYSDK_OFFSET(0x12CAC550)
#define CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x12CAF2F0)
#define CLASS_3_E41C1EFCBD73D3C9_13__CTOR_OFFSET UNITYSDK_OFFSET(0x12CAF270)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_13_TypeDefinitionIndex = 87508;

class Class_3_E41C1EFCBD73D3C9_13 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::ConfigPosRot* Field_3_2; // 0x20
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_16; // 0x28
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_19; // 0x30
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_17; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_3_3; // 0x40
	::System::String* Field_3_7; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x50
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_18; // 0x58
	::System::String* Field_3_1; // 0x60
	::System::Boolean Field_3_8; // 0x68
	::System::Boolean Field_3_11; // 0x69
	::System::Boolean Field_3_15; // 0x6A
	::System::Boolean Field_3_12; // 0x6B
	::MoleMole::Config::EtherEyesObjectSize Field_3_6; // 0x6C
	::MoleMole::Config::EtherEyesObjectConfig Field_3_5; // 0x70
	::System::Int32 Field_3_0; // 0x88
	::System::Single Field_3_9; // 0x8C
	::System::Boolean Field_3_13; // 0x90
	::System::Boolean Field_3_10; // 0x91
	::System::Boolean Field_3_14; // 0x92

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9E676667B518C656(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_9E676667B518C656_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_CFB8F2E56E6F02E9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_CFB8F2E56E6F02E9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_993A24B415B41A1C_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_E41C1EFCBD73D3C9_13* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_13*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_13* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_13*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_13_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
