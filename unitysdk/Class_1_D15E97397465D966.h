#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D15E97397465D966_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_425;
class Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D15E97397465D966_METHOD_1_03C9037944B8389F_OFFSET UNITYSDK_OFFSET(0x1161B8C0)
#define CLASS_1_D15E97397465D966_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0x1161D860)
#define CLASS_1_D15E97397465D966_METHOD_1_1F2D766A8C220114_1_OFFSET UNITYSDK_OFFSET(0x116234C0)
#define CLASS_1_D15E97397465D966_METHOD_1_1F2D766A8C220114_OFFSET UNITYSDK_OFFSET(0x1161EC00)
#define CLASS_1_D15E97397465D966_METHOD_1_27251A3945436E8E_1_OFFSET UNITYSDK_OFFSET(0x11621890)
#define CLASS_1_D15E97397465D966_METHOD_1_27251A3945436E8E_OFFSET UNITYSDK_OFFSET(0x11620CE0)
#define CLASS_1_D15E97397465D966_METHOD_1_3FB378AD48E4B10B_OFFSET UNITYSDK_OFFSET(0x11622F50)
#define CLASS_1_D15E97397465D966_METHOD_1_51DC8A62C38BEF23_OFFSET UNITYSDK_OFFSET(0x1161D8A0)
#define CLASS_1_D15E97397465D966_METHOD_1_56FD732C92374785_OFFSET UNITYSDK_OFFSET(0x1161BC00)
#define CLASS_1_D15E97397465D966_METHOD_1_59697C655231D4B1_1_OFFSET UNITYSDK_OFFSET(0x11622690)
#define CLASS_1_D15E97397465D966_METHOD_1_59697C655231D4B1_OFFSET UNITYSDK_OFFSET(0x1161DE90)
#define CLASS_1_D15E97397465D966_METHOD_1_5B0531D5B96D6B96_1_OFFSET UNITYSDK_OFFSET(0x116212D0)
#define CLASS_1_D15E97397465D966_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x116210B0)
#define CLASS_1_D15E97397465D966_METHOD_1_5E9E9972123BF939_1_OFFSET UNITYSDK_OFFSET(0x116224D0)
#define CLASS_1_D15E97397465D966_METHOD_1_5E9E9972123BF939_OFFSET UNITYSDK_OFFSET(0x11621CB0)
#define CLASS_1_D15E97397465D966_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x1161AE60)
#define CLASS_1_D15E97397465D966_METHOD_1_664C062015F0C2D3_1_OFFSET UNITYSDK_OFFSET(0x11624960)
#define CLASS_1_D15E97397465D966_METHOD_1_664C062015F0C2D3_OFFSET UNITYSDK_OFFSET(0x11624830)
#define CLASS_1_D15E97397465D966_METHOD_1_7DD66AD8261C01D5_OFFSET UNITYSDK_OFFSET(0x1161E570)
#define CLASS_1_D15E97397465D966_METHOD_1_7FA622F8238A92B7_1_OFFSET UNITYSDK_OFFSET(0x11621630)
#define CLASS_1_D15E97397465D966_METHOD_1_7FA622F8238A92B7_2_OFFSET UNITYSDK_OFFSET(0x116222C0)
#define CLASS_1_D15E97397465D966_METHOD_1_7FA622F8238A92B7_OFFSET UNITYSDK_OFFSET(0x1161EA20)
#define CLASS_1_D15E97397465D966_METHOD_1_82125FD1B8FE1611_OFFSET UNITYSDK_OFFSET(0x11621E80)
#define CLASS_1_D15E97397465D966_METHOD_1_84A9358A026DA23C_OFFSET UNITYSDK_OFFSET(0x11622C90)
#define CLASS_1_D15E97397465D966_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1161AD90)
#define CLASS_1_D15E97397465D966_METHOD_1_8F74C4A88302B13A_1_OFFSET UNITYSDK_OFFSET(0x1161DB50)
#define CLASS_1_D15E97397465D966_METHOD_1_8F74C4A88302B13A_OFFSET UNITYSDK_OFFSET(0x1161DCF0)
#define CLASS_1_D15E97397465D966_METHOD_1_A36DD6986EFA06F9_OFFSET UNITYSDK_OFFSET(0x116231A0)
#define CLASS_1_D15E97397465D966_METHOD_1_AA250C88CBAD6806_OFFSET UNITYSDK_OFFSET(0x1161DAE0)
#define CLASS_1_D15E97397465D966_METHOD_1_AEEF66F4561AE478_OFFSET UNITYSDK_OFFSET(0x11621360)
#define CLASS_1_D15E97397465D966_METHOD_1_C33F2C60A2B4E64A_OFFSET UNITYSDK_OFFSET(0x1161F2D0)
#define CLASS_1_D15E97397465D966_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x1161F280)
#define CLASS_1_D15E97397465D966_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x116248F0)
#define CLASS_1_D15E97397465D966_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x116247C0)
#define CLASS_1_D15E97397465D966_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1161B740)
#define CLASS_1_D15E97397465D966_METHOD_1_E20865B68A0DABD7_OFFSET UNITYSDK_OFFSET(0x1161F530)
#define CLASS_1_D15E97397465D966_METHOD_1_E52817D5DECB3A42_OFFSET UNITYSDK_OFFSET(0x116229A0)
#define CLASS_1_D15E97397465D966_METHOD_1_E964727B9AE34556_OFFSET UNITYSDK_OFFSET(0x1161BF30)
#define CLASS_1_D15E97397465D966_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x1161B780)
#define CLASS_1_D15E97397465D966_METHOD_1_F737863C2C676D53_OFFSET UNITYSDK_OFFSET(0x1161A270)
#define CLASS_1_D15E97397465D966_METHOD_1_F8B33E9F274A9509_OFFSET UNITYSDK_OFFSET(0x11620950)
#define CLASS_1_D15E97397465D966_METHOD_1_F99B4893D2D37DA4_OFFSET UNITYSDK_OFFSET(0x1161EE10)
#define CLASS_1_D15E97397465D966_METHOD_1_FBC3D7D544C66CDA_OFFSET UNITYSDK_OFFSET(0x11621140)
#define CLASS_1_D15E97397465D966__CCTOR_OFFSET UNITYSDK_OFFSET(0x116236A0)
#define CLASS_1_D15E97397465D966__CTOR_OFFSET UNITYSDK_OFFSET(0x11624A20)
#define CLASS_1_D15E97397465D966___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET UNITYSDK_OFFSET(0x11620930)

inline static constexpr unsigned int Class_1_D15E97397465D966_TypeDefinitionIndex = 53675;

class Class_1_D15E97397465D966 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42710);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42718);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42720);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42728);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42730);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42738);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42740);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_7()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D15E97397465D966_TypeDefinitionIndex)->GetStaticField(0x42748);
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
	::System::Collections::Generic::List_1<::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*>* Field_1_58; // 0x10
	::System::String* Field_1_59; // 0x18
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* Field_1_60; // 0x20
	::RPG::GameCore::BattleInstance* Field_1_61; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F737863C2C676D53(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_F737863C2C676D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_ED60CE426DBC8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_56FD732C92374785(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_56FD732C92374785_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03C9037944B8389F(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_03C9037944B8389F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::String* Method_1_51DC8A62C38BEF23(::Class_1_D15E97397465D966_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_D15E97397465D966_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_51DC8A62C38BEF23_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E964727B9AE34556(::RPG::GameCore::CSVRow* a1, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_E964727B9AE34556_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_AA250C88CBAD6806(::RPG::GameCore::CSVRow* a1, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_AA250C88CBAD6806_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F74C4A88302B13A(::RPG::GameCore::CSVRow* a1, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_8F74C4A88302B13A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8F74C4A88302B13A_1(::RPG::GameCore::CSVRow* a1, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_D15E97397465D966_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_8F74C4A88302B13A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_59697C655231D4B1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_59697C655231D4B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD66AD8261C01D5(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_7DD66AD8261C01D5_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_7FA622F8238A92B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_1F2D766A8C220114_OFFSET))(this, a1);
	}

	::System::Void Method_1_F99B4893D2D37DA4(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_F99B4893D2D37DA4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_C33F2C60A2B4E64A(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_C33F2C60A2B4E64A_OFFSET))(this, a1);
	}

	::System::Void Method_1_E20865B68A0DABD7(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_E20865B68A0DABD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8B33E9F274A9509(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_F8B33E9F274A9509_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_27251A3945436E8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B0531D5B96D6B96_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_5B0531D5B96D6B96_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FBC3D7D544C66CDA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_FBC3D7D544C66CDA_OFFSET))(this, a1);
	}

	::System::Void Method_1_AEEF66F4561AE478(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_AEEF66F4561AE478_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_7FA622F8238A92B7_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_27251A3945436E8E_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_27251A3945436E8E_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_5E9E9972123BF939_OFFSET))(this, a1);
	}

	::System::Void Method_1_82125FD1B8FE1611(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_82125FD1B8FE1611_OFFSET))(this, a1);
	}

	::System::Void Method_1_7FA622F8238A92B7_2(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_7FA622F8238A92B7_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_5E9E9972123BF939_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_5E9E9972123BF939_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_59697C655231D4B1_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_59697C655231D4B1_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E52817D5DECB3A42(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_E52817D5DECB3A42_OFFSET))(this, a1);
	}

	::System::Void Method_1_84A9358A026DA23C(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_84A9358A026DA23C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3FB378AD48E4B10B(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_3FB378AD48E4B10B_OFFSET))(this, a1);
	}

	::System::Void Method_1_A36DD6986EFA06F9(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_A36DD6986EFA06F9_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F2D766A8C220114_1(::Class_0_16E4307DCC419505_425* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_425*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_1F2D766A8C220114_1_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_664C062015F0C2D3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_664C062015F0C2D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_664C062015F0C2D3_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966_METHOD_1_664C062015F0C2D3_1_OFFSET))(a1);
	}

	static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_24_0(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D15E97397465D966___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET))(a1);
	}
};
