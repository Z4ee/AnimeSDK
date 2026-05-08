#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_C836D00248E6EFFE;
class Class_1_EF896E1D0FDF202A;
class Class_2_167BB37617B940E3;
class Class_2_7C9A70DC3FC57CDC;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1C06B8DE4BA51B67_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x117AB900)
#define CLASS_3_1C06B8DE4BA51B67_FROMFLX_OFFSET UNITYSDK_OFFSET(0x117AC170)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x117AC1F0)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x117ACF60)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_38B782D577BF317C_OFFSET UNITYSDK_OFFSET(0x117ABF20)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x117AD1B0)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x117AC000)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_BB2B154A9AA5F82B_OFFSET UNITYSDK_OFFSET(0x117AB860)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x117AC100)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_E07D6AAA98B227A2_OFFSET UNITYSDK_OFFSET(0x117AB960)
#define CLASS_3_1C06B8DE4BA51B67_METHOD_3_F15E7F69F5BAD374_OFFSET UNITYSDK_OFFSET(0x117AD110)
#define CLASS_3_1C06B8DE4BA51B67__CTOR_OFFSET UNITYSDK_OFFSET(0x117ACF50)

inline static constexpr unsigned int Class_3_1C06B8DE4BA51B67_TypeDefinitionIndex = 47280;

class Class_3_1C06B8DE4BA51B67 : public ::Class_2_0F138252A5783001
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_5; // 0x20
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_6; // 0x28
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_3_7; // 0x30
	::MoleMole::Config::DynamicFloat* Field_3_2; // 0x38
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_3_4; // 0x40
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x48
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x50
	::MoleMole::Config::DynamicFloat* Field_3_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67__CTOR_OFFSET))(this);
	}

	::Class_1_C836D00248E6EFFE* Method_3_BB2B154A9AA5F82B(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_BB2B154A9AA5F82B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_38B782D577BF317C(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_38B782D577BF317C_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_1C06B8DE4BA51B67* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_1C06B8DE4BA51B67*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_E07D6AAA98B227A2(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_E07D6AAA98B227A2_OFFSET))(this, a1, a2);
	}

	::Class_1_C836D00248E6EFFE* Method_3_F15E7F69F5BAD374(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3)
	{
		return ((::Class_1_C836D00248E6EFFE*(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_F15E7F69F5BAD374_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_3_1C06B8DE4BA51B67* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_1C06B8DE4BA51B67*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_1C06B8DE4BA51B67_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
