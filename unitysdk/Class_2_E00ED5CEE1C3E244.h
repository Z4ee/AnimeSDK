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

#define CLASS_2_E00ED5CEE1C3E244_DISPOSE_OFFSET UNITYSDK_OFFSET(0x163F3F40)
#define CLASS_2_E00ED5CEE1C3E244_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x163FC790)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_029F0C6DBB8AC745_OFFSET UNITYSDK_OFFSET(0x163FC560)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_04A95A05F6D6788B_OFFSET UNITYSDK_OFFSET(0x163F88E0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_1792F44D8A28BBA5_OFFSET UNITYSDK_OFFSET(0x163FA7B0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_1F3DCDC176F49AED_OFFSET UNITYSDK_OFFSET(0x163F70E0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_20D2EE25D15C1A41_OFFSET UNITYSDK_OFFSET(0x163FA660)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_29EF15CD94593AAE_OFFSET UNITYSDK_OFFSET(0x163F67C0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_2AF3646680A1DD71_OFFSET UNITYSDK_OFFSET(0x163F6E40)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_5003086EDF739650_OFFSET UNITYSDK_OFFSET(0x163FC3B0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_53BD888AED7AAE33_OFFSET UNITYSDK_OFFSET(0x163F5930)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_53D01BC7BE0C0CAC_OFFSET UNITYSDK_OFFSET(0x163F4120)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_56C7D47420B7FEC5_OFFSET UNITYSDK_OFFSET(0x163F7750)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_7D99291CD1BE5ACE_OFFSET UNITYSDK_OFFSET(0x163FAB00)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_825207E03323A5AA_OFFSET UNITYSDK_OFFSET(0x163F7040)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_95F3887CCA36A24C_OFFSET UNITYSDK_OFFSET(0x163F6870)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_98BFACC389297C71_OFFSET UNITYSDK_OFFSET(0x163FB0A0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_9B2468B630F1BF9B_OFFSET UNITYSDK_OFFSET(0x163FA930)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_B826AA0A7B08D316_1_OFFSET UNITYSDK_OFFSET(0x163F7510)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_B826AA0A7B08D316_OFFSET UNITYSDK_OFFSET(0x163F72D0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_C2DEBF51B6B0C21F_OFFSET UNITYSDK_OFFSET(0x163F7A00)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_DBF3FC8D2E94CE92_OFFSET UNITYSDK_OFFSET(0x163F81E0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_E484621534821291_OFFSET UNITYSDK_OFFSET(0x163F43A0)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_E61B723F9C6B7CFD_OFFSET UNITYSDK_OFFSET(0x163F7E20)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_F09F3B003393B142_OFFSET UNITYSDK_OFFSET(0x163F5790)
#define CLASS_2_E00ED5CEE1C3E244_METHOD_2_F111BBB48CC9ED22_OFFSET UNITYSDK_OFFSET(0x163F9010)
#define CLASS_2_E00ED5CEE1C3E244_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163F4480)
#define CLASS_2_E00ED5CEE1C3E244_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x163F6D90)
#define CLASS_2_E00ED5CEE1C3E244_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x163FC7A0)
#define CLASS_2_E00ED5CEE1C3E244_TICK_OFFSET UNITYSDK_OFFSET(0x163F6DE0)
#define CLASS_2_E00ED5CEE1C3E244__CTOR_OFFSET UNITYSDK_OFFSET(0x163F3E80)

inline static constexpr unsigned int Class_2_E00ED5CEE1C3E244_TypeDefinitionIndex = 55189;

class Class_2_E00ED5CEE1C3E244 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::DamageByAttackProperty* OFKGLJOAMLD; // 0x18
	::Class_3_07C3C4D2990C49EE* DOBPMCAIEEI; // 0x20
	::System::Collections::Generic::List_1<::Class_1_6A0C51CBDC1DAB09*>* IIFDOKDCEEC; // 0x28
	::Class_1_43B0AF86156D9901* AIJGGLCAEON; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::System::Boolean _Disposed_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_DISPOSE_OFFSET))(this);
	}

	::Class_1_6A0C51CBDC1DAB09* Method_2_53D01BC7BE0C0CAC()
	{
		return ((::Class_1_6A0C51CBDC1DAB09*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_53D01BC7BE0C0CAC_OFFSET))(this);
	}

	::System::Void Method_2_E484621534821291(::Class_1_6A0C51CBDC1DAB09* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6A0C51CBDC1DAB09*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_95F3887CCA36A24C(::System::Boolean& a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean&, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_95F3887CCA36A24C_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_TICK_OFFSET))(this, a1);
	}

	::Class_1_843DD6330B22E422* Method_2_2AF3646680A1DD71(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::FixPoint a4)
	{
		return ((::Class_1_843DD6330B22E422*(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_2AF3646680A1DD71_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_825207E03323A5AA(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_825207E03323A5AA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_1F3DCDC176F49AED(::Class_1_843DD6330B22E422*& a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_1F3DCDC176F49AED_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_29EF15CD94593AAE(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_29EF15CD94593AAE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_53BD888AED7AAE33(::Class_1_C4B000B71ED01017_1* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4B000B71ED01017_1*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_53BD888AED7AAE33_OFFSET))(this, a1);
	}

	::System::Void Method_2_B826AA0A7B08D316(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_B826AA0A7B08D316_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_B826AA0A7B08D316_1(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_B826AA0A7B08D316_1_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_56C7D47420B7FEC5(::Class_1_843DD6330B22E422* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TurnBasedAbilityComponent* a3, ::RPG::GameCore::GameEntity* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::TurnBasedAbilityComponent* a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_56C7D47420B7FEC5_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::System::Boolean Method_2_F111BBB48CC9ED22(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2, ::Class_1_843DD6330B22E422* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TurnBasedAbilityComponent* a5, ::RPG::GameCore::GameEntity* a6, ::RPG::GameCore::GameEntity* a7, ::RPG::GameCore::GameEntity* a8, ::System::Boolean a9, ::Class_3_07C3C4D2990C49EE* a10)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_F111BBB48CC9ED22_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
	}

	static ::System::Void Method_2_20D2EE25D15C1A41(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::AttackData* a4, ::Class_1_843DD6330B22E422* a5, ::Struct_2_E03B78B927A9E70C_1 a6)
	{
		return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackData*, ::Class_1_843DD6330B22E422*, ::Struct_2_E03B78B927A9E70C_1))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_20D2EE25D15C1A41_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_C2DEBF51B6B0C21F(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_C2DEBF51B6B0C21F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_E61B723F9C6B7CFD(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_E61B723F9C6B7CFD_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_2_04A95A05F6D6788B(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3, ::Class_3_07C3C4D2990C49EE* a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*, ::Class_3_07C3C4D2990C49EE*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_04A95A05F6D6788B_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_2_7D99291CD1BE5ACE(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_843DD6330B22E422* a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::GameEntity*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_7D99291CD1BE5ACE_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_DBF3FC8D2E94CE92(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::DamageByAttackProperty* a5, ::Class_1_843DD6330B22E422* a6, ::RPG::GameCore::TaskContext* a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::DamageByAttackProperty*, ::Class_1_843DD6330B22E422*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_DBF3FC8D2E94CE92_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_2_98BFACC389297C71(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::TaskContext* a5, ::RPG::GameCore::AttackData* a6, ::System::Single a7)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_98BFACC389297C71_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_2_5003086EDF739650(::System::Int32 a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_5003086EDF739650_OFFSET))(a1, a2);
	}

	static ::System::Void Method_2_029F0C6DBB8AC745(::RPG::Client::MonoEffect* a1, ::RPG::MVector3 a2)
	{
		return ((::System::Void(*)(::RPG::Client::MonoEffect*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_029F0C6DBB8AC745_OFFSET))(a1, a2);
	}

	::System::Void Method_2_F09F3B003393B142(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_F09F3B003393B142_OFFSET))(this, a1);
	}

	static ::System::Void Method_2_1792F44D8A28BBA5(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_1792F44D8A28BBA5_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_2_9B2468B630F1BF9B(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::Class_1_843DD6330B22E422* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::Class_1_843DD6330B22E422*))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_METHOD_2_9B2468B630F1BF9B_OFFSET))(a1, a2);
	}

	::System::Boolean get_Disposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_GET_DISPOSED_OFFSET))(this);
	}

	::System::Void set_Disposed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_E00ED5CEE1C3E244_SET_DISPOSED_OFFSET))(this, a1);
	}
};
