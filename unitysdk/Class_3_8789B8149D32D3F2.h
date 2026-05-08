#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8789B8149D32D3F2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFE80170)
#define CLASS_3_8789B8149D32D3F2_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFE80AE0)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xFE80B60)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xFE81DD0)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0xFE80160)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_622F9323D55114B2_OFFSET UNITYSDK_OFFSET(0xFE801D0)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0xFE808B0)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xFE81BD0)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0xFE80970)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0xFE800C0)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xFE80A70)
#define CLASS_3_8789B8149D32D3F2_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0xFE81D30)
#define CLASS_3_8789B8149D32D3F2__CTOR_OFFSET UNITYSDK_OFFSET(0xFE81BC0)

inline static constexpr unsigned int Class_3_8789B8149D32D3F2_TypeDefinitionIndex = 38217;

class Class_3_8789B8149D32D3F2 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::ConfigPosRot* Field_3_0; // 0x20
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x28
	::MoleMole::Config::DynamicString* Field_3_3; // 0x30
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_6; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_5; // 0x48
	::MoleMole::Config::HitForwardType Field_3_7; // 0x50
	::System::Boolean Field_3_8; // 0x54
	::System::Boolean Field_3_2; // 0x55

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_8789B8149D32D3F2* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_8789B8149D32D3F2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_8789B8149D32D3F2* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_8789B8149D32D3F2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_622F9323D55114B2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_622F9323D55114B2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_8789B8149D32D3F2_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
