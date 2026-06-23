#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/Class_2_0F138252A5783001_Enum_3_FD724454F35FC126.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_1A8D728C1758D3AF;
class Class_1_236FD73ABC492E3F;
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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_2939A9182115D3D5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13063E30)
#define CLASS_3_2939A9182115D3D5_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13064990)
#define CLASS_3_2939A9182115D3D5_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x130663E0)
#define CLASS_3_2939A9182115D3D5_METHOD_3_40C5968D970A15A2_OFFSET UNITYSDK_OFFSET(0x13063E20)
#define CLASS_3_2939A9182115D3D5_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x13064A10)
#define CLASS_3_2939A9182115D3D5_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x13066590)
#define CLASS_3_2939A9182115D3D5_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x13064820)
#define CLASS_3_2939A9182115D3D5_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x13063D80)
#define CLASS_3_2939A9182115D3D5_METHOD_3_C3645C5F0624187C_OFFSET UNITYSDK_OFFSET(0x13063E90)
#define CLASS_3_2939A9182115D3D5_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13064920)
#define CLASS_3_2939A9182115D3D5_METHOD_3_D21D9CE417C9EF18_OFFSET UNITYSDK_OFFSET(0x13064700)
#define CLASS_3_2939A9182115D3D5_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x13066340)
#define CLASS_3_2939A9182115D3D5__CTOR_OFFSET UNITYSDK_OFFSET(0x13066320)

inline static constexpr unsigned int Class_3_2939A9182115D3D5_TypeDefinitionIndex = 49274;

class Class_3_2939A9182115D3D5 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_1_1A8D728C1758D3AF*>* Field_3_12; // 0x20
	::System::String* Field_3_5; // 0x28
	::System::String* Field_3_0; // 0x30
	::System::String* Field_3_6; // 0x38
	::MoleMole::Config::DynamicInt* Field_3_11; // 0x40
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_8; // 0x48
	::MoleMole::Config::ConfigPosRot* Field_3_1; // 0x50
	::System::String* Field_3_9; // 0x58
	::System::Collections::Generic::List_1<::Class_2_828B2711AF58BA0B*>* Field_3_7; // 0x60
	::MoleMole::Config::ConfigPosRot* Field_3_2; // 0x68
	::MoleMole::Config::DynamicFloat* Field_3_10; // 0x70
	::System::Single Field_3_3; // 0x78
	::System::Boolean Field_3_13; // 0x7C
	::System::UInt32 Field_3_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126 Method_3_40C5968D970A15A2()
	{
		return ((::Class_2_0F138252A5783001_Enum_3_FD724454F35FC126(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_40C5968D970A15A2_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D21D9CE417C9EF18(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_D21D9CE417C9EF18_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_FROMFLX_OFFSET))(this, a1);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_2939A9182115D3D5* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_2939A9182115D3D5*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	static ::Class_3_2939A9182115D3D5* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_2939A9182115D3D5*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_C3645C5F0624187C(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_C3645C5F0624187C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_2939A9182115D3D5_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}
};
