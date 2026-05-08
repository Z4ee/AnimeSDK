#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Enum_3_7653C66A7B202E07.h"
#include "unitysdk/Enum_3_B3E208AA3A944E42.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/CampType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C57AA739E197755D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x156D8B40)
#define CLASS_3_C57AA739E197755D_FROMFLX_OFFSET UNITYSDK_OFFSET(0x156D94A0)
#define CLASS_3_C57AA739E197755D_METHOD_3_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x156D9520)
#define CLASS_3_C57AA739E197755D_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x156DAA90)
#define CLASS_3_C57AA739E197755D_METHOD_3_2ACD4DAA4E212876_OFFSET UNITYSDK_OFFSET(0x156D8BA0)
#define CLASS_3_C57AA739E197755D_METHOD_3_66A56A98FBC17877_OFFSET UNITYSDK_OFFSET(0x156D9270)
#define CLASS_3_C57AA739E197755D_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x156DA890)
#define CLASS_3_C57AA739E197755D_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x156D9330)
#define CLASS_3_C57AA739E197755D_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x156D8AA0)
#define CLASS_3_C57AA739E197755D_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x156D9430)
#define CLASS_3_C57AA739E197755D_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x156DA9F0)
#define CLASS_3_C57AA739E197755D__CTOR_OFFSET UNITYSDK_OFFSET(0x156DA810)

inline static constexpr unsigned int Class_3_C57AA739E197755D_TypeDefinitionIndex = 38526;

class Class_3_C57AA739E197755D : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_5; // 0x20
	::MoleMole::Config::DynamicFloat* Field_3_6; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_10; // 0x30
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_12; // 0x38
	::MoleMole::Config::DynamicString* Field_3_1; // 0x40
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_11; // 0x48
	::MoleMole::Config::CampType Field_3_4; // 0x50
	::Enum_3_7653C66A7B202E07 Field_3_0; // 0x54
	::System::Boolean Field_3_8; // 0x58
	::System::Boolean Field_3_7; // 0x59
	::System::Boolean Field_3_2; // 0x5A
	::System::Boolean Field_3_3; // 0x5B
	::Enum_3_B3E208AA3A944E42 Field_3_9; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_66A56A98FBC17877(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_66A56A98FBC17877_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_C57AA739E197755D* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_C57AA739E197755D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_2ACD4DAA4E212876(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_2ACD4DAA4E212876_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_C57AA739E197755D* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_C57AA739E197755D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_C57AA739E197755D_METHOD_3_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
