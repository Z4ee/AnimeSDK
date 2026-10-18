#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_1.h"

class Class_1_43B0AF86156D9901;
class Class_1_6A0C51CBDC1DAB09;
class Class_1_843DD6330B22E422;
class Class_1_C4B000B71ED01017_1;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_BCFFA8AF684999EB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC22BC40)
#define CLASS_2_BCFFA8AF684999EB_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xC234FE0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_029F0C6DBB8AC745_OFFSET UNITYSDK_OFFSET(0xC234DB0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_04A95A05F6D6788B_OFFSET UNITYSDK_OFFSET(0xC230660)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_157308BF50706CE3_OFFSET UNITYSDK_OFFSET(0xC232E40)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_1792F44D8A28BBA5_OFFSET UNITYSDK_OFFSET(0xC232CC0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_1F3DCDC176F49AED_OFFSET UNITYSDK_OFFSET(0xC22EE10)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_20D2EE25D15C1A41_OFFSET UNITYSDK_OFFSET(0xC232B70)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_29EF15CD94593AAE_OFFSET UNITYSDK_OFFSET(0xC22E4F0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_2AF3646680A1DD71_OFFSET UNITYSDK_OFFSET(0xC22EB70)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_4217C63A4BECCEF7_OFFSET UNITYSDK_OFFSET(0xC22ED70)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_5003086EDF739650_OFFSET UNITYSDK_OFFSET(0xC234BF0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_53BD888AED7AAE33_OFFSET UNITYSDK_OFFSET(0xC22D640)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_53D01BC7BE0C0CAC_OFFSET UNITYSDK_OFFSET(0xC22BE20)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_56C7D47420B7FEC5_OFFSET UNITYSDK_OFFSET(0xC22F480)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_7D99291CD1BE5ACE_OFFSET UNITYSDK_OFFSET(0xC233340)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_80C0DD05D80076C2_OFFSET UNITYSDK_OFFSET(0xC230D90)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_95F3887CCA36A24C_OFFSET UNITYSDK_OFFSET(0xC22E5A0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_98BFACC389297C71_OFFSET UNITYSDK_OFFSET(0xC2338E0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_A2EB16AC780F7438_OFFSET UNITYSDK_OFFSET(0xC2332C0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_A7632529E4C6A4EB_OFFSET UNITYSDK_OFFSET(0xC2330F0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_B826AA0A7B08D316_1_OFFSET UNITYSDK_OFFSET(0xC22F240)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_B826AA0A7B08D316_OFFSET UNITYSDK_OFFSET(0xC22F000)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_C2DEBF51B6B0C21F_OFFSET UNITYSDK_OFFSET(0xC22F740)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_DBF3FC8D2E94CE92_OFFSET UNITYSDK_OFFSET(0xC22FF20)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_E484621534821291_OFFSET UNITYSDK_OFFSET(0xC22C0A0)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_E61B723F9C6B7CFD_OFFSET UNITYSDK_OFFSET(0xC22FB60)
#define CLASS_2_BCFFA8AF684999EB_METHOD_2_F09F3B003393B142_OFFSET UNITYSDK_OFFSET(0xC22D4A0)
#define CLASS_2_BCFFA8AF684999EB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC22C180)
#define CLASS_2_BCFFA8AF684999EB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC22EAC0)
#define CLASS_2_BCFFA8AF684999EB_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0xC234FF0)
#define CLASS_2_BCFFA8AF684999EB_TICK_OFFSET UNITYSDK_OFFSET(0xC22EB10)
#define CLASS_2_BCFFA8AF684999EB__CTOR_OFFSET UNITYSDK_OFFSET(0xC22BB80)

inline static constexpr unsigned int Class_2_BCFFA8AF684999EB_TypeDefinitionIndex = 54982;

class Class_2_BCFFA8AF684999EB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::Class_3_07C3C4D2990C49EE* DOBPMCAIEEI; // 0x28
	::System::Collections::Generic::List_1<::Class_1_6A0C51CBDC1DAB09*>* IIFDOKDCEEC; // 0x30
	::RPG::GameCore::DamageByAttackProperty* OFKGLJOAMLD; // 0x38
	::System::Boolean _Disposed_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_DISPOSE_OFFSET))(this);
	}

	::Class_1_6A0C51CBDC1DAB09* Method_2_53D01BC7BE0C0CAC()
	{
		return ((::Class_1_6A0C51CBDC1DAB09*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_53D01BC7BE0C0CAC_OFFSET))(this);
	}

	::System::Void Method_2_E484621534821291(::Class_1_6A0C51CBDC1DAB09* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A0C51CBDC1DAB09*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_95F3887CCA36A24C(::System::Boolean& a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_95F3887CCA36A24C_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_TICK_OFFSET))(this, a1);
	}

	::Class_1_843DD6330B22E422* Method_2_2AF3646680A1DD71(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::Class_1_843DD6330B22E422*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_2AF3646680A1DD71_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4217C63A4BECCEF7(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_4217C63A4BECCEF7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1F3DCDC176F49AED(::Class_1_843DD6330B22E422*& a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_1F3DCDC176F49AED_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_29EF15CD94593AAE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_29EF15CD94593AAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_53BD888AED7AAE33(::Class_1_C4B000B71ED01017_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4B000B71ED01017_1*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_53BD888AED7AAE33_OFFSET))(this, a1);
	}

	::System::Void Method_2_B826AA0A7B08D316(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_B826AA0A7B08D316_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B826AA0A7B08D316_1(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_B826AA0A7B08D316_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_56C7D47420B7FEC5(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::TurnBasedAbilityComponent* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_56C7D47420B7FEC5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_2_80C0DD05D80076C2(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2, ::Class_1_843DD6330B22E422* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::Class_3_07C3C4D2990C49EE* a10)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_80C0DD05D80076C2_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_2_20D2EE25D15C1A41(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::AttackData* a4, ::Class_1_843DD6330B22E422* a5, ::Struct_2_E03B78B927A9E70C_1 a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackData*, ::Class_1_843DD6330B22E422*, ::Struct_2_E03B78B927A9E70C_1))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_20D2EE25D15C1A41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C2DEBF51B6B0C21F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_C2DEBF51B6B0C21F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E61B723F9C6B7CFD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_E61B723F9C6B7CFD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_04A95A05F6D6788B(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3, ::Class_3_07C3C4D2990C49EE* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_04A95A05F6D6788B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_7D99291CD1BE5ACE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_7D99291CD1BE5ACE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DBF3FC8D2E94CE92(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::DamageByAttackProperty* a5, ::Class_1_843DD6330B22E422* a6, ::RPG::GameCore::TaskContext* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_DBF3FC8D2E94CE92_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_2_98BFACC389297C71(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::AttackData* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_98BFACC389297C71_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_2_5003086EDF739650(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_5003086EDF739650_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_029F0C6DBB8AC745(::RPG::Client::MonoEffect* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_029F0C6DBB8AC745_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F09F3B003393B142(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_F09F3B003393B142_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1792F44D8A28BBA5(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_1792F44D8A28BBA5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_157308BF50706CE3(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_157308BF50706CE3_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_A7632529E4C6A4EB(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_A7632529E4C6A4EB_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_A2EB16AC780F7438(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_METHOD_2_A2EB16AC780F7438_OFFSET))(a1, a2);
	}

	::System::Boolean get_Disposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_GET_DISPOSED_OFFSET))(this);
	}

	::System::Void set_Disposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BCFFA8AF684999EB_SET_DISPOSED_OFFSET))(this, a1);
	}
};
