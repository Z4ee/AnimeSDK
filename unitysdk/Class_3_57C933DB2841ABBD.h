#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_57C933DB2841ABBD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11C68CF0)
#define CLASS_3_57C933DB2841ABBD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11C69340)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x11C69D80)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_8741A88D50268453_OFFSET UNITYSDK_OFFSET(0x11C693C0)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x11C69C20)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x11C691D0)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x11C68C50)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_C3645C5F0624187C_OFFSET UNITYSDK_OFFSET(0x11C68D50)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x11C692D0)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x11C69150)
#define CLASS_3_57C933DB2841ABBD_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x11C69B80)
#define CLASS_3_57C933DB2841ABBD__CTOR_OFFSET UNITYSDK_OFFSET(0x11C69B70)

inline static constexpr unsigned int Class_3_57C933DB2841ABBD_TypeDefinitionIndex = 47453;

class Class_3_57C933DB2841ABBD : public ::Class_2_0F138252A5783001
{
public:
	::System::String* Field_3_3; // 0x20
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_1; // 0x28
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x30
	::MoleMole::Config::ValueCompareType Field_3_4; // 0x38
	::System::Boolean Field_3_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_8741A88D50268453(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_8741A88D50268453_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_57C933DB2841ABBD* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_57C933DB2841ABBD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	static ::Class_3_57C933DB2841ABBD* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_57C933DB2841ABBD*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_C3645C5F0624187C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_57C933DB2841ABBD_METHOD_3_C3645C5F0624187C_OFFSET))(this, a1, a2);
	}
};
