#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_30C7E5C640F89710;
class Class_1_D3359DF62696519E_2_Class_1_6A88701C35CFFDD0_4;
class Class_1_F4C0A89701E5181C;

#define CLASS_1_D3359DF62696519E_2_CLASS_1_6A88701C35CFFDD0_4___C__DISPLAYCLASS3_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xB88D540)
#define CLASS_1_D3359DF62696519E_2_CLASS_1_6A88701C35CFFDD0_4___C__DISPLAYCLASS3_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0xB88D710)
#define CLASS_1_D3359DF62696519E_2_CLASS_1_6A88701C35CFFDD0_4___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB88D530)

inline static constexpr unsigned int Class_1_D3359DF62696519E_2_Class_1_6A88701C35CFFDD0_4___c__DisplayClass3_0_TypeDefinitionIndex = 79581;

class Class_1_D3359DF62696519E_2_Class_1_6A88701C35CFFDD0_4___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_1_30C7E5C640F89710* model; // 0x10
	::Class_1_D3359DF62696519E_2_Class_1_6A88701C35CFFDD0_4* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_CLASS_1_6A88701C35CFFDD0_4___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::Class_1_F4C0A89701E5181C* _Create_b__0(::RPG::Client::MechCraft::MechCraftChipTraitType a1)
	{
		return ((::Class_1_F4C0A89701E5181C*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftChipTraitType))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_CLASS_1_6A88701C35CFFDD0_4___C__DISPLAYCLASS3_0__CREATE_B__0_OFFSET))(this, a1);
	}

	::System::Int32 _Create_b__1(::Class_1_F4C0A89701E5181C* a1, ::Class_1_F4C0A89701E5181C* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_F4C0A89701E5181C*, ::Class_1_F4C0A89701E5181C*))((::PBYTE)hIl2Cpp + CLASS_1_D3359DF62696519E_2_CLASS_1_6A88701C35CFFDD0_4___C__DISPLAYCLASS3_0__CREATE_B__1_OFFSET))(this, a1, a2);
	}
};
