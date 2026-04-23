#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7A52AD9B5F892205.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsBuyResult.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsDiscardResult.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/TacticsRefreshResult.h"

class Class_1_3A79FA8447E0C088;
class Class_1_F9FBCC956DFCF137;
class Class_2_1BB8CA1042AACD99;
class Class_2_73EED2011DD8416E;
class Class_2_8C608625ABC8C4FA_1;
class Class_2_93408CA7FC642218;
class Class_2_93408CA7FC642218_1;
class Class_4_38B51614211CBC7D;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_7AA210EF8FC8F0B0_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17DA5C50)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_09975C9849AAD256_OFFSET UNITYSDK_OFFSET(0x17DA9130)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x17DA5200)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_1D15935F72FF61F9_OFFSET UNITYSDK_OFFSET(0x17DA9300)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_2F9562D33683D4F7_OFFSET UNITYSDK_OFFSET(0x17DA70A0)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_45AACBD3C3B24900_OFFSET UNITYSDK_OFFSET(0x17DAA890)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_5286B1517E7B27D7_OFFSET UNITYSDK_OFFSET(0x17DA9010)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_5A89D89B4F40F4A8_1_OFFSET UNITYSDK_OFFSET(0x17DA78F0)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_5A89D89B4F40F4A8_OFFSET UNITYSDK_OFFSET(0x17DA74D0)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_7ABCA3BE6AF4A2A9_OFFSET UNITYSDK_OFFSET(0x17DA8050)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_8FF1ECA421ECBEB5_OFFSET UNITYSDK_OFFSET(0x17DA9AD0)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_9EE507DDA5713B85_OFFSET UNITYSDK_OFFSET(0x17DA7D10)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_AB88190D695EBEA9_1_OFFSET UNITYSDK_OFFSET(0x17DA6590)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0x17DA5F20)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_B71FFEB0DC4D6D0D_OFFSET UNITYSDK_OFFSET(0x17DA8990)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_BD2F8ECECEAD4800_OFFSET UNITYSDK_OFFSET(0x17DA56E0)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_C43DCE34C619E92F_OFFSET UNITYSDK_OFFSET(0x17DA9730)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_CD28994AFE636FFF_OFFSET UNITYSDK_OFFSET(0x17DA4D10)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_DE2090B5571A9853_1_OFFSET UNITYSDK_OFFSET(0x17DAA2E0)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_DE2090B5571A9853_OFFSET UNITYSDK_OFFSET(0x17DA9C80)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_EDAA7525CDB743FF_OFFSET UNITYSDK_OFFSET(0x17DAAB80)
#define CLASS_2_7AA210EF8FC8F0B0_METHOD_2_F7E71F5BED414A40_OFFSET UNITYSDK_OFFSET(0x17DA6AA0)
#define CLASS_2_7AA210EF8FC8F0B0__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA4D00)

inline static constexpr unsigned int Class_2_7AA210EF8FC8F0B0_TypeDefinitionIndex = 34310;

class Class_2_7AA210EF8FC8F0B0 : public ::Class_1_7A52AD9B5F892205
{
public:
	::Class_2_93408CA7FC642218* Field_2_5; // 0x18
	::Class_4_38B51614211CBC7D* Field_2_0; // 0x20
	::Class_1_F9FBCC956DFCF137* Field_2_3; // 0x28
	::Class_2_73EED2011DD8416E* Field_2_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_1_3A79FA8447E0C088*>*>* Field_2_8; // 0x38
	::Class_1_F9FBCC956DFCF137* Field_2_4; // 0x40
	::Class_2_93408CA7FC642218_1* Field_2_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Field_2_9; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* Field_2_10; // 0x58
	::Class_1_F9FBCC956DFCF137* Field_2_2; // 0x60
	::Class_2_8C608625ABC8C4FA_1* Field_2_1; // 0x68
	::System::Int32 Field_2_11; // 0x70

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CD28994AFE636FFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_CD28994AFE636FFF_OFFSET))(this);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_2_BD2F8ECECEAD4800()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_BD2F8ECECEAD4800_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_AB88190D695EBEA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_AB88190D695EBEA9_OFFSET))(this);
	}

	::System::Void Method_2_AB88190D695EBEA9_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_AB88190D695EBEA9_1_OFFSET))(this);
	}

	::System::Void Method_2_F7E71F5BED414A40(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_F7E71F5BED414A40_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F9562D33683D4F7(::Class_2_1BB8CA1042AACD99* a1, ::Class_2_1BB8CA1042AACD99* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_2_1BB8CA1042AACD99*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_2F9562D33683D4F7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5A89D89B4F40F4A8(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_5A89D89B4F40F4A8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5A89D89B4F40F4A8_1(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_5A89D89B4F40F4A8_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9EE507DDA5713B85(::System::Int32 a1, ::Class_2_1BB8CA1042AACD99* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_9EE507DDA5713B85_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7ABCA3BE6AF4A2A9(::System::Int32 a1, ::Class_2_1BB8CA1042AACD99* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_7ABCA3BE6AF4A2A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5286B1517E7B27D7(::System::Int32 a1, ::Class_2_1BB8CA1042AACD99* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_1BB8CA1042AACD99*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_5286B1517E7B27D7_OFFSET))(this, a1, a2, a3);
	}

	::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult Method_2_09975C9849AAD256(::System::Int32 a1, ::Class_2_1BB8CA1042AACD99* a2)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::TacticsRefreshResult(*)(::PVOID, ::System::Int32, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_09975C9849AAD256_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_B71FFEB0DC4D6D0D(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Int32& a4)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_B71FFEB0DC4D6D0D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_2_1D15935F72FF61F9(::System::Int32 a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_1D15935F72FF61F9_OFFSET))(this, a1, a2, a3);
	}

	::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult Method_2_C43DCE34C619E92F(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::TacticsBuyResult(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_C43DCE34C619E92F_OFFSET))(this, a1, a2);
	}

	::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult Method_2_8FF1ECA421ECBEB5(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::TacticsDiscardResult(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_8FF1ECA421ECBEB5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE2090B5571A9853(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_DE2090B5571A9853_OFFSET))(this, a1);
	}

	::System::Void Method_2_DE2090B5571A9853_1(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_DE2090B5571A9853_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_45AACBD3C3B24900(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_45AACBD3C3B24900_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_EDAA7525CDB743FF(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_2_7AA210EF8FC8F0B0_METHOD_2_EDAA7525CDB743FF_OFFSET))(this, a1);
	}
};
