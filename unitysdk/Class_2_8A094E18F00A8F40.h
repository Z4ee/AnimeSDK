#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A52AD9B5F892205.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"

class Class_1_3A79FA8447E0C088;
class Class_1_F9FBCC956DFCF137;
class Class_2_0BA09DE1D5D6F52E;
class Class_2_3616FDE8A71D0590;
class Class_2_AE0FC8C532FC1AC5;
class Class_2_AE0FC8C532FC1AC5_1;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8A094E18F00A8F40_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x198C5840)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_09975C9849AAD256_OFFSET UNITYSDK_OFFSET(0x198C94F0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_1AA4C08153C786BA_OFFSET UNITYSDK_OFFSET(0x198C6510)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_4894598C6DD835BD_OFFSET UNITYSDK_OFFSET(0x198C8160)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_5147A8249EC9E9B1_OFFSET UNITYSDK_OFFSET(0x198CA070)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_62B27C0D6DC1514A_1_OFFSET UNITYSDK_OFFSET(0x198CACD0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_62B27C0D6DC1514A_OFFSET UNITYSDK_OFFSET(0x198CA730)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_666BAAFF192803EC_OFFSET UNITYSDK_OFFSET(0x198CB740)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_7EAAF91808ED5378_OFFSET UNITYSDK_OFFSET(0x198C8BB0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_83327A331B03E162_OFFSET UNITYSDK_OFFSET(0x198C7C30)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_8FF1ECA421ECBEB5_OFFSET UNITYSDK_OFFSET(0x198CA5A0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_A3B8C478C68B9401_OFFSET UNITYSDK_OFFSET(0x198CB280)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x198C46E0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x198C4D80)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x198C52F0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_C1B61906B13BAEEA_OFFSET UNITYSDK_OFFSET(0x198C6C70)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_C6A676C30D6109F0_OFFSET UNITYSDK_OFFSET(0x198C9230)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_C89C1CA4CFB37E46_OFFSET UNITYSDK_OFFSET(0x198C9A20)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_D545E2F706415F81_1_OFFSET UNITYSDK_OFFSET(0x198C6000)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x198C5AF0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_E8AA0BE90896896E_1_OFFSET UNITYSDK_OFFSET(0x198C77F0)
#define CLASS_2_8A094E18F00A8F40_METHOD_2_E8AA0BE90896896E_OFFSET UNITYSDK_OFFSET(0x198C7240)
#define CLASS_2_8A094E18F00A8F40__CTOR_OFFSET UNITYSDK_OFFSET(0x198C46D0)

inline static constexpr unsigned int Class_2_8A094E18F00A8F40_TypeDefinitionIndex = 34974;

class Class_2_8A094E18F00A8F40 : public ::Class_1_7A52AD9B5F892205
{
public:
	::Class_2_3616FDE8A71D0590* Field_2_0; // 0x18
	::Class_4_38B51614211CBC7D* Field_2_1; // 0x20
	::Class_2_0BA09DE1D5D6F52E* Field_2_2; // 0x28
	::Class_2_AE0FC8C532FC1AC5_1* Field_2_3; // 0x30
	::Class_1_F9FBCC956DFCF137* Field_2_4; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_3A79FA8447E0C088*>*>* Field_2_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_2_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_7; // 0x50
	::Class_1_F9FBCC956DFCF137* Field_2_8; // 0x58
	::Class_1_F9FBCC956DFCF137* Field_2_9; // 0x60
	::Class_2_AE0FC8C532FC1AC5* Field_2_10; // 0x68
	::System::Int32 Field_2_11; // 0x70

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A40475C44AA8CEAB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_A40475C44AA8CEAB_OFFSET))(this);
	}

	::System::Void Method_2_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_D545E2F706415F81_1_OFFSET))(this);
	}

	::System::Void Method_2_1AA4C08153C786BA(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_1AA4C08153C786BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1B61906B13BAEEA(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_2_AEE59ED8DADEC1A1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_C1B61906B13BAEEA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E8AA0BE90896896E(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_E8AA0BE90896896E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E8AA0BE90896896E_1(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_E8AA0BE90896896E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_83327A331B03E162(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_83327A331B03E162_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_4894598C6DD835BD(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_4894598C6DD835BD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C6A676C30D6109F0(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_C6A676C30D6109F0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult Method_2_09975C9849AAD256(::System::Int32 a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult(*)(::PVOID, ::System::Int32, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_09975C9849AAD256_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_7EAAF91808ED5378(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Int32& a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_7EAAF91808ED5378_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_2_C89C1CA4CFB37E46(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_C89C1CA4CFB37E46_OFFSET))(this, a1, a2, a3);
	}

	::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult Method_2_5147A8249EC9E9B1(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_5147A8249EC9E9B1_OFFSET))(this, a1, a2);
	}

	::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult Method_2_8FF1ECA421ECBEB5(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_8FF1ECA421ECBEB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_62B27C0D6DC1514A(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_62B27C0D6DC1514A_OFFSET))(this, a1);
	}

	::System::Void Method_2_62B27C0D6DC1514A_1(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_62B27C0D6DC1514A_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_A3B8C478C68B9401(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_A3B8C478C68B9401_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_666BAAFF192803EC(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_8A094E18F00A8F40_METHOD_2_666BAAFF192803EC_OFFSET))(this, a1);
	}
};
