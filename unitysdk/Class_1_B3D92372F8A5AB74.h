#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B3D92372F8A5AB74_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_401;
class Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B3D92372F8A5AB74_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0x145BA380)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_0C2BDCAFB016DA4E_1_OFFSET UNITYSDK_OFFSET(0x145BA5D0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_0C2BDCAFB016DA4E_OFFSET UNITYSDK_OFFSET(0x145BA830)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_1249182824CCA5B5_OFFSET UNITYSDK_OFFSET(0x145BA3C0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_158F4D2A41F6561F_OFFSET UNITYSDK_OFFSET(0x145BBA10)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x145C1140)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x145C1030)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_1F2D766A8C220114_1_OFFSET UNITYSDK_OFFSET(0x145BFCC0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_1F2D766A8C220114_OFFSET UNITYSDK_OFFSET(0x145BB800)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_27251A3945436E8E_OFFSET UNITYSDK_OFFSET(0x145BD5F0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_32FC7498ADE8479B_OFFSET UNITYSDK_OFFSET(0x145BA560)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0x145BF750)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_569C8A2D03C8AA85_OFFSET UNITYSDK_OFFSET(0x145BE740)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_59697C655231D4B1_OFFSET UNITYSDK_OFFSET(0x145BAA90)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_5A6E6A9E8375DF48_OFFSET UNITYSDK_OFFSET(0x145BF200)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x145BDC70)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x145BDA50)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_5E9E9972123BF939_1_OFFSET UNITYSDK_OFFSET(0x145BED20)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0x145BE580)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_5EB177BE34D3E24A_OFFSET UNITYSDK_OFFSET(0x145BE230)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x145B6160)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_7FA622F8238A92B7_1_OFFSET UNITYSDK_OFFSET(0x145BDFD0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_7FA622F8238A92B7_2_OFFSET UNITYSDK_OFFSET(0x145BEB10)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_7FA622F8238A92B7_OFFSET UNITYSDK_OFFSET(0x145BB620)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0x145BF490)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_850A1E8990DC3F3C_OFFSET UNITYSDK_OFFSET(0x145B7020)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_855845B970DFCAAA_OFFSET UNITYSDK_OFFSET(0x145B6BC0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x145B6090)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0x145BF9A0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_AEEF66F4561AE478_OFFSET UNITYSDK_OFFSET(0x145BDD00)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_B778C78B1C8F6892_OFFSET UNITYSDK_OFFSET(0x145B7410)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_C33F2C60A2B4E64A_OFFSET UNITYSDK_OFFSET(0x145BBE60)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x145BBE10)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x145C10D0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x145C0FC0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x145B6A40)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_DA1F8C661E2D2953_OFFSET UNITYSDK_OFFSET(0x145BEEE0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_E20865B68A0DABD7_OFFSET UNITYSDK_OFFSET(0x145BC0C0)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_EA8587082301D8CE_OFFSET UNITYSDK_OFFSET(0x145BB170)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x145B6A80)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_F737863C2C676D53_OFFSET UNITYSDK_OFFSET(0x145B5570)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_F8B33E9F274A9509_OFFSET UNITYSDK_OFFSET(0x145BD260)
#define CLASS_1_B3D92372F8A5AB74_METHOD_1_FBC3D7D544C66CDA_OFFSET UNITYSDK_OFFSET(0x145BDAE0)
#define CLASS_1_B3D92372F8A5AB74__CCTOR_OFFSET UNITYSDK_OFFSET(0x145BFEA0)
#define CLASS_1_B3D92372F8A5AB74__CTOR_OFFSET UNITYSDK_OFFSET(0x145C11E0)
#define CLASS_1_B3D92372F8A5AB74___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET UNITYSDK_OFFSET(0x145BD240)

inline static constexpr unsigned int Class_1_B3D92372F8A5AB74_TypeDefinitionIndex = 52471;

class Class_1_B3D92372F8A5AB74 : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x518D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x518D8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x518E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x518E8);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x518F0);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x518F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x51900);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B3D92372F8A5AB74_TypeDefinitionIndex)->GetStaticField(0x51908);
	}
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	// static const ::System::String* Field_1_10; // 0x0
	// static const ::System::String* Field_1_11; // 0x0
	// static const ::System::String* Field_1_12; // 0x0
	// static const ::System::String* Field_1_13; // 0x0
	// static const ::System::String* Field_1_14; // 0x0
	// static const ::System::String* Field_1_15; // 0x0
	// static const ::System::String* Field_1_16; // 0x0
	// static const ::System::String* Field_1_17; // 0x0
	// static const ::System::String* Field_1_18; // 0x0
	// static const ::System::String* Field_1_19; // 0x0
	// static const ::System::String* Field_1_20; // 0x0
	// static const ::System::String* Field_1_21; // 0x0
	// static const ::System::String* Field_1_22; // 0x0
	// static const ::System::String* Field_1_23; // 0x0
	// static const ::System::String* Field_1_24; // 0x0
	// static const ::System::String* Field_1_25; // 0x0
	// static const ::System::String* Field_1_26; // 0x0
	// static const ::System::String* Field_1_27; // 0x0
	// static const ::System::String* Field_1_28; // 0x0
	// static const ::System::String* Field_1_29; // 0x0
	// static const ::System::String* Field_1_30; // 0x0
	// static const ::System::String* Field_1_31; // 0x0
	// static const ::System::String* Field_1_32; // 0x0
	// static const ::System::String* Field_1_33; // 0x0
	// static const ::System::String* Field_1_34; // 0x0
	// static const ::System::String* Field_1_35; // 0x0
	// static const ::System::String* Field_1_36; // 0x0
	// static const ::System::String* Field_1_37; // 0x0
	// static const ::System::String* Field_1_38; // 0x0
	// static const ::System::String* Field_1_39; // 0x0
	// static const ::System::String* Field_1_40; // 0x0
	// static const ::System::String* Field_1_41; // 0x0
	// static const ::System::String* Field_1_42; // 0x0
	// static const ::System::String* Field_1_43; // 0x0
	// static const ::System::String* Field_1_44; // 0x0
	// static const ::System::String* Field_1_45; // 0x0
	// static const ::System::String* Field_1_46; // 0x0
	// static const ::System::String* Field_1_47; // 0x0
	// static const ::System::String* Field_1_48; // 0x0
	// static const ::System::String* Field_1_49; // 0x0
	// static const ::System::String* Field_1_50; // 0x0
	// static const ::System::String* Field_1_51; // 0x0
	// static const ::System::String* Field_1_52; // 0x0
	// static const ::System::String* Field_1_53; // 0x0
	// static const ::System::String* Field_1_54; // 0x0
	// static const ::System::String* Field_1_55; // 0x0
	// static const ::System::String* Field_1_56; // 0x0
	// static const ::System::String* Field_1_57; // 0x0
	::System::String* Field_1_58; // 0x10
	::RPG::GameCore::BattleInstance* Field_1_59; // 0x18
	::System::Collections::Generic::List_1<::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*>* Field_1_60; // 0x20
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* Field_1_61; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F737863C2C676D53(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_F737863C2C676D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_ED60CE426DBC8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_850A1E8990DC3F3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_850A1E8990DC3F3C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_855845B970DFCAAA(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_855845B970DFCAAA_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::String* Method_1_1249182824CCA5B5(::Class_1_B3D92372F8A5AB74_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_B3D92372F8A5AB74_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_1249182824CCA5B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B778C78B1C8F6892(::RPG::GameCore::CSVRow* a1, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_B778C78B1C8F6892_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_32FC7498ADE8479B(::RPG::GameCore::CSVRow* a1, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_32FC7498ADE8479B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C2BDCAFB016DA4E(::RPG::GameCore::CSVRow* a1, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_0C2BDCAFB016DA4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C2BDCAFB016DA4E_1(::RPG::GameCore::CSVRow* a1, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_B3D92372F8A5AB74_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_0C2BDCAFB016DA4E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_59697C655231D4B1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_59697C655231D4B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_EA8587082301D8CE(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_EA8587082301D8CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_7FA622F8238A92B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_1F2D766A8C220114_OFFSET))(this, a1);
	}

	::System::Void Method_1_158F4D2A41F6561F(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_158F4D2A41F6561F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C33F2C60A2B4E64A(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_C33F2C60A2B4E64A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E20865B68A0DABD7(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_E20865B68A0DABD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8B33E9F274A9509(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_F8B33E9F274A9509_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_27251A3945436E8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBC3D7D544C66CDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_FBC3D7D544C66CDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEEF66F4561AE478(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_AEEF66F4561AE478_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_7FA622F8238A92B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EB177BE34D3E24A(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_5EB177BE34D3E24A_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_1_569C8A2D03C8AA85(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_569C8A2D03C8AA85_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_2(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_7FA622F8238A92B7_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_5E9E9972123BF939_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA1F8C661E2D2953(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_DA1F8C661E2D2953_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A6E6A9E8375DF48(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_5A6E6A9E8375DF48_OFFSET))(this, a1);
	}

	::System::Void Method_1_84A9358A026DA23C(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_3FB378AD48E4B10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114_1(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_1F2D766A8C220114_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_1B9CC121BDC8766D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(a1);
	}

	static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_24_0(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B3D92372F8A5AB74___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET))(a1);
	}
};
