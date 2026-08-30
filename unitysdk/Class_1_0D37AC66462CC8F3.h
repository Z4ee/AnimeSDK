#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/RPG/GameCore/CakeRaceDirection.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_1_EA5A5E4D07C4CF2B_9;
class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0D37AC66462CC8F3_METHOD_1_0B72C46E4946247B_OFFSET UNITYSDK_OFFSET(0x1C09A370)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_0DD58AC96A016DF4_OFFSET UNITYSDK_OFFSET(0x1C0989A0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_0FF3891B4657C6EB_OFFSET UNITYSDK_OFFSET(0x1C09A0B0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_1419A2A72A244857_OFFSET UNITYSDK_OFFSET(0x1C09B700)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_1C690AE07C519565_OFFSET UNITYSDK_OFFSET(0x1C098CC0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_274FBBBAC4F57A7B_OFFSET UNITYSDK_OFFSET(0x1C0994C0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_28392D23B73C97F8_OFFSET UNITYSDK_OFFSET(0x1C09B220)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_2DD9914B47A0311E_OFFSET UNITYSDK_OFFSET(0x1C09B530)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_35C4A143193C04DA_OFFSET UNITYSDK_OFFSET(0x1C099100)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_36879C007330AF1F_OFFSET UNITYSDK_OFFSET(0x1C09B410)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_3876733A33983F37_OFFSET UNITYSDK_OFFSET(0x1C09A240)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_421AE60DCB968C30_OFFSET UNITYSDK_OFFSET(0x1C09A610)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_44A5C0326CBD48DA_1_OFFSET UNITYSDK_OFFSET(0x1C09B3B0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_44A5C0326CBD48DA_OFFSET UNITYSDK_OFFSET(0x1C09B1C0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_599076A0FC6E474F_OFFSET UNITYSDK_OFFSET(0x1C09B4A0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_5DBFE56837A0EC06_OFFSET UNITYSDK_OFFSET(0x1C09B2F0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_6A05692DBADDE074_OFFSET UNITYSDK_OFFSET(0x1C09A150)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_1_OFFSET UNITYSDK_OFFSET(0x1C0991A0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_2_OFFSET UNITYSDK_OFFSET(0x1C0991F0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_3_OFFSET UNITYSDK_OFFSET(0x1C09B0D0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_4_OFFSET UNITYSDK_OFFSET(0x1C09B120)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_5_OFFSET UNITYSDK_OFFSET(0x1C09B170)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_OFFSET UNITYSDK_OFFSET(0x1C099150)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_7C76674E1FADDAFC_OFFSET UNITYSDK_OFFSET(0x1C098DC0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_882BE6A823B9BC25_OFFSET UNITYSDK_OFFSET(0x1C09A990)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_889AA6475635DAEE_OFFSET UNITYSDK_OFFSET(0x1C09B880)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_8B0A151872D454E7_OFFSET UNITYSDK_OFFSET(0x1C09A1B0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_9824DDCE2F43D1E3_OFFSET UNITYSDK_OFFSET(0x1C098D70)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_A583E291A0EC1B6A_OFFSET UNITYSDK_OFFSET(0x1C09A8F0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_B09F0654041238F1_OFFSET UNITYSDK_OFFSET(0x1C09AFA0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_B350447248DADBD4_OFFSET UNITYSDK_OFFSET(0x1C099BB0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_BD19557260396D31_OFFSET UNITYSDK_OFFSET(0x1C09B8D0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_C5BD981CFA81FF21_OFFSET UNITYSDK_OFFSET(0x1C09ACF0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_DA617170501A4094_OFFSET UNITYSDK_OFFSET(0x1C09A5C0)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x1C09A560)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_DB980174E23FA279_OFFSET UNITYSDK_OFFSET(0x1C09AB20)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_E611A4174EFAAE2C_1_OFFSET UNITYSDK_OFFSET(0x1C099A20)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_E611A4174EFAAE2C_OFFSET UNITYSDK_OFFSET(0x1C099230)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_EA617CEE9C8AE012_OFFSET UNITYSDK_OFFSET(0x1C098B60)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_F94178486D3998ED_1_OFFSET UNITYSDK_OFFSET(0x1C09B640)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_F94178486D3998ED_2_OFFSET UNITYSDK_OFFSET(0x1C09B990)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_F94178486D3998ED_OFFSET UNITYSDK_OFFSET(0x1C09B580)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_FD027A51FA31C7FA_OFFSET UNITYSDK_OFFSET(0x1C09B820)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_FF0CD9D2BE2C0FFC_OFFSET UNITYSDK_OFFSET(0x1C09BA50)
#define CLASS_1_0D37AC66462CC8F3_METHOD_1_FF50C5752D2D1F74_OFFSET UNITYSDK_OFFSET(0x1C098C20)
#define CLASS_1_0D37AC66462CC8F3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C09BAF0)

inline static constexpr unsigned int Class_1_0D37AC66462CC8F3_TypeDefinitionIndex = 36537;

class Class_1_0D37AC66462CC8F3 : public ::System::Object
{
public:
	static ::RPG::MVector3* StaticGet_KNIDOMPLDKM()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D37AC66462CC8F3_TypeDefinitionIndex)->GetStaticField(0x1430);
	}
	static ::RPG::MVector3* StaticGet_DLPJFJDEGPE()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D37AC66462CC8F3_TypeDefinitionIndex)->GetStaticField(0x143C);
	}
	static ::RPG::MVector3* StaticGet_MJJFNKHFICE()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D37AC66462CC8F3_TypeDefinitionIndex)->GetStaticField(0x1448);
	}
	static ::RPG::MVector3* StaticGet_HFHMEHIPGOE()
	{
		return (::RPG::MVector3*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D37AC66462CC8F3_TypeDefinitionIndex)->GetStaticField(0x1454);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_0DD58AC96A016DF4(::Class_2_21AD365C113DC484* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_2_21AD365C113DC484*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_0DD58AC96A016DF4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_EA617CEE9C8AE012(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_EA617CEE9C8AE012_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FF50C5752D2D1F74(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::Boolean(*)(::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_FF50C5752D2D1F74_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_1C690AE07C519565(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_1C690AE07C519565_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9824DDCE2F43D1E3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_9824DDCE2F43D1E3_OFFSET))(a1);
	}

	static ::System::Void Method_1_7C76674E1FADDAFC(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Void(*)(::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_7C76674E1FADDAFC_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_77B879B6480F44AC(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77B879B6480F44AC_1(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77B879B6480F44AC_2(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_2_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_E611A4174EFAAE2C(::RPG::GameCore::CakeRaceDirection a1)
	{
		return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceDirection))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_E611A4174EFAAE2C_OFFSET))(a1);
	}

	static ::RPG::GameCore::CakeRaceDirection Method_1_274FBBBAC4F57A7B(::RPG::MVector3 a1)
	{
		return ((::RPG::GameCore::CakeRaceDirection(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_274FBBBAC4F57A7B_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_E611A4174EFAAE2C_1(::RPG::GameCore::CakeRaceDirection a1)
	{
		return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceDirection))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_E611A4174EFAAE2C_1_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_B350447248DADBD4(::RPG::MVector3 a1)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_B350447248DADBD4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_0FF3891B4657C6EB(::RPG::MVector3 a1)
	{
		return ((::System::Boolean(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_0FF3891B4657C6EB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6A05692DBADDE074(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_6A05692DBADDE074_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8B0A151872D454E7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::UInt32 a5)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_8B0A151872D454E7_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_3876733A33983F37(::RPG::GameCore::CakeRaceDirection a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::CakeRaceDirection))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_3876733A33983F37_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_0B72C46E4946247B(::RPG::MVector3 a1)
	{
		return ((::System::Int32(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_0B72C46E4946247B_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::System::Single Method_1_35C4A143193C04DA(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_35C4A143193C04DA_OFFSET))(a1);
	}

	static ::System::Single Method_1_DA617170501A4094(::System::Int32 a1)
	{
		return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_DA617170501A4094_OFFSET))(a1);
	}

	static ::RPG::MVector3 Method_1_421AE60DCB968C30(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_421AE60DCB968C30_OFFSET))(a1, a2, a3);
	}

	static ::Class_1_EA5A5E4D07C4CF2B_9* Method_1_A583E291A0EC1B6A(::RPG::MVector3 a1)
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_9*(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_A583E291A0EC1B6A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_882BE6A823B9BC25(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Random* a2, ::System::UInt32& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Random*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_882BE6A823B9BC25_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_C5BD981CFA81FF21(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Random* a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>*& a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Random*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_C5BD981CFA81FF21_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::UInt32 Method_1_DB980174E23FA279(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1, ::System::Random* a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Random*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_DB980174E23FA279_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_B09F0654041238F1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_B09F0654041238F1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_77B879B6480F44AC_3(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77B879B6480F44AC_4(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_77B879B6480F44AC_5(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_77B879B6480F44AC_5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_44A5C0326CBD48DA(::RPG::GameCore::CakeRaceAIState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_44A5C0326CBD48DA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_28392D23B73C97F8(::RPG::GameCore::CakeRaceAIState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_28392D23B73C97F8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_5DBFE56837A0EC06(::RPG::GameCore::CakeRaceAIState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_5DBFE56837A0EC06_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_44A5C0326CBD48DA_1(::RPG::GameCore::CakeRaceAIState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_44A5C0326CBD48DA_1_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_36879C007330AF1F(::Class_2_21AD365C113DC484* a1)
	{
		return ((::System::UInt32(*)(::Class_2_21AD365C113DC484*))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_36879C007330AF1F_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_599076A0FC6E474F(::RPG::GameCore::CakeRaceRegionCellConfig* a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::CakeRaceRegionCellConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_599076A0FC6E474F_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_2DD9914B47A0311E(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::UInt64(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_2DD9914B47A0311E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F94178486D3998ED(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_F94178486D3998ED_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F94178486D3998ED_1(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_F94178486D3998ED_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1419A2A72A244857(::RPG::GameCore::CakeRaceMoveState a1, ::RPG::GameCore::CakeRaceAIState a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState, ::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_1419A2A72A244857_OFFSET))(a1, a2);
	}

	static ::System::UInt64 Method_1_FD027A51FA31C7FA(::RPG::GameCore::CakeRaceAIState a1)
	{
		return ((::System::UInt64(*)(::RPG::GameCore::CakeRaceAIState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_FD027A51FA31C7FA_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_889AA6475635DAEE(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::UInt64(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_889AA6475635DAEE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_BD19557260396D31(::RPG::GameCore::CakeRaceCellType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_BD19557260396D31_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F94178486D3998ED_2(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_F94178486D3998ED_2_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_FF0CD9D2BE2C0FFC(::System::UInt64 a1, ::System::UInt64 a2)
	{
		return ((::System::UInt64(*)(::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_0D37AC66462CC8F3_METHOD_1_FF0CD9D2BE2C0FFC_OFFSET))(a1, a2);
	}
};
