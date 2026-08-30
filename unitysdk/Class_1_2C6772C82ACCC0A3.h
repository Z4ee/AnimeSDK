#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/GridLocalPoint.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ViewMomentType.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/Struct_2_5C4F194DEECB2289.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_066AB55B5826B0C9;
class Class_1_1F84CFE380A91B33;
class Class_1_6698EBFD99A3F560;
class Class_1_7C297F0B808B5FA9;
class Class_1_7E55E00A0254799D;
class Class_1_B822DA0F8FF82394;
class Class_1_D33B7D6901AE39E9;
class Class_2_4706D3AD6019CD01;
class Class_3_1A9D32B2B1D681B8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2C6772C82ACCC0A3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BAAFC70)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_00A454A4D5714920_OFFSET UNITYSDK_OFFSET(0x1BAB1C20)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x1BAB4830)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_214C04EEA791FCB5_OFFSET UNITYSDK_OFFSET(0x1BAB3E10)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_2221ED57047BACE0_OFFSET UNITYSDK_OFFSET(0x1BAB2CB0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x1BAB1BA0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_39C75ED00C6629F7_OFFSET UNITYSDK_OFFSET(0x1BAB3D40)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x1BAB3320)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_3DEAA876881764E8_OFFSET UNITYSDK_OFFSET(0x1BAB1DE0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_40A9AF7B6AE5F77E_OFFSET UNITYSDK_OFFSET(0x1BAB4130)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_410AFB0271155FD6_OFFSET UNITYSDK_OFFSET(0x1BAB1850)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_453B88EA0D03EE65_OFFSET UNITYSDK_OFFSET(0x1BAB2380)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_4662179DB83234B6_OFFSET UNITYSDK_OFFSET(0x1BAB2FA0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_4BA85C80CB758712_OFFSET UNITYSDK_OFFSET(0x1BAB3FE0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_4CD4F37E20EF096A_OFFSET UNITYSDK_OFFSET(0x1BAB3DB0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_53BD888AED7AAE33_OFFSET UNITYSDK_OFFSET(0x1BAB3A00)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_5D9794CEF432D881_OFFSET UNITYSDK_OFFSET(0x1BAB2150)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_9D6C85109864ED0C_OFFSET UNITYSDK_OFFSET(0x1BAB4C00)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_9EB9F2083A266861_OFFSET UNITYSDK_OFFSET(0x1BAB4330)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_A04E23DE288D9D06_OFFSET UNITYSDK_OFFSET(0x1BAB2600)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_A05498267EE1C590_OFFSET UNITYSDK_OFFSET(0x1BAB0050)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_AE1494284C139231_OFFSET UNITYSDK_OFFSET(0x1BAB2D90)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_C26E97EB6BF261AF_OFFSET UNITYSDK_OFFSET(0x1BAB4C90)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_C54410EC0B98D111_OFFSET UNITYSDK_OFFSET(0x1BAB1F90)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_CC8A955E8320E4BC_OFFSET UNITYSDK_OFFSET(0x1BAB27F0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_CE889B4C90308205_OFFSET UNITYSDK_OFFSET(0x1BAB28B0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x1BAB0750)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x1BAB3CA0)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_E3F0876823C41AE9_OFFSET UNITYSDK_OFFSET(0x1BAB3150)
#define CLASS_1_2C6772C82ACCC0A3_METHOD_1_F2F08395C02A5CC3_OFFSET UNITYSDK_OFFSET(0x1BAB2A80)
#define CLASS_1_2C6772C82ACCC0A3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAFB00)

inline static constexpr unsigned int Class_1_2C6772C82ACCC0A3_TypeDefinitionIndex = 41013;

class Class_1_2C6772C82ACCC0A3 : public ::System::Object
{
public:
	// static const ::System::Int32 CPFJEPNHMPD = 0x50; // 0x0
	::System::Collections::Generic::List_1<::Class_1_B822DA0F8FF82394*>* MENOBJEFELB; // 0x10
	::Class_1_D33B7D6901AE39E9* FKINCGODJEP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::Class_1_066AB55B5826B0C9*>* HIJPJBGAADF; // 0x20
	::Class_3_1A9D32B2B1D681B8* PDENFEFCAGN; // 0x28
	::System::Boolean CHCJOLJAMBI; // 0x30
	::System::Boolean NBIGKMBLBJD; // 0x31
	::System::Boolean MGJEIMMFGIN; // 0x32
	::System::Boolean MIEILCINNMO; // 0x33
	::System::Int32 IAJDCMPBPGP; // 0x34

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_EXECUTE_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Void Method_1_00A454A4D5714920(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::LittleGame::Match3::ViewMomentType a4, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a5, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a6, ::System::UInt32 a7, ::RPG::GameCore::Match3::BombType a8, ::RPG::GameCore::Match3::PieceTag a9, ::System::Boolean a10)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::Match3::ViewMomentType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_00A454A4D5714920_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	::System::UInt32 Method_1_3DEAA876881764E8(::System::UInt32 a1, ::System::UInt32 a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3, ::RPG::Client::LittleGame::Match3::GridLocalPoint a4, ::System::UInt32 a5)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::LittleGame::Match3::GridLocalPoint, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_3DEAA876881764E8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::UInt32 Method_1_C54410EC0B98D111(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::RPG::GameCore::Match3::PieceTag a5, ::System::Single a6)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_C54410EC0B98D111_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_1_5D9794CEF432D881(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::UInt32 a3, ::RPG::GameCore::Match3::BombType a4, ::System::UInt32 a5, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>> a6, ::System::Boolean a7)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::System::UInt32, ::System::Nullable_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_5D9794CEF432D881_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::UInt32 Method_1_453B88EA0D03EE65(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::RPG::GameCore::Match3::BombType a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_453B88EA0D03EE65_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_A04E23DE288D9D06(::Struct_2_5C4F194DEECB2289 a1, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Struct_2_5C4F194DEECB2289, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_A04E23DE288D9D06_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_CE889B4C90308205(::System::UInt32 a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_CE889B4C90308205_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F2F08395C02A5CC3(::Class_1_1F84CFE380A91B33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F84CFE380A91B33*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_F2F08395C02A5CC3_OFFSET))(this, a1);
	}

	::System::Void Method_1_410AFB0271155FD6(::Class_1_1F84CFE380A91B33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F84CFE380A91B33*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_410AFB0271155FD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A05498267EE1C590(::Class_1_1F84CFE380A91B33* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1F84CFE380A91B33*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_A05498267EE1C590_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E3F0876823C41AE9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_E3F0876823C41AE9_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AE1494284C139231(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_AE1494284C139231_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_53BD888AED7AAE33(::Class_1_7C297F0B808B5FA9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_7C297F0B808B5FA9*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_53BD888AED7AAE33_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_39C75ED00C6629F7(::Class_1_066AB55B5826B0C9* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_066AB55B5826B0C9*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_39C75ED00C6629F7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_1_40A9AF7B6AE5F77E(::Class_1_066AB55B5826B0C9* a1, ::RPG::GameCore::Match3::PieceTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_40A9AF7B6AE5F77E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4BA85C80CB758712(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_4BA85C80CB758712_OFFSET))(this, a1);
	}

	::System::Void Method_1_9EB9F2083A266861(::Class_1_066AB55B5826B0C9* a1, ::RPG::GameCore::Match3::PieceTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_066AB55B5826B0C9*, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_9EB9F2083A266861_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::Class_1_066AB55B5826B0C9* Method_1_CC8A955E8320E4BC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::Class_1_066AB55B5826B0C9*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_CC8A955E8320E4BC_OFFSET))(this, a1);
	}

	::Class_1_6698EBFD99A3F560* Method_1_2221ED57047BACE0(::Class_1_1F84CFE380A91B33* a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::Class_1_6698EBFD99A3F560*(*)(::PVOID, ::Class_1_1F84CFE380A91B33*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_2221ED57047BACE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4662179DB83234B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_4662179DB83234B6_OFFSET))(this);
	}

	::System::Void Method_1_C26E97EB6BF261AF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_C26E97EB6BF261AF_OFFSET))(this);
	}

	::System::Void Method_1_214C04EEA791FCB5(::Class_2_4706D3AD6019CD01* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4706D3AD6019CD01*))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_214C04EEA791FCB5_OFFSET))(this, a1);
	}

	::Class_2_4706D3AD6019CD01* Method_1_4CD4F37E20EF096A()
	{
		return ((::Class_2_4706D3AD6019CD01*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_4CD4F37E20EF096A_OFFSET))(this);
	}

	::Class_1_7E55E00A0254799D* Method_1_9D6C85109864ED0C()
	{
		return ((::Class_1_7E55E00A0254799D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C6772C82ACCC0A3_METHOD_1_9D6C85109864ED0C_OFFSET))(this);
	}
};
