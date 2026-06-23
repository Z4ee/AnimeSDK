#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/Enum_3_0CBE728C82DBAA16.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"

class Class_1_236FD73ABC492E3F;
class Class_1_426492CCD31C6AF7;
class Class_1_C836D00248E6EFFE;
class Class_2_167BB37617B940E3;
class Class_2_828B2711AF58BA0B;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B784205B00804B24_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15D2A8A0)
#define CLASS_3_B784205B00804B24_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15D2BD10)
#define CLASS_3_B784205B00804B24_1_METHOD_3_01918D90D7381D5B_OFFSET UNITYSDK_OFFSET(0x15D2A7E0)
#define CLASS_3_B784205B00804B24_1_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x15D2F320)
#define CLASS_3_B784205B00804B24_1_METHOD_3_1FECEDA91A546240_OFFSET UNITYSDK_OFFSET(0x15D2BD90)
#define CLASS_3_B784205B00804B24_1_METHOD_3_2A6F036DDCA43A2B_OFFSET UNITYSDK_OFFSET(0x15D2F6D0)
#define CLASS_3_B784205B00804B24_1_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x15D2A890)
#define CLASS_3_B784205B00804B24_1_METHOD_3_95858E2F19023021_OFFSET UNITYSDK_OFFSET(0x15D2B9D0)
#define CLASS_3_B784205B00804B24_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x15D2F570)
#define CLASS_3_B784205B00804B24_1_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x15D2BBA0)
#define CLASS_3_B784205B00804B24_1_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x15D2A740)
#define CLASS_3_B784205B00804B24_1_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x15D2BCA0)
#define CLASS_3_B784205B00804B24_1_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x15D2F4D0)
#define CLASS_3_B784205B00804B24_1_METHOD_3_F9C3B6AD93C64107_OFFSET UNITYSDK_OFFSET(0x15D2A900)
#define CLASS_3_B784205B00804B24_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15D2F280)

inline static constexpr unsigned int Class_3_B784205B00804B24_1_TypeDefinitionIndex = 51764;

class Class_3_B784205B00804B24_1 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_18; // 0x20
	::MoleMole::Config::ConfigPosRot* Field_3_5; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_3_13; // 0x30
	::System::String* Field_3_12; // 0x38
	::MoleMole::Config::DynamicFloat* Field_3_17; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_3_16; // 0x48
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_26; // 0x50
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_28; // 0x58
	::MoleMole::Config::DynamicFloat* Field_3_4; // 0x60
	::System::Collections::Generic::List_1<::System::String*>* Field_3_14; // 0x68
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_23; // 0x70
	::MoleMole::Config::DynamicInt* Field_3_0; // 0x78
	::System::String* Field_3_15; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_426492CCD31C6AF7*>* Field_3_21; // 0x88
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_22; // 0x90
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_25; // 0x98
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_24; // 0xA0
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_27; // 0xA8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_36; // 0xB0
	::MoleMole::Config::AbilityTargetting Field_3_1; // 0xB8
	::System::Boolean Field_3_10; // 0xBC
	::System::Boolean Field_3_31; // 0xBD
	::System::Boolean Field_3_34; // 0xBE
	::System::Single Field_3_30; // 0xC0
	::System::Boolean Field_3_20; // 0xC4
	::System::Boolean Field_3_35; // 0xC5
	::System::Boolean Field_3_7; // 0xC6
	::System::Boolean Field_3_6; // 0xC7
	::System::Int32 Field_3_32; // 0xC8
	::MoleMole::Config::EntityType Field_3_2; // 0xCC
	::System::Boolean Field_3_9; // 0xD0
	::System::Boolean Field_3_19; // 0xD1
	::System::Boolean Field_3_8; // 0xD2
	::System::Boolean Field_3_29; // 0xD3
	::MoleMole::Config::CampType Field_3_3; // 0xD4
	::Enum_3_0CBE728C82DBAA16 Field_3_33; // 0xD8
	::MoleMole::Config::AbilityTargetting Field_3_11; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_C836D00248E6EFFE* Method_3_01918D90D7381D5B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_01918D90D7381D5B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_95858E2F19023021(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_95858E2F19023021_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_B784205B00804B24_1* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_B784205B00804B24_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_B784205B00804B24_1* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_B784205B00804B24_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_F9C3B6AD93C64107(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_F9C3B6AD93C64107_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_2A6F036DDCA43A2B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_2A6F036DDCA43A2B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_1FECEDA91A546240(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_B784205B00804B24_1_METHOD_3_1FECEDA91A546240_OFFSET))(this, a1);
	}
};
