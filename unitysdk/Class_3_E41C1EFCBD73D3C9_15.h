#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_E41C1EFCBD73D3C9_15_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14CC5430)
#define CLASS_3_E41C1EFCBD73D3C9_15_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14CC5FD0)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x14CC78B0)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_2210CC3E4BA6580C_OFFSET UNITYSDK_OFFSET(0x14CC5490)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x14CC5420)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x14CC6050)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x14CC7A60)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x14CC5E60)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_B26BEB40BF099BA2_OFFSET UNITYSDK_OFFSET(0x14CC5D10)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x14CC5380)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x14CC5F60)
#define CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x14CC7810)
#define CLASS_3_E41C1EFCBD73D3C9_15__CTOR_OFFSET UNITYSDK_OFFSET(0x14CC77A0)

inline static constexpr unsigned int Class_3_E41C1EFCBD73D3C9_15_TypeDefinitionIndex = 59731;

class Class_3_E41C1EFCBD73D3C9_15 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_3_14; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_3_7; // 0x28
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_12; // 0x30
	::System::String* Field_3_3; // 0x38
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_13; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0x48
	::MoleMole::Config::DynamicInt* Field_3_1; // 0x50
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_11; // 0x58
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_10; // 0x60
	::MoleMole::Config::DynamicInt* Field_3_4; // 0x68
	::System::Collections::Generic::List_1<::System::String*>* Field_3_8; // 0x70
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x78
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_9; // 0x80
	::System::Boolean Field_3_0; // 0x88
	::MoleMole::Config::AbilityTargetting Field_3_2; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B26BEB40BF099BA2(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_B26BEB40BF099BA2_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_E41C1EFCBD73D3C9_15* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_15*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_E41C1EFCBD73D3C9_15* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_E41C1EFCBD73D3C9_15*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_2210CC3E4BA6580C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_E41C1EFCBD73D3C9_15_METHOD_3_2210CC3E4BA6580C_OFFSET))(this, a1, a2);
	}
};
