#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9CB24331611AE644_ColumeType.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_375;
class Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace RPG::GameCore { class CSVRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_1_OFFSET UNITYSDK_OFFSET(0x8A04A00)
#define CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_OFFSET UNITYSDK_OFFSET(0x8A017D0)
#define CLASS_1_9CB24331611AE644_METHOD_1_08DFFB522415A616_OFFSET UNITYSDK_OFFSET(0x8A00650)
#define CLASS_1_9CB24331611AE644_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x89FCBB0)
#define CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_1_OFFSET UNITYSDK_OFFSET(0x8A05E80)
#define CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x8A05D70)
#define CLASS_1_9CB24331611AE644_METHOD_1_4037F54396AA95EF_OFFSET UNITYSDK_OFFSET(0x8A00690)
#define CLASS_1_9CB24331611AE644_METHOD_1_4C2F83AB6E861A93_OFFSET UNITYSDK_OFFSET(0x8A05010)
#define CLASS_1_9CB24331611AE644_METHOD_1_50E27F082F4E6C7B_1_OFFSET UNITYSDK_OFFSET(0x8A00900)
#define CLASS_1_9CB24331611AE644_METHOD_1_50E27F082F4E6C7B_2_OFFSET UNITYSDK_OFFSET(0x8A00B20)
#define CLASS_1_9CB24331611AE644_METHOD_1_50E27F082F4E6C7B_OFFSET UNITYSDK_OFFSET(0x8A00890)
#define CLASS_1_9CB24331611AE644_METHOD_1_56FD732C92374785_OFFSET UNITYSDK_OFFSET(0x89FD860)
#define CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0x8A03BC0)
#define CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x8A03A00)
#define CLASS_1_9CB24331611AE644_METHOD_1_612F73C5F773C442_OFFSET UNITYSDK_OFFSET(0x89FDC00)
#define CLASS_1_9CB24331611AE644_METHOD_1_6B5C45B91CB8890A_OFFSET UNITYSDK_OFFSET(0x8A01F60)
#define CLASS_1_9CB24331611AE644_METHOD_1_6BD012F436E1844D_OFFSET UNITYSDK_OFFSET(0x8A03610)
#define CLASS_1_9CB24331611AE644_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x89FCAE0)
#define CLASS_1_9CB24331611AE644_METHOD_1_A25E227C56B537C3_OFFSET UNITYSDK_OFFSET(0x8A013B0)
#define CLASS_1_9CB24331611AE644_METHOD_1_A3A5363DC5B4E085_OFFSET UNITYSDK_OFFSET(0x8A01D60)
#define CLASS_1_9CB24331611AE644_METHOD_1_A4E70CB481BCC07A_OFFSET UNITYSDK_OFFSET(0x8A01980)
#define CLASS_1_9CB24331611AE644_METHOD_1_A7E04F0A3F9FE840_OFFSET UNITYSDK_OFFSET(0x8A00D50)
#define CLASS_1_9CB24331611AE644_METHOD_1_ABFEC0F797A597B3_OFFSET UNITYSDK_OFFSET(0x89FD480)
#define CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_1_OFFSET UNITYSDK_OFFSET(0x8A044F0)
#define CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_2_OFFSET UNITYSDK_OFFSET(0x8A047B0)
#define CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_3_OFFSET UNITYSDK_OFFSET(0x8A04BE0)
#define CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_OFFSET UNITYSDK_OFFSET(0x8A040A0)
#define CLASS_1_9CB24331611AE644_METHOD_1_BFAA377DD372FB76_OFFSET UNITYSDK_OFFSET(0x8A03A80)
#define CLASS_1_9CB24331611AE644_METHOD_1_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x8A01D10)
#define CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0x8A05E10)
#define CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x8A05D00)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_1_OFFSET UNITYSDK_OFFSET(0x8A032F0)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_2_OFFSET UNITYSDK_OFFSET(0x8A03C40)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_3_OFFSET UNITYSDK_OFFSET(0x8A03EA0)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_4_OFFSET UNITYSDK_OFFSET(0x8A04390)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_5_OFFSET UNITYSDK_OFFSET(0x8A04E30)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_6_OFFSET UNITYSDK_OFFSET(0x8A051B0)
#define CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_OFFSET UNITYSDK_OFFSET(0x8A01650)
#define CLASS_1_9CB24331611AE644_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x89FD300)
#define CLASS_1_9CB24331611AE644_METHOD_1_ED60CE426DBC8E38_OFFSET UNITYSDK_OFFSET(0x89FD340)
#define CLASS_1_9CB24331611AE644_METHOD_1_F737863C2C676D53_OFFSET UNITYSDK_OFFSET(0x89FC1B0)
#define CLASS_1_9CB24331611AE644__CCTOR_OFFSET UNITYSDK_OFFSET(0x8A05320)
#define CLASS_1_9CB24331611AE644__CTOR_OFFSET UNITYSDK_OFFSET(0x8A05F20)
#define CLASS_1_9CB24331611AE644___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET UNITYSDK_OFFSET(0x8A032D0)

inline static constexpr unsigned int Class_1_9CB24331611AE644_TypeDefinitionIndex = 45048;

class Class_1_9CB24331611AE644 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44EE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44EE8);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44EF0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_58()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44EF8);
	}
	static ::System::String** StaticGet_Field_1_7()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44F00);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44F08);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44F10);
	}
	static ::Il2CppArray<::RPG::GameCore::AbilityProperty>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::RPG::GameCore::AbilityProperty>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9CB24331611AE644_TypeDefinitionIndex)->GetStaticField(0x44F18);
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
	::System::String* Field_1_61; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*>* Field_1_60; // 0x18
	::System::Collections::Generic::SortedList_2<::System::Int32, ::System::String*>* Field_1_0; // 0x20
	::RPG::GameCore::BattleInstance* Field_1_59; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F737863C2C676D53(::RPG::GameCore::BattleInstance* a1, ::RPG::GameCore::BattleLineupData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_F737863C2C676D53_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_1AD3CAF2B0982C3F_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_ED60CE426DBC8E38(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_ED60CE426DBC8E38_OFFSET))(this, a1);
	}

	::System::Void Method_1_56FD732C92374785(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_56FD732C92374785_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ABFEC0F797A597B3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_ABFEC0F797A597B3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*>* Method_1_08DFFB522415A616()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_08DFFB522415A616_OFFSET))(this);
	}

	::System::String* Method_1_4037F54396AA95EF(::Class_1_9CB24331611AE644_ColumeType a1, ::RPG::GameCore::AbilityProperty a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_9CB24331611AE644_ColumeType, ::RPG::GameCore::AbilityProperty))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_4037F54396AA95EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_612F73C5F773C442(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_612F73C5F773C442_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_50E27F082F4E6C7B(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_50E27F082F4E6C7B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_50E27F082F4E6C7B_1(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_50E27F082F4E6C7B_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_50E27F082F4E6C7B_2(::RPG::GameCore::CSVRow* a1, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CSVRow*, ::Class_1_9CB24331611AE644_Class_1_A07D6A22A9F47824*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_50E27F082F4E6C7B_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7E04F0A3F9FE840(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_A7E04F0A3F9FE840_OFFSET))(this, a1);
	}

	::System::Void Method_1_A25E227C56B537C3(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_A25E227C56B537C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4E70CB481BCC07A(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_A4E70CB481BCC07A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C50B93169B85DAEA(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3A5363DC5B4E085(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_A3A5363DC5B4E085_OFFSET))(this, a1);
	}

	::System::Void Method_1_6B5C45B91CB8890A(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_6B5C45B91CB8890A_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_6BD012F436E1844D(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_6BD012F436E1844D_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFAA377DD372FB76(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_BFAA377DD372FB76_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5_2(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5_3(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA03FB322C6038D0(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5_4(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA03FB322C6038D0_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA03FB322C6038D0_2(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_02B490C9189918DC_1(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_02B490C9189918DC_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA03FB322C6038D0_3(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_BA03FB322C6038D0_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5_5(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4C2F83AB6E861A93(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_4C2F83AB6E861A93_OFFSET))(this, a1);
	}

	::System::Void Method_1_D49D4C04CB5F23A5_6(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_D49D4C04CB5F23A5_6_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Void Method_1_1B9CC121BDC8766D_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644_METHOD_1_1B9CC121BDC8766D_1_OFFSET))(a1);
	}

	static ::System::String* __OnLightCharacterCreate_g___ConcatBuildData_24_0(::Il2CppArray<::System::UInt32>* items)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_9CB24331611AE644___ONLIGHTCHARACTERCREATE_G___CONCATBUILDDATA_24_0_OFFSET))(items);
	}
};
