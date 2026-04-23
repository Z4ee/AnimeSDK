#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FF30E92A7B583BDE;
namespace InControl { class PlayerAction; }
namespace RPG::Client::ActivityHipplen { class HipplenPickingGoodsMiniGame; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8C3A50A74F898E9A_GET_AUTOINPUTWATINGTIME_OFFSET UNITYSDK_OFFSET(0x12341320)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_0E5012DEE8909536_OFFSET UNITYSDK_OFFSET(0x123411E0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x12340B10)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_1EC253B9815DA521_OFFSET UNITYSDK_OFFSET(0x12340270)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x12341280)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_473C7C3D0724BABC_OFFSET UNITYSDK_OFFSET(0x123403C0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_5C549BF7442375BC_OFFSET UNITYSDK_OFFSET(0x12341150)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_5EAB2C5E0D76A6B7_OFFSET UNITYSDK_OFFSET(0x12340A60)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x123401E0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_BEFC8CCB5341091A_OFFSET UNITYSDK_OFFSET(0x123400A0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_1_OFFSET UNITYSDK_OFFSET(0x12340E60)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_OFFSET UNITYSDK_OFFSET(0x12340B70)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x123412E0)
#define CLASS_1_8C3A50A74F898E9A_METHOD_1_D7924FE52B50B418_OFFSET UNITYSDK_OFFSET(0x12340450)
#define CLASS_1_8C3A50A74F898E9A_SET_AUTOINPUTWATINGTIME_OFFSET UNITYSDK_OFFSET(0x12341330)
#define CLASS_1_8C3A50A74F898E9A__CTOR_OFFSET UNITYSDK_OFFSET(0x12341340)

inline static constexpr unsigned int Class_1_8C3A50A74F898E9A_TypeDefinitionIndex = 69652;

class Class_1_8C3A50A74F898E9A : public ::System::Object
{
public:
	// static const ::System::Single Field_1_10; // 0x0
	::System::Action_1<::Class_1_FF30E92A7B583BDE*>* Field_1_5; // 0x10
	::InControl::PlayerAction* Field_1_14; // 0x18
	::InControl::PlayerAction* Field_1_13; // 0x20
	::InControl::PlayerAction* Field_1_12; // 0x28
	::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame* Field_1_4; // 0x30
	::System::Collections::Generic::List_1<::Class_1_FF30E92A7B583BDE*>* Field_1_3; // 0x38
	::Class_1_FF30E92A7B583BDE* Field_1_2; // 0x40
	::System::Single Field_1_9; // 0x48
	::System::Boolean Field_1_11; // 0x4C
	::System::Boolean Field_1_1; // 0x4D
	::System::Single Field_1_8; // 0x50
	::System::Single _AutoInputWatingTime_k__BackingField; // 0x54
	::System::Single Field_1_7; // 0x58
	::System::Single Field_1_6; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BEFC8CCB5341091A(::System::Collections::Generic::List_1<::Class_1_FF30E92A7B583BDE*>* a1, ::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_FF30E92A7B583BDE*>*, ::RPG::Client::ActivityHipplen::HipplenPickingGoodsMiniGame*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_BEFC8CCB5341091A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_1EC253B9815DA521()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_1EC253B9815DA521_OFFSET))(this);
	}

	::System::Void Method_1_D7924FE52B50B418(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_D7924FE52B50B418_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E5012DEE8909536(::System::Action_1<::Class_1_FF30E92A7B583BDE*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_FF30E92A7B583BDE*>*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_0E5012DEE8909536_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_473C7C3D0724BABC(::Class_1_FF30E92A7B583BDE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FF30E92A7B583BDE*))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_473C7C3D0724BABC_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EAB2C5E0D76A6B7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_5EAB2C5E0D76A6B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C549BF7442375BC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_5C549BF7442375BC_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean Method_1_C6F374D947193BA2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C6F374D947193BA2_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_METHOD_1_C6F374D947193BA2_1_OFFSET))(this, a1);
	}

	::System::Single get_AutoInputWatingTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_GET_AUTOINPUTWATINGTIME_OFFSET))(this);
	}

	::System::Void set_AutoInputWatingTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8C3A50A74F898E9A_SET_AUTOINPUTWATINGTIME_OFFSET))(this, value);
	}
};
